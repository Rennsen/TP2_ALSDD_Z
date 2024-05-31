# Practical Work in Algorithmics and Dynamic Data Structures

## Overview

This project, developed in collaboration with Ait Ahmed Tarek, supervised by Pr D.E Zegour, focuses on implementing and animating two types of traversals for a Binary Search Tree (BST) using the C programming language. Additionally, we have utilized the Z language, which is specific to our higher school (ESI), to complement the algorithmic aspect of this project. 

The project includes:
1. Branch-by-branch traversal (Bottom to Top, Left to Right and its Right to Left variant).
2. Leaf-by-leaf traversal (Left to Right and its Right to Left variant).
3. Random tree generation.
4. User interaction for manual or random tree creation.
5. Animation of the traversals.

The main program is coded in C and can be run in a C IDE. The algorithm is achieved through the use of Z language and can be accessed and run in its respective IDE [KHAWARIZM](https://zegour.esi.dz/Developpement/Seriez/khawarizm_ii_afe.htm).

## Features

### 1. Traversals

#### Branch-by-Branch Traversal
- **Bottom to Top, Left to Right (BB_LR)**: This traversal explores the tree from the bottom-most branches, starting from the leftmost branch and moving to the right.
- **Bottom to Top, Right to Left (BB_RL)**: This traversal explores the tree from the bottom-most branches, starting from the rightmost branch and moving to the left.

#### Leaf-by-Leaf Traversal
- **Left to Right (LL_LR)**: This traversal explores only the leaf nodes, starting from the leftmost leaf and moving to the right.
- **Right to Left (LL_RL)**: This traversal explores only the leaf nodes, starting from the rightmost leaf and moving to the left.

### 2. Random Tree Generation
The program can generate a random BST with a specified number of nodes. This feature is useful for testing the traversal algorithms on various tree structures.

### 3. Manual Tree Creation
Users can manually input the values to create their own BST. This allows for customized tree structures to test specific scenarios.

### 4. Animation
The traversals can be animated to visually demonstrate how the tree is traversed. This helps in understanding the traversal process better.

## Installation and Usage

### Prerequisites
- A C compiler (e.g., GCC).
- An IDE for C programming (e.g., Code::Blocks, Visual Studio).
- An IDE for the Z language (KHAWARIZM, specific to ESI).

### Installation

1. **Clone the repository:**
   ```sh
   git clone https://github.com/Rennsen/TP2_ALSDD_Z.git
   ```
2. **Navigate to the project directory:**
   ```sh
   cd repository
   ```
3. **Compile the C program:**
   ```sh
   gcc TP_Z_C_FinalVersion.c -o TP_Z_C_FinalVersion
   ```

### Running the Program

1. **Run the executable:**
   ```sh
   ./TP_Z_C_FinalVersion
   ```
2. **Follow the on-screen instructions to create a BST and animate the traversals.**

### Program Structure

#### Main Program (`TP_Z_C_FinalVersion.c`)
The main program initializes the BST and provides a menu for the user to choose between different options:
- Display the result of 10 randomly generated trees of 100 nodes each.
- Create a BST (Random or Manual).
- Animate the Branch-by-Branch or Leaf-by-Leaf traversal of either the Practical work example or the user's own created tree.

#### Tree Operations
Functions for:
- Inserting nodes into the BST.
- Traversing the BST (both branch-by-branch and leaf-by-leaf).
- Animating the traversal.

#### Utility Functions
Functions for:
- Clearing the screen.
- Setting text colors for animation.

### Example Usage

```sh
█████████████████████████████████████████████████████████████████
████                                                                         ████
████                        MENU                                             ████
████                                                                         ████
█████████████████████████████████████████████████████████████████


     1) The main algorithm traversing the all 10 tree and do the verification

     2) The animation of the first traversal: branch by branch from the left to the right  (initally tp example, can be your generated tree)

     3) The animation of the third traversal: branch by branch from the right to the left (initally tp example, can be your generated tree)

     4) The animation of the second traversal: leaf by leaf from the left to the right (initally tp example, can be your generated tree)

     5) The animation of the fourth traversal: leaf by leaf from the right to the left  (initally tp example, can be your generated tree)

     6) Create your own tree example

     7) Print the BST in a tree format

     0) Exit the program

     Enter your choice: 1

    ---------------------------------------------------------------

 THIS IS THE TRAVERSAL OF THE TREE NUMBER 1

 This is the inorder traversal of the tree: 25 |27 |44 |47 |57 |68 |69 |77 |85 |91 |94 |102 |112 |130 |134 |139 |142 |158 |162 |172 |180 |199 |200 |209 |227 |241 |244 |246 |247 |258 |263 |283 |287 |295 |319 |326 |333 |340 |378 |408 |412 |447 |458 |459 |460 |492 |517 |527 |530 |540 |560 |561 |565 |575 |594 |597 |599 |604 |616 |620 |629 |631 |636 |681 |684 |689 |690 |691 |696 |706 |725 |726 |730 |733 |740 |751 |752 |757 |778 |781 |792 |797 |812 |826 |829 |837 |839 |841 |843 |880 |886 |888 |893 |903 |915 |923 |961 |962 |981 |

 Checking if the binary search tree is well constructed : OK
 Traversal of the tree branch by branch from the left to the right : OK
 Traversal of the tree branch by branch from the right to the left : OK
 Traversal of the tree leaf by leaf from the left to the right : OK
 Traversal of the tree leaf by leaf from the right to the left : OK


 The verification of the traversal leaf by leaf from the left to the right : OK
 The verification of the traversal leaf by leaf from the right to the left : OK
 The verification of the traversal branch by branch from the left to the right : OK
 The verification of the traversal branch by branch from the right to the left : OK

 The traversal of the tree branch by branch from the left to the right :

  25 | 27 | 69 | 295 | 540 | 730 | 781 | 44 | 47 | 68 | 57 | 85 | 91 | 94 | 77 | 102 | 158 | 112 | 130 | 139 | 142 | 134 | 199 | 180 | 200 | 172 | 209 | 162 | 283 | 241 | 244 | 227 | 247 | 258 | 263 | 246 | 287 | 326 | 319 | 333 | 412 | 458 | 459 | 378 | 340 | 408 | 447 | 492 | 460 | 517 | 530 | 527 | 561 | 560 | 565 | 599 | 636 | 575 | 594 | 597 | 604 | 616 | 629 | 620 | 631 | 681 | 684 | 689 | 691 | 690 | 696 | 725 | 706 | 726 | 740 | 733 | 751 | 778 | 752 | 757 | 812 | 826 | 829 | 843 | 797 | 792 | 886 | 903 | 837 | 839 | 841 | 880 | 893 | 888 | 961 | 923 | 962 | 915 | 981 |

  The traversal of the tree branch by branch from the right to the left :

 981 | 962 | 915 | 903 | 781 | 961 | 923 | 893 | 888 | 886 | 880 | 843 | 797 | 792 | 837 | 839 | 841 | 829 | 812 | 826 | 752 | 757 | 751 | 778 | 730 | 740 | 733 | 726 | 725 | 689 | 636 | 540 | 706 | 696 | 691 | 690 | 681 | 684 | 631 | 629 | 599 | 620 | 616 | 604 | 575 | 594 | 597 | 565 | 561 | 560 | 530 | 527 | 517 | 459 | 295 | 492 | 460 | 447 | 412 | 458 | 378 | 340 | 408 | 333 | 326 | 319 | 287 | 283 | 158 | 69 | 247 | 258 | 263 | 246 | 244 | 227 | 209 | 162 | 241 | 199 | 180 | 200 | 172 | 139 | 142 | 134 | 130 | 102 | 112 | 85 | 91 | 94 | 77 | 57 | 47 | 68 | 27 | 44 | 25 | 

  The traversal of the tree leaf by leaf from the left to the right : 

 25 | 44 | 57 | 85 | 112 | 139 | 199 | 241 | 247 | 287 | 326 | 378 | 447 | 492 | 530 | 561 | 575 | 604 | 620 | 631 | 681 | 691 | 706 | 726 | 740 | 752 | 812 | 837 | 880 | 893 | 961 | 981 | 47 | 91 | 142 | 180 | 258 | 319 | 340 | 460 | 527 | 560 | 594 | 616 | 684 | 690 | 733 | 757 | 826 | 839 | 888 | 923 | 68 | 94 | 134 | 200 | 263 | 408 | 517 | 597 | 629 | 696 | 751 | 841 | 962 | 27 | 77 | 130 | 172 | 246 | 333 | 565 | 725 | 778 | 829 | 915 | 102 | 244 | 412 | 599 | 689 | 843 | 227 | 458 | 636 | 797 | 209 | 459 | 792 | 162 | 886 | 283 | 903 | 158 | 69 | 295 | 540 | 730 | 781 |  

 The traversal of the tree leaf by leaf from the right to the left : 

 981 | 961 | 893 | 880 | 837 | 812 | 752 | 740 | 726 | 706 | 691 | 681 | 631 | 620 | 604 | 575 | 561 | 530 | 492 | 447 | 378 | 326 | 287 | 247 | 241 | 199 | 139 | 112 | 85 | 57 | 44 | 25 | 923 | 888 | 839 | 826 | 757 | 733 | 690 | 684 | 616 | 594 | 560 | 527 | 460 | 340 | 319 | 258 | 180 | 142 | 91 | 47 | 962 | 841 | 751 | 696 | 629 | 597 | 517 | 408 | 263 | 200 | 134 | 94 | 68 | 915 | 829 | 778 | 725 | 565 | 333 | 246 | 172 | 130 | 77 | 27 | 843 | 689 | 599 | 412 | 244 | 102 | 797 | 636 | 458 | 227 | 792 | 459 | 209 | 886 | 162 | 903 | 283 | 158 | 69 | 295 | 540 | 730 | 781 | 




> Press any key to proceed with the next tree...
...

█████████████████████████████████████████████████████████████████
████                                                                         ████
████                        MENU                                             ████
████                                                                         ████
█████████████████████████████████████████████████████████████████


     1) The main algorithm traversing the all 10 tree and do the verification

     2) The animation of the first traversal: branch by branch from the left to the right  (initally tp example, can be your generated tree)

     3) The animation of the third traversal: branch by branch from the right to the left (initally tp example, can be your generated tree)

     4) The animation of the second traversal: leaf by leaf from the left to the right (initally tp example, can be your generated tree)

     5) The animation of the fourth traversal: leaf by leaf from the right to the left  (initally tp example, can be your generated tree)

     6) Create your own tree example

     7) Print the BST in a tree format

     0) Exit the program

     Enter your choice: 6

You selected: Creating you own BST example :
█████████████████████████████████████████████████████████████████
████                                                                         ████
████                 CREATE YOUR BST                                         ████
████                                                                         ████
█████████████████████████████████████████████████████████████████


1. Binary search tree construction
   -----------------------

1. Random construction
2. Manual construction

>  Your choice : 1

1. Binary search tree construction
-------------------------------
1. Random construction

Give the number of Nodes : 10
Give the maximum value: 100
Give the minimum value: 1

The tree is constructed !! :)


> Press ENTER to continue ...

Do you want to continue? (Press 'Y' to continue): Y

█████████████████████████████████████████████████████████████████
████                                                                         ████
████                        MENU                                             ████
████                                                                         ████
█████████████████████████████████████████████████████████████████


     1) The main algorithm traversing the all 10 tree and do the verification

     2) The animation of the first traversal: branch by branch from the left to the right  (initally tp example, can be your generated tree)

     3) The animation of the third traversal: branch by branch from the right to the left (initally tp example, can be your generated tree)

     4) The animation of the second traversal: leaf by leaf from the left to the right (initally tp example, can be your generated tree)

     5) The animation of the fourth traversal: leaf by leaf from the right to the left  (initally tp example, can be your generated tree)

     6) Create your own tree example

     7) Print the BST in a tree format

     0) Exit the program

     Enter your choice: 7

You selected: Creating you own BST example
NOTICE: There are two modes of display : 
- Complex vertical display if tree height is <= 6 
- Simple horizontal display if tree height is > 6 











                                                      ________________32________________
                                                      |                               |
                                                      18                      ________92
                                                                              |
                                                                          ____66____
                                                                          |       |
                                                                          46__  __80__
                                                                            |   |   |
                                                                            52  76  85







Do you want to continue? (Press 'Y' to continue): Y

█████████████████████████████████████████████████████████████████
████                                                                         ████
████                        MENU                                             ████
████                                                                         ████
█████████████████████████████████████████████████████████████████


     1) The main algorithm traversing the all 10 tree and do the verification

     2) The animation of the first traversal: branch by branch from the left to the right  (initally tp example, can be your generated tree)

     3) The animation of the third traversal: branch by branch from the right to the left (initally tp example, can be your generated tree)

     4) The animation of the second traversal: leaf by leaf from the left to the right (initally tp example, can be your generated tree)

     5) The animation of the fourth traversal: leaf by leaf from the right to the left  (initally tp example, can be your generated tree)

     6) Create your own tree example

     7) Print the BST in a tree format

     0) Exit the program

     Enter your choice: // Proceed with animations or other choices...

```

## Conclusion

This project demonstrates the implementation and animation of various BST traversals. It provides a comprehensive way to visualize how different traversal algorithms work, both through random tree generation and user-defined trees. The use of the Z language complements the algorithmic aspect, providing a solid foundation for understanding dynamic data structures.

We hope this project serves as a useful tool for learning and visualizing BST traversals. If you have any questions or feedback, please feel free to reach out.

## Contributors

- [Rayan Derradji](https://github.com/Rennsen)
- [Tarek Ait Ahmed](https://github.com/tarek-ait)

## License

This project is licensed under the MIT License. See the LICENSE file for details.
