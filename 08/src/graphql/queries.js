/* eslint-disable */
// this is an auto generated file. This will be overwritten

export const getAuthor = /* GraphQL */ `
  query GetAuthor($id: ID!) {
    getAuthor(id: $id) {
      id
      userID
      firstName
      lastName
      email
      createdAt
      updatedAt
      posts {
        items {
          id
          title
          body
          tags
          createdAt
          updatedAt
        }
        nextToken
      }
    }
  }
`;
export const listAuthors = /* GraphQL */ `
  query ListAuthors(
    $filter: ModelAuthorFilterInput
    $limit: Int
    $nextToken: String
  ) {
    listAuthors(filter: $filter, limit: $limit, nextToken: $nextToken) {
      items {
        id
        userID
        firstName
        lastName
        email
        createdAt
        updatedAt
        posts {
          nextToken
        }
      }
      nextToken
    }
  }
`;
export const getPost = /* GraphQL */ `
  query GetPost($id: ID!) {
    getPost(id: $id) {
      id
      title
      body
      tags
      createdAt
      updatedAt
      author {
        id
        userID
        firstName
        lastName
        email
        createdAt
        updatedAt
        posts {
          nextToken
        }
      }
    }
  }
`;
export const listPosts = /* GraphQL */ `
  query ListPosts(
    $filter: ModelPostFilterInput
    $limit: Int
    $nextToken: String
  ) {
    listPosts(filter: $filter, limit: $limit, nextToken: $nextToken) {
      items {
        id
        title
        body
        tags
        createdAt
        updatedAt
        author {
          id
          userID
          firstName
          lastName
          email
          createdAt
          updatedAt
        }
      }
      nextToken
    }
  }
`;
