/* eslint-disable */
// this is an auto generated file. This will be overwritten

export const createAuthor = /* GraphQL */ `
  mutation CreateAuthor($input: CreateAuthorInput!) {
    createAuthor(input: $input) {
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
export const updateAuthor = /* GraphQL */ `
  mutation UpdateAuthor($input: UpdateAuthorInput!) {
    updateAuthor(input: $input) {
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
export const deleteAuthor = /* GraphQL */ `
  mutation DeleteAuthor($input: DeleteAuthorInput!) {
    deleteAuthor(input: $input) {
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
export const createPost = /* GraphQL */ `
  mutation CreatePost($input: CreatePostInput!) {
    createPost(input: $input) {
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
export const updatePost = /* GraphQL */ `
  mutation UpdatePost($input: UpdatePostInput!) {
    updatePost(input: $input) {
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
export const deletePost = /* GraphQL */ `
  mutation DeletePost($input: DeletePostInput!) {
    deletePost(input: $input) {
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
