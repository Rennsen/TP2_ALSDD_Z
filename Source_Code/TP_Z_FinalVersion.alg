
  /* we only need to do the verification and the deletion */
   SOIENT
  /* variables */
       Root1 UN ARB DE ( ENTIER , BOOLEEN ) ;
       Root2 UN ARB DE ( ENTIER , BOOLEEN ) ;
       P UN ARB DE ( ENTIER , BOOLEEN ) ;
       Q UN ARB DE ( ENTIER , BOOLEEN ) ;
       N UN ENTIER ;
       Temp UNE LISTE ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head1 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head2 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head3 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head4 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head5 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head6 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head7 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head8 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Root3 UN ARB DE ( ENTIER , BOOLEEN ) ;
       Root4 UN ARB DE ( ENTIER , BOOLEEN ) ;
       Temparb UN ARB DE ( ENTIER , BOOLEEN ) ;
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       M UN ENTIER ;
       Is_leaf : FONCTION ( BOOLEEN ) ;
       Is_visited : FONCTION ( BOOLEEN ) ;
       Binary_tree : FONCTION ( BOOLEEN ) ;
       Compare_list : FONCTION ( BOOLEEN ) ;
       Create_node : FONCTION ( ARB DE ( ENTIER , BOOLEEN ) ) ;
       Create_tree : ACTION ;
       Delete : ACTION ;
       Ll_lr : ACTION ;
       Ll_rl : ACTION ;
       Bb_lr : ACTION ;
       Bb_rl : ACTION ;
       Path_list_lr : ACTION ;
       Path_list_rl : ACTION ;
       Verify_bb_lr : ACTION ;
       Verify_bb_rl : ACTION ;
       Verify_ll_lr : ACTION ;
       Verify_ll_rl : ACTION ;
       Aff_visited : ACTION ;
       Rech_val : ACTION ;
       Search : ACTION ;
       Initialize_visited : ACTION ;
       Inorder_iterative : ACTION ;
       Print_list : ACTION ;
       Delete_duplicates : ACTION ;
       Stack_list : ACTION ;
       Inordertraversal : ACTION ;
   DEBUT
  /* we are still having an error in the branch by branch algorithm and the creation */
       ECRIRE ( 'WELCOME TO OUR TP Z OF ' ) ;
       ECRIRE ( 'THE YEAR 2023/2024' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( '  REALIZED BY THE STUDENTS :' ) ;
       ECRIRE ( '     - AIT AHMED TAREK' ) ;
       ECRIRE ( '     - RAYAN DERRADJI' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( '  SUPERVISED BY Pr D.E ZEGOUR' ) ;
       ECRIRE ( '' ) ;
       M := 10 ;
       N := 0 ;
      /* next, we will only print that the traversing is done without printing the nodes*/
       TQ N < M :
           ECRIRE ( '---------------------------------------------------------' ) ;
           ECRIRE ( '---------------------------------------------------------' ) ;
           ECRIRE ( 'THIS IS THE TRAVERSAL OF TREE NUMBER ' ) ;
           ECRIRE ( N + 1 ) ;
           ECRIRE ( '' ) ;
           APPEL Create_tree ( Root1 , Root2 ) ;
           SI Binary_tree ( Root1 )
               ECRIRE ( 'checking if the binary search tree is well constructed : OK' ) ;
           SINON
               ECRIRE ( 'checking if the binary search tree is well constructed : NO' ) ;
           FSI ;
           ECRIRE ( 'the inorder traversal of the generated tree : ' ) ;
           APPEL Inordertraversal ( Root1 ) ;
           APPEL Bb_lr ( Root1 , Head1 ) ;
           APPEL Bb_rl ( Root2 , Head2 ) ;
           APPEL Initialize_visited ( Root1 ) ;
           APPEL Initialize_visited ( Root2 ) ;
           APPEL Ll_lr ( Root1 , Head3 ) ;
           APPEL Ll_rl ( Root2 , Head4 ) ;
           Head7 := NIL ;
           Head8 := NIL ;
           APPEL Verify_bb_lr ( Root1 , Head7 ) ;
           APPEL Verify_bb_rl ( Root2 , Head8 ) ;
           APPEL Verify_ll_lr ( Root1 , Head5 ) ;
           APPEL Verify_ll_rl ( Root2 , Head6 ) ;
           SI ( Compare_list ( Head3 , Head5 ) )
               ;
               ECRIRE ( 'the verification of the traversal leaf by leaf from the left to the right : OK' ) ;
           SINON
               ECRIRE ( 'the verification of the traversal leaf by leaf from the left to the right : NO' ) ;
           FSI ;
           SI ( Compare_list ( Head4 , Head6 ) )
               ;
               ECRIRE ( 'the verification of the traversal leaf by leaf from the right to the left : OK' ) ;
           SINON
               ECRIRE ( 'the verification of the traversal leaf by leaf from the right to the left : NO' ) ;
           FSI ;
           SI ( Compare_list ( Head2 , Head8 ) )
               ;
               ECRIRE ( 'the verification of the traversal branch by branch from the left to the right : OK' ) ;
           SINON
               ECRIRE ( 'the verification of the traversal branch by branch from the left to the right : NO' ) ;
           FSI ;
           SI ( Compare_list ( Head1 , Head7 ) )
               ;
               ECRIRE ( 'the verification of the traversal branch by branch from the right to the left : OK' ) ;
           SINON
               ECRIRE ( 'the verification of the traversal branch by branch from the right to the left : NO' ) ;
           FSI ;
           SI N < 3
               ECRIRE ( 'the traversal of the tree branch by branch from the left to the right : ' ) ;
               ECRIRE ( '' ) ;
               APPEL Print_list ( Head1 ) ;
               ECRIRE ( '' ) ;
               ECRIRE ( 'the traversal of the tree branch by branch from the right to the left : ' ) ;
               ECRIRE ( '' ) ;
               APPEL Print_list ( Head2 ) ;
               ECRIRE ( '' ) ;
               ECRIRE ( 'the traversal of the tree leaf by leaf from the left to the right : ' ) ;
               ECRIRE ( '' ) ;
               APPEL Print_list ( Head3 ) ;
               ECRIRE ( '' ) ;
               ECRIRE ( 'the traversal of the tree leaf by leaf from the right to the left : ' ) ;
               ECRIRE ( '' ) ;
               APPEL Print_list ( Head4 ) ;
               ECRIRE ( '' ) ;
           FSI ;
           N := N + 1 ;
       FTQ ;
   FIN
   ACTION Inordertraversal ( Root )
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       SI ( Root <> NIL )
           APPEL Inordertraversal ( FG ( Root ) ) ;
          /*travers the left sub tree first */
           ECRIRE ( STRUCT ( INFO ( Root ) , 1 ) ) ;
           APPEL Inordertraversal ( FD ( Root ) ) ;
          /*travers the right sub tree */
       FSI
   FIN
   FONCTION Create_node ( Value ) : ARB DE ( ENTIER , BOOLEEN ) ;
   SOIENT
       Value UN ENTIER ;
       Node UN ARB DE ( ENTIER , BOOLEEN ) ;
       S : ( ENTIER , BOOLEEN ) ;
   DEBUT
       AFF_STRUCT ( S , 1 , Value ) ;
       AFF_STRUCT ( S , 2 , FAUX ) ;
       CREERNOEUD ( Node ) ;
       AFF_INFO ( Node , S ) ;
       AFF_FG ( Node , NIL ) ;
       AFF_FD ( Node , NIL ) ;
       Create_node := Node ;
   FIN
  /* create a tree of 100 nodes of random integter values  */
   ACTION Create_tree ( Root1 , Root2 )
   SOIENT
       Root1 UN ARB DE ( ENTIER , BOOLEEN ) ;
       Root2 UN ARB DE ( ENTIER , BOOLEEN ) ;
       S : ( ENTIER , BOOLEEN ) ;
       P1 UN ARB DE ( ENTIER , BOOLEEN ) ;
       P2 UN ARB DE ( ENTIER , BOOLEEN ) ;
       Q1 UN ARB DE ( ENTIER , BOOLEEN ) ;
       Q2 UN ARB DE ( ENTIER , BOOLEEN ) ;
       M , I , Nombre DES ENTIERS ;
   DEBUT
       M := 100 ;
       CREERNOEUD ( P1 ) ;
       CREERNOEUD ( P2 ) ;
      /*we create the node and initialize the root*/
       Root1 := P1 ;
       Root2 := P2 ;
       Nombre := ALEANOMBRE ( 1000 ) + 1 ;
       AFF_STRUCT ( S , 1 , Nombre ) ;
       AFF_STRUCT ( S , 2 , FAUX ) ;
       AFF_INFO ( Root1 , S ) ;
       AFF_INFO ( Root2 , S ) ;
       I := 2 ;
       TQ I < M
           Nombre := ALEANOMBRE ( 1000 ) + 1 ;
           AFF_STRUCT ( S , 1 , Nombre ) ;
           AFF_STRUCT ( S , 2 , FAUX ) ;
           P1 := Root1 ;
           Q1 := Root1 ;
           P2 := Root2 ;
           Q2 := Root2 ;
           TQ ( Nombre <> STRUCT ( INFO ( P1 ) , 1 ) ) ET ( Q1 <> NIL )
               P1 := Q1 ;
               P2 := Q2 ;
               SI Nombre < STRUCT ( INFO ( P1 ) , 1 )
                   Q1 := FG ( P1 ) ;
                   Q2 := FG ( P2 ) ;
               SINON
                   Q1 := FD ( P1 ) ;
                   Q2 := FD ( P2 ) ;
               FSI
           FTQ ;
           SI Nombre <> STRUCT ( INFO ( P1 ) , 1 )
               CREERNOEUD ( Q1 ) ;
               AFF_INFO ( Q1 , S ) ;
               CREERNOEUD ( Q2 ) ;
               AFF_INFO ( Q2 , S ) ;
               SI Nombre < STRUCT ( INFO ( P1 ) , 1 )
                   AFF_FG ( P1 , Q1 ) ;
                   AFF_PERE ( Q1 , P1 ) ;
                   AFF_FG ( P2 , Q2 ) ;
                   AFF_PERE ( Q2 , P2 ) ;
               SINON
                   SI Nombre > STRUCT ( INFO ( P1 ) , 1 )
                       AFF_FD ( P1 , Q1 ) ;
                       AFF_PERE ( Q1 , P1 ) ;
                       AFF_FD ( P2 , Q2 ) ;
                       AFF_PERE ( Q2 , P2 ) ;
                   FSI ;
               FSI ;
               I := I + 1 ;
           FSI
       FTQ ;
   FIN
  /* function to search for a value in the tree the iterative version */
   ACTION Rech_val ( Root , V , P , Q )
   SOIENT
  /* the declaration of variables */
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       P UN ARB DE ( ENTIER , BOOLEEN ) ;
       Q UN ARB DE ( ENTIER , BOOLEEN ) ;
       V UN ENTIER ;
       B UN BOOLEEN ;
   DEBUT
       B := FAUX ;
       P := Root ;
       TQ ( P <> NIL ) ET ( NON B ) :
           SI STRUCT ( INFO ( P ) , 1 ) = V
          /* if the info of the node P is the value we return P  */
               B := VRAI
           SINON
               Q := P ;
               SI STRUCT ( INFO ( P ) , 1 ) < V
              /* if the info of the current node is less we move to the right child */
                   P := FD ( P )
               SINON
              /* else we move to the left child */
                   P := FG ( P )
               FSI
           FSI
       FTQ
   FIN
  /* deleting a node from the binary tree the iterative version using the serch algorithm  */
   ACTION Delete ( Root , Value )
   SOIENT
       Value UN ENTIER ;
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       P UN ARB DE ( ENTIER , BOOLEEN ) ;
       Parentq UN ARB DE ( ENTIER , BOOLEEN ) ;
       Q UN ARB DE ( ENTIER , BOOLEEN ) ;
      /*Q is the parent of the node P*/
   DEBUT
       APPEL Search ( Root , Value , P , Q ) ;
       SI P = NIL
           ECRIRE ( 'error' ) ;
       SINON
           SI FG ( P ) = NIL
               SI FD ( P ) = NIL
                   SI Q <> NIL
                       SI P = FD ( Q )
                           AFF_FD ( Q , NIL ) ;
                       SINON
                           AFF_FG ( Q , NIL ) ;
                       FSI ;
                   SINON
                       Root := NIL ;
                   FSI ;
               SINON
                   SI Q <> NIL
                       SI P = FD ( Q )
                           AFF_FD ( Q , NIL ) ;
                       SINON
                           AFF_FG ( Q , NIL ) ;
                       FSI ;
                   SINON
                       Root := FD ( P ) ;
                   FSI ;
               FSI ;
           SINON
               SI FD ( P ) = NIL
                   SI Q <> NIL
                       SI P = FG ( Q )
                           AFF_FG ( Q , FG ( P ) ) ;
                       SINON
                           AFF_FD ( Q , FG ( P ) ) ;
                       FSI ;
                   SINON
                       Root := FG ( P ) ;
                   FSI ;
               SINON
                   Q := FD ( P ) ;
                   Parentq := P ;
                   TQ FG ( Q ) <> NIL
                       Parentq := Q ;
                       Q := FG ( Q ) ;
                   FTQ ;
                   AFF_INFO ( P , INFO ( Q ) ) ;
                   SI Q = FG ( Parentq )
                       AFF_FG ( Parentq , FD ( Q ) ) ;
                   SINON
                       AFF_FD ( Parentq , FD ( Q ) ) ;
                   FSI ;
               FSI ;
           FSI ;
       FSI ;
   FIN
  /*initilaize the visited field for all the elements of the tree*/
   ACTION Initialize_visited ( Root )
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       S : ( ENTIER , BOOLEEN ) ;
   DEBUT
       SI Root <> NIL
           APPEL Initialize_visited ( FG ( Root ) ) ;
           INIT_STRUCT ( S , [ STRUCT ( INFO ( Root ) , 1 ) , FAUX ] ) ;
           AFF_INFO ( Root , S ) ;
           APPEL Initialize_visited ( FD ( Root ) ) ;
       FSI
   FIN
  /* this function will return true if the node is a leaf*/
   FONCTION Is_leaf ( Root ) : BOOLEEN
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       SI Root = NIL
           Is_leaf := FAUX
       SINON
           SI ( FD ( Root ) = NIL ) ET ( FG ( Root ) = NIL )
               Is_leaf := VRAI
           SINON
               Is_leaf := FAUX
           FSI
       FSI
   FIN
  /* this function will return the value of the field visited of the node */
   FONCTION Is_visited ( Root ) : BOOLEEN
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       SI Root = NIL
           Is_visited := FAUX ;
       SINON
           Is_visited := STRUCT ( INFO ( Root ) , 2 ) ;
       FSI ;
   FIN
  /* assiging a visited value to a node */
   ACTION Aff_visited ( Root , Visited ) ;
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       Visited UN BOOLEEN ;
   DEBUT
       AFF_STRUCT ( INFO ( Root ) , 2 , Visited ) ;
   FIN
  /* the main finction for the leaf by leaf traversing from the left to the right  */
   ACTION Ll_lr ( Root , Head )
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       P UN ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UN ARB DE ( ENTIER , BOOLEEN ) ;
       Stop UN BOOLEEN ;
       Bool1 UN BOOLEEN ;
       Bool2 UN BOOLEEN ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Newcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Lastcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       Head := NIL ;
       CREERPILE ( S ) ;
       EMPILER ( S , Root ) ;
       Stop := FAUX ;
       TQ ( NON Stop ) :
           TQ ( NON PILEVIDE ( S ) ) :
               DEPILER ( S , Temp ) ;
               SI Is_leaf ( Temp ) ET NON Is_visited ( Temp )
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Aff_visited ( Temp , VRAI ) ;
               FSI ;
               SI ( FD ( Temp ) <> NIL ) ET ( NON Is_visited ( FD ( Temp ) ) )
                   EMPILER ( S , FD ( Temp ) ) ;
               FSI ;
               SI ( FG ( Temp ) <> NIL ) ET ( NON Is_visited ( FG ( Temp ) ) )
                   EMPILER ( S , FG ( Temp ) ) ;
               FSI ;
               SI ( FG ( Temp ) <> NIL ) ET Is_visited ( FG ( Temp ) ) ET ( FD ( Temp ) = NIL ) ET ( NON Is_visited (
               Temp ) )
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Aff_visited ( Temp , VRAI ) ;
               FSI ;
               Bool1 := ( FD ( Temp ) <> NIL ) ET Is_visited ( FD ( Temp ) ) ;
               Bool2 := ( FG ( Temp ) = NIL ) ET ( NON Is_visited ( Temp ) ) ;
               SI Bool1 ET Bool2
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Aff_visited ( Temp , VRAI ) ;
               FSI ;
               SI ( FD ( Temp ) <> NIL ) ET ( FG ( Temp ) <> NIL ) ET Is_visited ( FG ( Temp ) ) ET Is_visited ( FD (
               Temp ) )
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Aff_visited ( Temp , VRAI ) ;
               FSI ;
           FTQ ;
           SI ( NON Is_visited ( Root ) )
               EMPILER ( S , Root ) ;
               Stop := FAUX ;
           SINON
               Stop := VRAI ;
           FSI ;
       FTQ ;
       ECRIRE ( 'traversal of the tree leaf by leaf from the left to the right : OK' ) ;
   FIN
  /* the main finction for the leaf by leaf traversing from the right to the left */
   ACTION Ll_rl ( Root , Head )
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       P UN ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UN ARB DE ( ENTIER , BOOLEEN ) ;
       Stop UN BOOLEEN ;
       Bool1 UN BOOLEEN ;
       Bool2 UN BOOLEEN ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Newcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Lastcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       Head := NIL ;
       CREERPILE ( S ) ;
       EMPILER ( S , Root ) ;
       Stop := FAUX ;
       TQ ( NON Stop ) :
           TQ ( NON PILEVIDE ( S ) ) :
               DEPILER ( S , Temp ) ;
               SI Is_leaf ( Temp ) ET NON Is_visited ( Temp )
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Aff_visited ( Temp , VRAI ) ;
               FSI ;
               SI ( FG ( Temp ) <> NIL ) ET ( NON Is_visited ( FG ( Temp ) ) )
                   EMPILER ( S , FG ( Temp ) ) ;
               FSI ;
               SI ( FD ( Temp ) <> NIL ) ET ( NON Is_visited ( FD ( Temp ) ) )
                   EMPILER ( S , FD ( Temp ) ) ;
               FSI ;
               SI ( FG ( Temp ) <> NIL ) ET Is_visited ( FG ( Temp ) ) ET ( FD ( Temp ) = NIL ) ET ( NON Is_visited (
               Temp ) )
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Aff_visited ( Temp , VRAI ) ;
               FSI ;
               Bool1 := ( FD ( Temp ) <> NIL ) ET Is_visited ( FD ( Temp ) ) ;
               Bool2 := ( FG ( Temp ) = NIL ) ET ( NON Is_visited ( Temp ) ) ;
               SI Bool1 ET Bool2
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Aff_visited ( Temp , VRAI ) ;
               FSI ;
               SI ( FD ( Temp ) <> NIL ) ET ( FG ( Temp ) <> NIL ) ET Is_visited ( FG ( Temp ) ) ET Is_visited ( FD (
               Temp ) )
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Aff_visited ( Temp , VRAI ) ;
               FSI ;
           FTQ ;
           SI ( NON Is_visited ( Root ) )
               EMPILER ( S , Root ) ;
               Stop := FAUX ;
           SINON
               Stop := VRAI ;
           FSI ;
       FTQ ;
       ECRIRE ( 'traversal of the tree leaf by leaf from the right to the left : OK' ) ;
   FIN
  /* verifying the leaf by leaf traversing from the left to the right   */
   ACTION Verify_ll_lr ( Root , Head )
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       P UN ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UN ARB DE ( ENTIER , BOOLEEN ) ;
       Stop UN BOOLEEN ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Newcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Lastcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       Head := NIL ;
       CREERPILE ( S ) ;
       EMPILER ( S , Root ) ;
       Stop := FAUX ;
       TQ ( NON Stop ) :
           TQ ( NON PILEVIDE ( S ) ) :
               DEPILER ( S , Temp ) ;
               SI Is_leaf ( Temp )
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Delete ( Root , STRUCT ( INFO ( Temp ) , 1 ) ) ;
               FSI ;
               SI ( FD ( Temp ) <> NIL )
                   EMPILER ( S , FD ( Temp ) ) ;
               FSI ;
               SI ( FG ( Temp ) <> NIL )
                   EMPILER ( S , FG ( Temp ) ) ;
               FSI ;
           FTQ ;
           SI ( Root <> NIL )
               CREERPILE ( S ) ;
               EMPILER ( S , Root ) ;
               Stop := FAUX ;
           SINON
               Stop := VRAI ;
           FSI ;
       FTQ ;
   FIN
  /* verifying the leaf by leaf traversing from the right to the left */
   ACTION Verify_ll_rl ( Root , Head )
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       P UN ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UN ARB DE ( ENTIER , BOOLEEN ) ;
       Stop UN BOOLEEN ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Newcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Lastcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       Head := NIL ;
       CREERPILE ( S ) ;
       EMPILER ( S , Root ) ;
       Stop := FAUX ;
       TQ ( NON Stop ) :
           TQ ( NON PILEVIDE ( S ) ) :
               DEPILER ( S , Temp ) ;
               SI Is_leaf ( Temp )
                   ALLOUER ( Newcell ) ;
                   AFF_ADR ( Newcell , NIL ) ;
                   AFF_VAL ( Newcell , Temp ) ;
                   SI Head = NIL
                       Head := Newcell ;
                   SINON
                       AFF_ADR ( Lastcell , Newcell ) ;
                   FSI ;
                   Lastcell := Newcell ;
                   APPEL Delete ( Root , STRUCT ( INFO ( Temp ) , 1 ) ) ;
               FSI ;
               SI FG ( Temp ) <> NIL
                   EMPILER ( S , FG ( Temp ) ) ;
               FSI ;
               SI ( FD ( Temp ) <> NIL )
                   EMPILER ( S , FD ( Temp ) ) ;
               FSI ;
           FTQ ;
           SI ( Root <> NIL )
               CREERPILE ( S ) ;
               EMPILER ( S , Root ) ;
               Stop := FAUX ;
           SINON
               Stop := VRAI ;
           FSI ;
       FTQ ;
   FIN
  /* function for searching for a value in the tree, it will return the node and its parent */
   ACTION Search ( Root , Value , P , Q )
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       P UN ARB DE ( ENTIER , BOOLEEN ) ;
       Q UN ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UN ARB DE ( ENTIER , BOOLEEN ) ;
       Value UN ENTIER ;
       Found UN BOOLEEN ;
   DEBUT
       Found := FAUX ;
       Q := NIL ;
       P := Root ;
       TQ ( NON Found ) ET ( P <> NIL )
           SI STRUCT ( INFO ( P ) , 1 ) = Value
               Found := VRAI ;
           SINON
               Q := P ;
               SI ( STRUCT ( INFO ( P ) , 1 ) > Value )
                   P := FG ( P ) ;
               SINON
                   P := FD ( P ) ;
               FSI ;
           FSI ;
       FTQ ;
   FIN
  /* we store the values of the nodes in a linked lists in a progressive manner and we save it with the head */
   ACTION Inorder_iterative ( Root , Head )
   SOIENT
       P UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head UNE LISTE ;
       Q UNE LISTE ;
       Tempq UNE LISTE ;
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UN ARB DE ( ENTIER , BOOLEEN ) ;
       Stop UN BOOLEEN ;
   DEBUT
       Head := NIL ;
       CREERPILE ( P ) ;
       Temp := Root ;
       Stop := FAUX ;
       TQ ( NON Stop )
           TQ Temp <> NIL
               EMPILER ( P , Temp ) ;
               Temp := FG ( Temp ) ;
           FTQ ;
           SI ( NON PILEVIDE ( P ) )
               DEPILER ( P , Temp ) ;
               ALLOUER ( Q ) ;
               AFF_VAL ( Q , STRUCT ( INFO ( Temp ) , 1 ) ) ;
               SI Head = NIL
                   Head := Q
               SINON
                   Tempq := Head ;
                   TQ SUIVANT ( Tempq ) <> NIL
                       Tempq := SUIVANT ( Tempq ) ;
                   FTQ ;
                   AFF_ADR ( Tempq , Q ) ;
               FSI ;
               Temp := FD ( Temp ) ;
           SINON
               Stop := VRAI ;
           FSI ;
       FTQ ;
   FIN
  /* return false if the list is not ordered , traversing the list */
  /* this function uses the function inorder iterative and check the list*/
  /* if we find a element greater than its next then it isnot a binary search tree */
  /* actually we need to do two loops for each cell we go through the list to 
   verify starting right after it's next , to be fixed later */
   FONCTION Binary_tree ( Root ) : BOOLEEN ;
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       Head UNE LISTE ;
       Temp UNE LISTE ;
       Temp1 UNE LISTE ;
       Bool UN BOOLEEN ;
   DEBUT
       APPEL Inorder_iterative ( Root , Head ) ;
       Bool := VRAI ;
       SI Root = NIL
           Bool := FAUX ;
       SINON
           SI SUIVANT ( Head ) = NIL
               Bool := VRAI ;
           SINON
               Temp := Head ;
               Temp1 := SUIVANT ( Head ) ;
               TQ ( Temp1 <> NIL ) ET Bool
                   SI VALEUR ( Temp ) >= VALEUR ( Temp1 )
                       Bool := FAUX ;
                   FSI ;
                   Temp := SUIVANT ( Temp ) ;
                   Temp1 := SUIVANT ( Temp1 ) ;
               FTQ ;
           FSI ;
       FSI ;
       Binary_tree := Bool ;
   FIN
  /* removing duplicates from the linked list */
  /* the remove duplicates is useless in this case because each time we will empty the stack*/
   ACTION Delete_duplicates ( Head )
   SOIENT
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Current UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Index UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Value1 , Value2 : ENTIER ;
   DEBUT
       Current := Head ;
       Index := NIL ;
       SI Head = NIL
           ECRIRE ( 'the list is empty' ) ;
       SINON
           TQ Current <> NIL
               Temp := Current ;
               Index := SUIVANT ( Current ) ;
               TQ Index <> NIL
                   Value1 := STRUCT ( INFO ( VALEUR ( Current ) ) , 1 ) ;
                   Value2 := STRUCT ( INFO ( VALEUR ( Index ) ) , 1 ) ;
                   SI Value1 = Value2
                       AFF_ADR ( Temp , SUIVANT ( Index ) ) ;
                       LIBERER ( Index ) ;
                       Index := SUIVANT ( Temp ) ;
                   SINON
                       Temp := Index ;
                       Index := SUIVANT ( Index ) ;
                   FSI ;
               FTQ ;
               Current := SUIVANT ( Current ) ;
           FTQ ;
       FSI ;
   FIN
  /* the construction  of the linked list that holds all the branches of the tree from the left to the right */
  /* cinstruct the list of all the paths from the leaf to the root */
   ACTION Path_list_lr ( Root , S , Head )
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UN ARB DE ( ENTIER , BOOLEEN ) ;
       Newcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Lastcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       SI Root <> NIL
           SI PILEVIDE ( S )
               CREERPILE ( S ) ;
           FSI ;
           EMPILER ( S , Root ) ;
           SI ( FG ( Root ) = NIL ) ET ( FD ( Root ) = NIL )
               APPEL Stack_list ( S , Head ) ;
           SINON
               APPEL Path_list_lr ( FG ( Root ) , S , Head ) ;
               APPEL Path_list_lr ( FD ( Root ) , S , Head ) ;
           FSI ;
       FSI
   FIN
  /* construct the list of all the paths from the leaf to the root */
   ACTION Path_list_rl ( Root , S , Head )
   SOIENT
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UN ARB DE ( ENTIER , BOOLEEN ) ;
       Newcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Lastcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       SI Root <> NIL
           SI PILEVIDE ( S )
               CREERPILE ( S ) ;
           FSI ;
           EMPILER ( S , Root ) ;
           SI ( FG ( Root ) = NIL ) ET ( FD ( Root ) = NIL )
               APPEL Stack_list ( S , Head ) ;
           SINON
               APPEL Path_list_rl ( FD ( Root ) , S , Head ) ;
               APPEL Path_list_rl ( FG ( Root ) , S , Head ) ;
           FSI ;
       FSI
   FIN
  /* put the values of the stack in a linked list and save the stack*/
   ACTION Stack_list ( S , Head )
   SOIENT
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UN ARB DE ( ENTIER , BOOLEEN ) ;
       Current UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Newcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Lastcell UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       TQ NON PILEVIDE ( S )
           DEPILER ( S , Temp ) ;
           ALLOUER ( Newcell ) ;
           AFF_ADR ( Newcell , NIL ) ;
           AFF_VAL ( Newcell , Temp ) ;
           SI Head = NIL
               Head := Newcell ;
           SINON
               Current := Head ;
               TQ SUIVANT ( Current ) <> NIL
                   Current := SUIVANT ( Current ) ;
               FTQ ;
               AFF_ADR ( Current , Newcell ) ;
           FSI
       FTQ ;
   FIN
  /* we construct the list of all the paths of the leaves and then we remove the duplicates */
   ACTION Verify_bb_rl ( Root , Head ) ;
   SOIENT
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       APPEL Path_list_rl ( Root , S , Head ) ;
       APPEL Delete_duplicates ( Head ) ;
   FIN
  /* we construct the list of all the paths of the leaves and then we remove the duplicates */
   ACTION Verify_bb_lr ( Root , Head ) ;
   SOIENT
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       APPEL Path_list_lr ( Root , S , Head ) ;
       APPEL Delete_duplicates ( Head ) ;
   FIN
  /* print a list */
   ACTION Print_list ( Head )
   SOIENT
       Head UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Current UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
   DEBUT
       SI Head = NIL
           ECRIRE ( 'la liste est vide ' ) ;
       SINON
           Current := Head ;
           TQ Current <> NIL
               ECRIRE ( INFO ( VALEUR ( Current ) ) ) ;
               Current := SUIVANT ( Current ) ;
           FTQ ;
       FSI ;
   FIN
  /* this function verifies if the two lists are identical */
   FONCTION Compare_list ( Head1 , Head2 ) : BOOLEEN ;
   SOIENT
       Head1 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Head2 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Current1 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Current2 UNE LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Identical UN BOOLEEN ;
   DEBUT
       Identical := VRAI ;
       Current1 := Head1 ;
       Current2 := Head2 ;
       TQ ( Current1 <> NIL ) ET ( Current2 <> NIL )
           SI STRUCT ( INFO ( VALEUR ( Current1 ) ) , 1 ) <> STRUCT ( INFO ( VALEUR ( Current2 ) ) , 1 )
               Identical := FAUX ;
           FSI ;
           Current1 := SUIVANT ( Current1 ) ;
           Current2 := SUIVANT ( Current2 ) ;
       FTQ ;
       SI ( Current1 = NIL ) ET ( Current2 <> NIL )
           Identical := FAUX ;
       FSI ;
       SI ( Current2 = NIL ) ET ( Current1 <> NIL )
           Identical := FAUX ;
       FSI ;
       Compare_list := Identical ;
   FIN
   ACTION Bb_lr ( Root , Head )
   SOIENT
       Head , Newcell , Lastcell : LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       S1 UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UNE ARB DE ( ENTIER , BOOLEEN ) ;
       Temp1 UNE ARB DE ( ENTIER , BOOLEEN ) ;
       Stop UN BOOLEEN ;
   DEBUT
       Head := NIL ;
       Stop := FAUX ;
       CREERPILE ( S ) ;
       CREERPILE ( S1 ) ;
       EMPILER ( S , Root ) ;
       Temp := Root ;
       TQ ( NON Stop )
           DEPILER ( S , Temp ) ;
           TQ ( Temp <> NIL )
               EMPILER ( S , Temp ) ;
               Temp1 := Temp ;
               SI ( FD ( Temp ) <> NIL )
                   EMPILER ( S1 , FD ( Temp ) ) ;
               FSI ;
               Temp := FG ( Temp ) ;
           FTQ ;
           SI FD ( Temp1 ) <> NIL
               EMPILER ( S , FD ( Temp1 ) ) ;
           SINON
               TQ ( NON PILEVIDE ( S ) )
                   ;
                   DEPILER ( S , Temp ) ;
                   SI ( NON STRUCT ( INFO ( Temp ) , 2 ) )
                       ALLOUER ( Newcell ) ;
                       AFF_ADR ( Newcell , NIL ) ;
                       AFF_VAL ( Newcell , Temp ) ;
                       SI Head = NIL
                           Head := Newcell ;
                       SINON
                           AFF_ADR ( Lastcell , Newcell ) ;
                       FSI ;
                       Lastcell := Newcell ;
                       APPEL Aff_visited ( Temp , VRAI ) ;
                   FSI ;
               FTQ ;
               SI NON PILEVIDE ( S1 )
                   DEPILER ( S1 , Temp ) ;
                   EMPILER ( S , Temp ) ;
                   Stop := FAUX ;
               SINON
                   Stop := VRAI ;
               FSI ;
           FSI ;
       FTQ ;
       ECRIRE ( 'traversal of the tree branch by branch from the left to the right : OK' ) ;
   FIN
   ACTION Bb_rl ( Root , Head )
   SOIENT
       Head , Newcell , Lastcell : LISTE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Root UN ARB DE ( ENTIER , BOOLEEN ) ;
       S UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       S1 UNE PILE DE ARB DE ( ENTIER , BOOLEEN ) ;
       Temp UNE ARB DE ( ENTIER , BOOLEEN ) ;
       Temp1 UNE ARB DE ( ENTIER , BOOLEEN ) ;
       Stop UN BOOLEEN ;
   DEBUT
       Head := NIL ;
       Stop := FAUX ;
       CREERPILE ( S ) ;
       CREERPILE ( S1 ) ;
       EMPILER ( S , Root ) ;
       Temp := Root ;
       TQ ( NON Stop )
           DEPILER ( S , Temp ) ;
           TQ ( Temp <> NIL )
               EMPILER ( S , Temp ) ;
               Temp1 := Temp ;
               SI ( FG ( Temp ) <> NIL )
                   EMPILER ( S1 , FG ( Temp ) ) ;
               FSI ;
               Temp := FD ( Temp ) ;
           FTQ ;
           SI FG ( Temp1 ) <> NIL
               EMPILER ( S , FG ( Temp1 ) ) ;
           SINON
               TQ ( NON PILEVIDE ( S ) )
                   ;
                   DEPILER ( S , Temp ) ;
                   SI ( NON STRUCT ( INFO ( Temp ) , 2 ) )
                       ALLOUER ( Newcell ) ;
                       AFF_ADR ( Newcell , NIL ) ;
                       AFF_VAL ( Newcell , Temp ) ;
                       SI Head = NIL
                           Head := Newcell ;
                       SINON
                           AFF_ADR ( Lastcell , Newcell ) ;
                       FSI ;
                       Lastcell := Newcell ;
                       APPEL Aff_visited ( Temp , VRAI ) ;
                   FSI ;
               FTQ ;
               SI NON PILEVIDE ( S1 )
                   DEPILER ( S1 , Temp ) ;
                   EMPILER ( S , Temp ) ;
                   Stop := FAUX ;
               SINON
                   Stop := VRAI ;
               FSI ;
           FSI ;
       FTQ ;
       ECRIRE ( 'traversal of the tree branch by branch from the right to the left : OK' ) ;
   FIN
