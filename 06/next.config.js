const withPlugins = require('next-compose-plugins');
const withSass = require('@zeit/next-sass');
const withCSS = require('@zeit/next-css');
const withTM = require('next-transpile-modules');

if (typeof require !== 'undefined') {
  require.extensions['.less'] = () => {}
  require.extensions['.css'] = file => {}
}

module.exports = withPlugins([withCSS, withSass, withTM], {
  transpileModules: ['bs-platform', 'bs-css', 'reason-apollo-hooks'],
  pageExtensions: ['jsx', 'js', 'bs.js'],
  resolve: {
    modules: ['sass_loader'],
    cssModules: true,
  },
  webpack (config, options) {
    config.module.rules.push({
      test: /\.css$/,
      loader: [
        require.resolve('postcss-loader'),
      ],
    });
    // Fixes npm packages that depend on `fs` module
    config.node = {
      fs: 'empty'
    };
    return config
  },
});

