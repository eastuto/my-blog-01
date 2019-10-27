const withPlugins = require('next-compose-plugins');
const withSass = require('@zeit/next-sass');
const withCSS = require('@zeit/next-css');
const withTM = require('next-transpile-modules');

module.exports = withPlugins([[withSass, withCSS], [withTM, {
  transpileModules: ['bs-platform', 'bs-css']
}]], {
  pageExtensions: ['jsx', 'js', 'bs.js'],
  resolve: {
    modules: ['sass_loader'],
    cssModules: true,
  },
  webpack: config => {
    // Fixes npm packages that depend on `fs` module
    config.node = {
      fs: 'empty'
    };
    return config
  },
});
