# Project Title: 0x12. C - Singly-linked lists

## Overview

A singly linked list is a collection of heterogenous data elements in linear form stored in non-consecutive locations. This project covers the relevance of singly linked list compared to arrays - when, and how to use and build a singly linked list. 

The following are terms used in this project topic:
- **Node:** A node is a basic block that stores data elements/values and a pointer to the next node in the list. A node consists of **two parts:
  - ** **Data part:** This represents the actual value that the node holds. It can be any type: int, char, float, etc.
  - **Reference part:** This part consists of a pointer that points to the next node in the linked list and this pointer is what establishes the connection between nodes.
- **Head:** This serves as an entry point of the linked list. It is a pointer to the first node in the list.
- **Tail:** This is the last node in a linked list. It usually does not have a reference/pointer to any other node in the list (simply put, it points to NULL).
- **Traversing:** This is the process of moving along a linked list to access data stored in the list.

**Steps involved in Building a Singly Linked List:**
- Define a node template
- Allocate memory for the nodes declared
- Assign values to the nodes
- Assign address to the nodes
- Declare a temporary pointer to traverse the list
