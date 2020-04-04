/* eslint-disable */
// this is an auto generated file. This will be overwritten

export const onCreateAuthor = /* GraphQL */ `
  subscription OnCreateAuthor {
    onCreateAuthor {
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
export const onUpdateAuthor = /* GraphQL */ `
  subscription OnUpdateAuthor {
    onUpdateAuthor {
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
export const onDeleteAuthor = /* GraphQL */ `
  subscription OnDeleteAuthor {
    onDeleteAuthor {
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
export const onCreatePost = /* GraphQL */ `
  subscription OnCreatePost {
    onCreatePost {
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
export const onUpdatePost = /* GraphQL */ `
  subscription OnUpdatePost {
    onUpdatePost {
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
export const onDeletePost = /* GraphQL */ `
  subscription OnDeletePost {
    onDeletePost {
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
