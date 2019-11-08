import React from 'react';
import App from 'next/app';
import { ApolloProvider } from "@apollo/react-common";

import { withApollo } from "../src/util/withApollo";

const Page = require('../src/components/layout/Page.bs').make;

class BlogApp extends App {
  static async getInitialProps({ Component, ctx }) {
    let pageProps = {};

    if (Component.getInitialProps) {
      pageProps = await Component.getInitialProps(ctx);
    }
    return { pageProps };
  }

  render() {
    const { Component, pageProps, apolloClient } = this.props;

    return (
      <ApolloProvider client={apolloClient} >
        <Page>
          <Component {...pageProps} />
        </Page>
      </ApolloProvider>

    );
  }
}

export default withApollo(BlogApp);
