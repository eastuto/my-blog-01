/* eslint-disable */
// this is an auto generated file. This will be overwritten

export const createAuthor = `mutation CreateAuthor($input: CreateAuthorInput!) {
  createAuthor(input: $input) {
    id
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
export const updateAuthor = `mutation UpdateAuthor($input: UpdateAuthorInput!) {
  updateAuthor(input: $input) {
    id
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
export const deleteAuthor = `mutation DeleteAuthor($input: DeleteAuthorInput!) {
  deleteAuthor(input: $input) {
    id
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
export const createPost = `mutation CreatePost($input: CreatePostInput!) {
  createPost(input: $input) {
    id
    title
    body
    tags
    createdAt
    updatedAt
    author {
      id
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
export const updatePost = `mutation UpdatePost($input: UpdatePostInput!) {
  updatePost(input: $input) {
    id
    title
    body
    tags
    createdAt
    updatedAt
    author {
      id
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
export const deletePost = `mutation DeletePost($input: DeletePostInput!) {
  deletePost(input: $input) {
    id
    title
    body
    tags
    createdAt
    updatedAt
    author {
      id
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
