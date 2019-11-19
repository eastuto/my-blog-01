/* eslint-disable */
// this is an auto generated file. This will be overwritten

export const onCreateAuthor = `subscription OnCreateAuthor {
  onCreateAuthor {
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
export const onUpdateAuthor = `subscription OnUpdateAuthor {
  onUpdateAuthor {
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
export const onDeleteAuthor = `subscription OnDeleteAuthor {
  onDeleteAuthor {
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
export const onCreatePost = `subscription OnCreatePost {
  onCreatePost {
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
export const onUpdatePost = `subscription OnUpdatePost {
  onUpdatePost {
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
export const onDeletePost = `subscription OnDeletePost {
  onDeletePost {
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
