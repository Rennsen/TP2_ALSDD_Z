  /**--------------------------------------------------------**/
  /**       C o n v e r s i o n   Z vers C (Standard)        **/
  /**             Realisee par Pr D.E ZEGOUR                 **/
  /**             E S I - Alger                              **/
  /**             Copywrite 2014                             **/
  /**--------------------------------------------------------**/

  /* we only need to do the verification and the deletion */


  /* variables */

  #include <stdio.h>
  #include <stdlib.h>
  #include <Time.h>
  #include <stdbool.h>
  #include <windows.h>
  #include <math.h>
  #include <conio.h>

  typedef int bool1 ;

  #define True 1
  #define False 0

  /** Implementation **\: ARBRE BINAIRE DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tib Type_Tib  ;
  typedef Type_Tib * Typestr_Tib ;
  typedef int Type1_Tib  ;
  typedef bool1 Type2_Tib  ;
  struct Tib
    {
      Type1_Tib Champ1 ;
      Type2_Tib Champ2 ;
    };

  Type1_Tib Struct1_Tib ( Typestr_Tib S)
    {
      return  S->Champ1 ;
    }

  Type2_Tib Struct2_Tib ( Typestr_Tib S)
    {
      return  S->Champ2 ;
    }

  void Aff_struct1_Tib ( Typestr_Tib S, Type1_Tib Val )
    {
       S->Champ1 = Val ;
    }

  void Aff_struct2_Tib ( Typestr_Tib S, Type2_Tib Val )
    {
       S->Champ2 = Val ;
    }

  /** Arbres de recherche binaire **/

  typedef Typestr_Tib Typeelem_ATib   ;
  typedef struct Noeud_ATib * Pointeur_ATib ;

  struct Noeud_ATib
    {
      Typeelem_ATib  Val ;
      Pointeur_ATib Fg ;
      Pointeur_ATib Fd ;
      Pointeur_ATib Pere ;
      int x, y ; // additional field for coordinates
     } ;

  Typeelem_ATib Info_ATib( Pointeur_ATib P )
    { return P->Val;   }

  Pointeur_ATib Fg_ATib( Pointeur_ATib P)
    { return P->Fg ; }

  Pointeur_ATib Fd_ATib( Pointeur_ATib P)
    { return P->Fd ; }

  Pointeur_ATib Pere_ATib( Pointeur_ATib P)
    { return P->Pere ; }

  void Aff_info_ATib ( Pointeur_ATib P, Typeelem_ATib Val)
    {
      Typeelem_ATib _Temp ;
      _Temp = malloc(sizeof(Type_Tib));
      /* Affectation globale de structure */
      _Temp->Champ1 = Val->Champ1;
      _Temp->Champ2 = Val->Champ2;
      Val = _Temp ;
       P->Val = Val ;
    }

  void Aff_fg_ATib( Pointeur_ATib P, Pointeur_ATib Q)
    { P->Fg =  Q;  }

  void Aff_fd_ATib( Pointeur_ATib P, Pointeur_ATib Q)
    { P->Fd =  Q ; }

  void Aff_pere_ATib( Pointeur_ATib P, Pointeur_ATib Q)
    { P->Pere =  Q ; }

  void Creernoeud_ATib( Pointeur_ATib *P)
    {
      *P = (struct Noeud_ATib *) malloc( sizeof( struct Noeud_ATib))   ;
      (*P)->Val = malloc(sizeof(Type_Tib));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_ATib( Pointeur_ATib P)
    { free( P ) ; }


  /** Implementation **\: LISTE DE ENTIERS**/

  /** Listes lineaires chainees **/

  typedef int Typeelem_Li   ;
  typedef struct Maillon_Li * Pointeur_Li ;

  struct Maillon_Li
    {
      Typeelem_Li  Val ;
      Pointeur_Li Suiv ;
    } ;

  Pointeur_Li Allouer_Li (Pointeur_Li *P)
    {
      *P = (struct Maillon_Li *) malloc( sizeof( struct Maillon_Li)) ;
      (*P)->Suiv = NULL;
    }

  void Aff_val_Li(Pointeur_Li P, Typeelem_Li Val)
    {
      P->Val = Val ;
    }

  void Aff_adr_Li( Pointeur_Li P,  Pointeur_Li Q)
    {
      P->Suiv = Q ;
    }

  Pointeur_Li Suivant_Li(  Pointeur_Li P)
    { return( P->Suiv ) ;  }

  Typeelem_Li Valeur_Li( Pointeur_Li P)
    { return( P->Val) ; }

  void Liberer_Li ( Pointeur_Li P)
    { free (P);}


  /** Implementation **\: LISTE DE ARBRES BINAIRES DE STRUCTURES**/

  /** Listes lineaires chainees **/

  typedef Pointeur_ATib Typeelem_LATib   ;
  typedef struct Maillon_LATib * Pointeur_LATib ;

  struct Maillon_LATib
    {
      Typeelem_LATib  Val ;
      Pointeur_LATib Suiv ;
    } ;

  Pointeur_LATib Allouer_LATib (Pointeur_LATib *P)
    {
      *P = (struct Maillon_LATib *) malloc( sizeof( struct Maillon_LATib)) ;
      (*P)->Suiv = NULL;
    }

  void Aff_val_LATib(Pointeur_LATib P, Typeelem_LATib Val)
    {
      P->Val = Val ;
    }

  void Aff_adr_LATib( Pointeur_LATib P,  Pointeur_LATib Q)
    {
      P->Suiv = Q ;
    }

  Pointeur_LATib Suivant_LATib(  Pointeur_LATib P)
    { return( P->Suiv ) ;  }

  Typeelem_LATib Valeur_LATib( Pointeur_LATib P)
    { return( P->Val) ; }

  void Liberer_LATib ( Pointeur_LATib P)
    { free (P);}


  /** Implementation **\: PILE DE ARBRES BINAIRES DE STRUCTURES**/
  /** Piles **/

  typedef Pointeur_ATib Typeelem_PATib ;
  typedef struct Maillon_PATib * Pointeur_PATib ;
  typedef   Pointeur_PATib  Typepile_PATib  ;

  struct Maillon_PATib
    {
      Typeelem_PATib  Val ;
      Pointeur_PATib Suiv ;
    } ;

  void Creerpile_PATib( Pointeur_PATib *P )
    { *P = NULL ; }

  bool1 Pilevide_PATib ( Pointeur_PATib P )
    { return  (P == NULL ); }

  void Empiler_PATib ( Pointeur_PATib *P,  Typeelem_PATib Val )
    {
      Pointeur_PATib Q;

      Q = (struct Maillon_PATib *) malloc( sizeof( struct Maillon_PATib))   ;
      Q->Val = Val ;
      Q->Suiv = *P;
      *P = Q;
    }

  void Depiler_PATib ( Pointeur_PATib *P,  Typeelem_PATib *Val )
    {
      Pointeur_PATib Sauv;

      if (! Pilevide_PATib (*P) )
        {
          *Val = (*P)->Val ;
          Sauv = *P;
          *P = (*P)->Suiv;
          free(Sauv);
        }
      else printf ("%s \n", "The stack is empty");
    }

  /** Variables du programme principal **/
  Pointeur_ATib Root1=NULL;
  Pointeur_ATib Root2=NULL;
  Pointeur_ATib P=NULL;
  Pointeur_ATib Q=NULL;
  int N;
  Pointeur_Li Temp=NULL;
  Pointeur_LATib Head=NULL;
  Pointeur_LATib Head1=NULL;
  Pointeur_LATib Head2=NULL;
  Pointeur_LATib Head3=NULL;
  Pointeur_LATib Head4=NULL;
  Pointeur_LATib Head5=NULL;
  Pointeur_LATib Head6=NULL;
  Pointeur_LATib Head7=NULL;
  Pointeur_LATib Head8=NULL;
  Pointeur_ATib Root3=NULL;
  Pointeur_ATib Root4=NULL;
  int M;

  /** Fonctions standards **/

  int Aleanombre( int N )
    { return ( rand() % N ); }


  /** Initialisation d'une structure **/
  void Init_struct_Tib ( Typestr_Tib S, Type_Tib S_ )
    {
      S->Champ1 = S_.Champ1 ;
      S->Champ2 = S_.Champ2 ;
    }


  /** Prototypes des fonctions **/

  void Create_tree (Pointeur_ATib *Root1 , Pointeur_ATib *Root2);
  void Delete (Pointeur_ATib *Root , int *Value);
  void Initialize_visited (Pointeur_ATib *Root);
  bool1  Is_leaf (Pointeur_ATib *Root) ;
  bool1  Is_visited (Pointeur_ATib *Root) ;
  void Aff_visited (Pointeur_ATib *Root , bool1 *Visited);
  void Ll_lr (Pointeur_ATib *Root , Pointeur_LATib *Head);
  void Ll_rl (Pointeur_ATib *Root , Pointeur_LATib *Head);
  void Verify_ll_lr (Pointeur_ATib *Root , Pointeur_LATib *Head);
  void Verify_ll_rl (Pointeur_ATib *Root , Pointeur_LATib *Head);
  void Search (Pointeur_ATib *Root , int *Value , Pointeur_ATib *P , Pointeur_ATib *Q);
  void Inorder_iterative (Pointeur_ATib *Root , Pointeur_Li *Head);
  bool1  Binary_tree (Pointeur_ATib *Root) ;
  void Delete_duplicates (Pointeur_LATib *Head);
  void Path_list_lr (Pointeur_ATib *Root , Pointeur_PATib *S , Pointeur_LATib *Head);
  void Path_list_rl (Pointeur_ATib *Root , Pointeur_PATib *S , Pointeur_LATib *Head);
  void Stack_list (Pointeur_PATib *S , Pointeur_LATib *Head);
  void Verify_bb_rl (Pointeur_ATib *Root , Pointeur_LATib *Head);
  void Verify_bb_lr (Pointeur_ATib *Root , Pointeur_LATib *Head);
  void Print_list (Pointeur_LATib *Head);
  bool1  Compare_list (Pointeur_LATib *Head1 , Pointeur_LATib *Head2) ;
  void Bb_lr (Pointeur_ATib *Root , Pointeur_LATib *Head);
  void Bb_rl (Pointeur_ATib *Root , Pointeur_LATib *Head);

  /* create a tree of 100 nodes of random integter values  */
  void Create_tree (Pointeur_ATib *Root1 , Pointeur_ATib *Root2)
    {
      /** Variables locales **/
      Typestr_Tib S;
      Pointeur_ATib P1=NULL;
      Pointeur_ATib P2=NULL;
      Pointeur_ATib Q1=NULL;
      Pointeur_ATib Q2=NULL;
      int M;
      int I;
      int Nombre;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tib));
     M  =  100 ;
     Creernoeud_ATib (& P1 ) ;
     Creernoeud_ATib (& P2 ) ;
    /*we create the node and initialize the root*/
     *Root1  =  P1 ;
     *Root2  =  P2 ;
     Nombre  =  Aleanombre(1000 ) + 1 ;
     Aff_struct1_Tib ( S  , Nombre ) ;
     Aff_struct2_Tib ( S  , False ) ;
     Aff_info_ATib ( *Root1 , S ) ;
     Aff_info_ATib ( *Root2 , S ) ;
     I  =  2 ;
     while( I < M) {
       Nombre  =  Aleanombre(1000 ) + 1 ;
       Aff_struct1_Tib ( S  , Nombre ) ;
       Aff_struct2_Tib ( S  , False ) ;
       P1  =  *Root1 ;
       Q1  =  *Root1 ;
       P2  =  *Root2 ;
       Q2  =  *Root2 ;
       while( ( Nombre != Struct1_Tib ( Info_ATib ( P1 )  ) ) && ( Q1 != NULL )) {
         P1  =  Q1 ;
         P2  =  Q2 ;
         if( Nombre < Struct1_Tib ( Info_ATib ( P1 )  )) {
           Q1  =  Fg_ATib ( P1 ) ;
           Q2  =  Fg_ATib ( P2 ) ;
           }
         else
           {
           Q1  =  Fd_ATib ( P1 ) ;
           Q2  =  Fd_ATib ( P2 ) ;

         }
       } ;
       if( Nombre != Struct1_Tib ( Info_ATib ( P1 )  )) {
         Creernoeud_ATib (& Q1 ) ;
         Aff_info_ATib ( Q1 , S ) ;
         Creernoeud_ATib (& Q2 ) ;
         Aff_info_ATib ( Q2 , S ) ;
         if( Nombre < Struct1_Tib ( Info_ATib ( P1 )  )) {
           Aff_fg_ATib ( P1 , Q1 ) ;
           Aff_pere_ATib ( Q1 , P1 ) ;
           Aff_fg_ATib ( P2 , Q2 ) ;
           Aff_pere_ATib ( Q2 , P2 ) ;
           }
         else
           {
           Aff_fd_ATib ( P1 , Q1 ) ;
           Aff_pere_ATib ( Q1 , P1 ) ;
           Aff_fd_ATib ( P2 , Q2 ) ;
           Aff_pere_ATib ( Q2 , P2 ) ;

         } ;
         I  =  I + 1 ;

       }
     } ;

    }
  /* deleting a node from the binary tree the iterative version using the serch algorithm  */
  void Delete (Pointeur_ATib *Root , int *Value)
    {
      /** Variables locales **/
      Pointeur_ATib P=NULL;
      Pointeur_ATib Parentq=NULL;
      Pointeur_ATib Q=NULL;

      /** Corps du module **/
     Search ( & *Root , & *Value , & P , & Q ) ;
     if( P == NULL) {
       printf ( " %s", "Error" ) ;
       }
     else
       {
       if( Fg_ATib ( P ) == NULL) {
         if( Fd_ATib ( P ) == NULL) {
           if( Q != NULL) {
             if( P == Fd_ATib ( Q )) {
               Aff_fd_ATib ( Q , NULL ) ;
               }
             else
               {
               Aff_fg_ATib ( Q , NULL ) ;

             } ;
             }
           else
             {
             *Root  =  NULL ;

           } ;
           }
         else
           {
           if( Q != NULL) {
             if( P == Fd_ATib ( Q )) {
               Aff_fd_ATib ( Q , NULL ) ;
               }
             else
               {
               Aff_fg_ATib ( Q , NULL ) ;

             } ;
             }
           else
             {
             *Root  =  Fd_ATib ( P ) ;

           } ;

         } ;
         }
       else
         {
         if( Fd_ATib ( P ) == NULL) {
           if( Q != NULL) {
             if( P == Fg_ATib ( Q )) {
               Aff_fg_ATib ( Q , Fg_ATib ( P ) ) ;
               }
             else
               {
               Aff_fd_ATib ( Q , Fg_ATib ( P ) ) ;

             } ;
             }
           else
             {
             *Root  =  Fg_ATib ( P ) ;

           } ;
           }
         else
           {
           Q  =  Fd_ATib ( P ) ;
           Parentq  =  P ;
           while( Fg_ATib ( Q ) != NULL) {
             Parentq  =  Q ;
             Q  =  Fg_ATib ( Q ) ;

           } ;
           Aff_info_ATib ( P , Info_ATib ( Q ) ) ;
           if( Q == Fg_ATib ( Parentq )) {
             Aff_fg_ATib ( Parentq , Fd_ATib ( Q ) ) ;
             }
           else
             {
             Aff_fd_ATib ( Parentq , Fd_ATib ( Q ) ) ;

           } ;

         } ;

       } ;

     } ;

    }
  /*initilaize the visited field for all the elements of the tree*/
  void Initialize_visited (Pointeur_ATib *Root)
    {
      /** Variables locales **/
      Typestr_Tib S;
      Pointeur_ATib _Px1=NULL;
      Type_Tib S_S;
      Pointeur_ATib _Px2=NULL;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tib));
     if( *Root != NULL) {
       _Px1 =  Fg_ATib ( *Root ) ;
       Initialize_visited ( &_Px1) ;
       S_S.Champ1 = Struct1_Tib(Info_ATib(*Root)) ;
       S_S.Champ2 = False ;
       Init_struct_Tib ( S , S_S )  ;
       Aff_info_ATib ( *Root , S ) ;
       _Px2 =  Fd_ATib ( *Root ) ;
       Initialize_visited ( &_Px2) ;

     }
    }
  /* this function will return true if the node is a leaf*/
  bool1  Is_leaf (Pointeur_ATib *Root)
    {
      /** Variables locales **/
      bool1  Is_leaf2 ;

      /** Corps du module **/
     if( *Root == NULL) {
       Is_leaf2  =  False; }
     else
       {
       if( ( Fd_ATib ( *Root ) == NULL ) && ( Fg_ATib ( *Root ) == NULL )) {
         Is_leaf2  =  True; }
       else
         {
         Is_leaf2  =  False;
       }
     }
     return Is_leaf2 ;
    }
  /* this function will return the value of the field visited of the node */
  bool1  Is_visited (Pointeur_ATib *Root)
    {
      /** Variables locales **/
      bool1  Is_visited2 ;

      /** Corps du module **/
     if( *Root == NULL) {
       Is_visited2  =  False ;
       }
     else
       {
       Is_visited2  =  Struct2_Tib ( Info_ATib ( *Root )  ) ;

     } ;

     return Is_visited2 ;
    }
  /* assiging a visited value to a node */
  void Aff_visited (Pointeur_ATib *Root , bool1 *Visited)
    {

      /** Corps du module **/
     Aff_struct2_Tib ( Info_ATib ( *Root )  , *Visited ) ;

    }
  /* the main finction for the leaf by leaf traversing from the left to the right  */
  void Ll_lr (Pointeur_ATib *Root , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_PATib S=NULL;
      Pointeur_ATib P=NULL;
      Pointeur_ATib Temp=NULL;
      bool1 Stop;
      bool1 Bool11;
      bool1 Bool12;
      Pointeur_LATib Newcell=NULL;
      Pointeur_LATib Lastcell=NULL;
      bool1 _Px1;
      Pointeur_ATib _Px2=NULL;
      Pointeur_ATib _Px3=NULL;
      Pointeur_ATib _Px4=NULL;
      bool1 _Px5;
      Pointeur_ATib _Px6=NULL;
      bool1 _Px7;
      Pointeur_ATib _Px8=NULL;
      Pointeur_ATib _Px9=NULL;
      bool1 _Px10;

      /** Corps du module **/
     *Head  =  NULL ;
     Creerpile_PATib (& S ) ;
     Empiler_PATib (& S , *Root ) ;
     Stop  =  False ;
     while( ( ! Stop ))  {
       while( ( ! Pilevide_PATib ( S ) ))  {
         Depiler_PATib (& S , &Temp ) ;
         if( Is_leaf ( & Temp ) && ! Is_visited ( & Temp )) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px1 =  True ;
           Aff_visited ( & Temp , &_Px1) ;

         } ;
         _Px2 =  Fd_ATib ( Temp ) ;
         if( ( Fd_ATib ( Temp ) != NULL ) && ( ! Is_visited ( &_Px2) )) {
           Empiler_PATib (& S , Fd_ATib ( Temp ) ) ;

         } ;
         _Px3 =  Fg_ATib ( Temp ) ;
         if( ( Fg_ATib ( Temp ) != NULL ) && ( ! Is_visited ( &_Px3) )) {
           Empiler_PATib (& S , Fg_ATib ( Temp ) ) ;

         } ;
         _Px4 =  Fg_ATib ( Temp ) ;
         if( ( Fg_ATib ( Temp ) != NULL ) && Is_visited ( &_Px4) && ( Fd_ATib ( Temp ) == NULL ) && ( ! Is_visited ( & Temp ) )) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px5 =  True ;
           Aff_visited ( & Temp , &_Px5) ;

         } ;
         _Px6 =  Fd_ATib ( Temp ) ;
         Bool11  =  ( Fd_ATib ( Temp ) != NULL ) && Is_visited ( &_Px6) ;
         Bool12  =  ( Fg_ATib ( Temp ) == NULL ) && ( ! Is_visited ( & Temp ) ) ;
         if( Bool11 && Bool12) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px7 =  True ;
           Aff_visited ( & Temp , &_Px7) ;

         } ;
         _Px8 =  Fg_ATib ( Temp ) ;
         _Px9 =  Fd_ATib ( Temp ) ;
         if( ( Fd_ATib ( Temp ) != NULL ) && ( Fg_ATib ( Temp ) != NULL ) && Is_visited ( &_Px8) && Is_visited ( &_Px9)) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px10 =  True ;
           Aff_visited ( & Temp , &_Px10) ;

         } ;

       } ;
       if( ( ! Is_visited ( & *Root ) )) {
         Empiler_PATib (& S , *Root ) ;
         Stop  =  False ;
         }
       else
         {
         Stop  =  True ;

       } ;

     } ;
     printf ( " %s", "Traversal of the tree leaf by leaf from the left to the right : OK\n" ) ;

    }
  /* the main finction for the leaf by leaf traversing from the right to the left */
  void Ll_rl (Pointeur_ATib *Root , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_PATib S=NULL;
      Pointeur_ATib P=NULL;
      Pointeur_ATib Temp=NULL;
      bool1 Stop;
      bool1 Bool11;
      bool1 Bool12;
      Pointeur_LATib Newcell=NULL;
      Pointeur_LATib Lastcell=NULL;
      bool1 _Px1;
      Pointeur_ATib _Px2=NULL;
      Pointeur_ATib _Px3=NULL;
      Pointeur_ATib _Px4=NULL;
      bool1 _Px5;
      Pointeur_ATib _Px6=NULL;
      bool1 _Px7;
      Pointeur_ATib _Px8=NULL;
      Pointeur_ATib _Px9=NULL;
      bool1 _Px10;

      /** Corps du module **/
     *Head  =  NULL ;
     Creerpile_PATib (& S ) ;
     Empiler_PATib (& S , *Root ) ;
     Stop  =  False ;
     while( ( ! Stop ))  {
       while( ( ! Pilevide_PATib ( S ) ))  {
         Depiler_PATib (& S , &Temp ) ;
         if( Is_leaf ( & Temp ) && ! Is_visited ( & Temp )) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px1 =  True ;
           Aff_visited ( & Temp , &_Px1) ;

         } ;
         _Px2 =  Fg_ATib ( Temp ) ;
         if( ( Fg_ATib ( Temp ) != NULL ) && ( ! Is_visited ( &_Px2) )) {
           Empiler_PATib (& S , Fg_ATib ( Temp ) ) ;

         } ;
         _Px3 =  Fd_ATib ( Temp ) ;
         if( ( Fd_ATib ( Temp ) != NULL ) && ( ! Is_visited ( &_Px3) )) {
           Empiler_PATib (& S , Fd_ATib ( Temp ) ) ;

         } ;
         _Px4 =  Fg_ATib ( Temp ) ;
         if( ( Fg_ATib ( Temp ) != NULL ) && Is_visited ( &_Px4) && ( Fd_ATib ( Temp ) == NULL ) && ( ! Is_visited ( & Temp ) )) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px5 =  True ;
           Aff_visited ( & Temp , &_Px5) ;

         } ;
         _Px6 =  Fd_ATib ( Temp ) ;
         Bool11  =  ( Fd_ATib ( Temp ) != NULL ) && Is_visited ( &_Px6) ;
         Bool12  =  ( Fg_ATib ( Temp ) == NULL ) && ( ! Is_visited ( & Temp ) ) ;
         if( Bool11 && Bool12) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px7 =  True ;
           Aff_visited ( & Temp , &_Px7) ;

         } ;
         _Px8 =  Fg_ATib ( Temp ) ;
         _Px9 =  Fd_ATib ( Temp ) ;
         if( ( Fd_ATib ( Temp ) != NULL ) && ( Fg_ATib ( Temp ) != NULL ) && Is_visited ( &_Px8) && Is_visited ( &_Px9)) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px10 =  True ;
           Aff_visited ( & Temp , &_Px10) ;

         } ;

       } ;
       if( ( ! Is_visited ( & *Root ) )) {
         Empiler_PATib (& S , *Root ) ;
         Stop  =  False ;
         }
       else
         {
         Stop  =  True ;

       } ;

     } ;
     printf ( " %s", "Traversal of the tree leaf by leaf from the right to the left : OK\n" ) ;

    }
  /* verifying the leaf by leaf traversing from the left to the right   */
  void Verify_ll_lr (Pointeur_ATib *Root , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_PATib S=NULL;
      Pointeur_ATib P=NULL;
      Pointeur_ATib Temp=NULL;
      bool1 Stop;
      Pointeur_LATib Newcell=NULL;
      Pointeur_LATib Lastcell=NULL;
      int _Px1;

      /** Corps du module **/
     *Head  =  NULL ;
     Creerpile_PATib (& S ) ;
     Empiler_PATib (& S , *Root ) ;
     Stop  =  False ;
     while( ( ! Stop ))  {
       while( ( ! Pilevide_PATib ( S ) ))  {
         Depiler_PATib (& S , &Temp ) ;
         if( Is_leaf ( & Temp )) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px1 =  Struct1_Tib ( Info_ATib ( Temp )  ) ;
           Delete ( & *Root , &_Px1) ;

         } ;
         if( ( Fd_ATib ( Temp ) != NULL )) {
           Empiler_PATib (& S , Fd_ATib ( Temp ) ) ;

         } ;
         if( ( Fg_ATib ( Temp ) != NULL )) {
           Empiler_PATib (& S , Fg_ATib ( Temp ) ) ;

         } ;

       } ;
       if( ( *Root != NULL )) {
         Creerpile_PATib (& S ) ;
         Empiler_PATib (& S , *Root ) ;
         Stop  =  False ;
         }
       else
         {
         Stop  =  True ;

       } ;

     } ;

    }
  /* verifying the leaf by leaf traversing from the right to the left */
  void Verify_ll_rl (Pointeur_ATib *Root , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_PATib S=NULL;
      Pointeur_ATib P=NULL;
      Pointeur_ATib Temp=NULL;
      bool1 Stop;
      Pointeur_LATib Newcell=NULL;
      Pointeur_LATib Lastcell=NULL;
      int _Px1;

      /** Corps du module **/
     *Head  =  NULL ;
     Creerpile_PATib (& S ) ;
     Empiler_PATib (& S , *Root ) ;
     Stop  =  False ;
     while( ( ! Stop ))  {
       while( ( ! Pilevide_PATib ( S ) ))  {
         Depiler_PATib (& S , &Temp ) ;
         if( Is_leaf ( & Temp )) {
           Allouer_LATib (& Newcell ) ;
           Aff_adr_LATib ( Newcell , NULL ) ;
           Aff_val_LATib ( Newcell , Temp ) ;
           if( *Head == NULL) {
             *Head  =  Newcell ;
             }
           else
             {
             Aff_adr_LATib ( Lastcell , Newcell ) ;

           } ;
           Lastcell  =  Newcell ;
           _Px1 =  Struct1_Tib ( Info_ATib ( Temp )  ) ;
           Delete ( & *Root , &_Px1) ;

         } ;
         if( Fg_ATib ( Temp ) != NULL) {
           Empiler_PATib (& S , Fg_ATib ( Temp ) ) ;

         } ;
         if( ( Fd_ATib ( Temp ) != NULL )) {
           Empiler_PATib (& S , Fd_ATib ( Temp ) ) ;

         } ;

       } ;
       if( ( *Root != NULL )) {
         Creerpile_PATib (& S ) ;
         Empiler_PATib (& S , *Root ) ;
         Stop  =  False ;
         }
       else
         {
         Stop  =  True ;

       } ;

     } ;

    }
  /* function for searching for a value in the tree, it will return the node and its parent */
  void Search (Pointeur_ATib *Root , int *Value , Pointeur_ATib *P , Pointeur_ATib *Q)
    {
      /** Variables locales **/
      Pointeur_ATib Temp=NULL;
      bool1 Found;

      /** Corps du module **/
     Found  =  False ;
     *Q  =  NULL ;
     *P  =  *Root ;
     while( ( ! Found ) && ( *P != NULL )) {
       if( Struct1_Tib ( Info_ATib ( *P )  ) == *Value) {
         Found  =  True ;
         }
       else
         {
         *Q  =  *P ;
         if( ( Struct1_Tib ( Info_ATib ( *P )  ) > *Value )) {
           *P  =  Fg_ATib ( *P ) ;
           }
         else
           {
           *P  =  Fd_ATib ( *P ) ;

         } ;

       } ;

     } ;

    }

  // Standard inorder traversal
  void inorderTraversal(Pointeur_ATib root) {
    if (root == NULL) {
        return;
    }

    // Traverse the left subtree
    inorderTraversal(Fg_ATib(root));

    // Visit the root node
    printf("%d |", Struct1_Tib(Info_ATib(root)));

    // Traverse the right subtree
    inorderTraversal(Fd_ATib(root));
  }

  /* we store the values of the nodes in a linked lists in a progressive manner and we save it with the head */
  void Inorder_iterative (Pointeur_ATib *Root , Pointeur_Li *Head)
    {
      /** Variables locales **/
      Pointeur_PATib P=NULL;
      Pointeur_Li Q=NULL;
      Pointeur_Li Tempq=NULL;
      Pointeur_ATib Temp=NULL;
      bool1 Stop;

      /** Corps du module **/
     *Head  =  NULL ;
     Creerpile_PATib (& P ) ;
     Temp  =  *Root ;
     Stop  =  False ;
     while( ( ! Stop )) {
       while( Temp != NULL) {
         Empiler_PATib (& P , Temp ) ;
         Temp  =  Fg_ATib ( Temp ) ;

       } ;
       if( ( ! Pilevide_PATib ( P ) )) {
         Depiler_PATib (& P , &Temp ) ;
         Allouer_Li (& Q ) ;
         Aff_val_Li ( Q , Struct1_Tib ( Info_ATib ( Temp )  ) ) ;
         if( *Head == NULL) {
           *Head  =  Q; }
         else
           {
           Tempq  =  *Head ;
           while( Suivant_Li ( Tempq ) != NULL) {
             Tempq  =  Suivant_Li ( Tempq ) ;

           } ;
           Aff_adr_Li ( Tempq , Q ) ;

         } ;
         Temp  =  Fd_ATib ( Temp ) ;
         }
       else
         {
         Stop  =  True ;

       } ;

     } ;

    }
  /* return false if the list is not ordered , traversing the list */
  /* this function uses the function inorder iterative and check the list*/
  /* if we find a element greater than its next then it is not a binary search tree */
  /* actually we need to do two loops for each cell we go through the list to
   verify starting right after it's next , to be fixed later */
  bool1  Binary_tree (Pointeur_ATib *Root)
    {
      /** Variables locales **/
      bool1  Binary_tree2 ;
      Pointeur_Li Head=NULL;
      Pointeur_Li Temp=NULL;
      Pointeur_Li Temp1=NULL;
      bool1 Bool1;

      /** Corps du module **/
     Inorder_iterative ( & *Root , & Head ) ;
     Bool1  =  True ;
     if( *Root == NULL) {
       Bool1  =  False ;
       }
     else
       {
       if( Suivant_Li ( Head ) == NULL) {
         Bool1  =  True ;
         }
       else
         {
         Temp  =  Head ;
         Temp1  =  Suivant_Li ( Head ) ;
         while( ( Temp1 != NULL ) && Bool1) {
           if( Valeur_Li ( Temp ) > Valeur_Li ( Temp1 )) {
             Bool1  =  False ;

           } ;
           Temp  =  Suivant_Li ( Temp ) ;
           Temp1  =  Suivant_Li ( Temp1 ) ;

         } ;

       } ;

     } ;
     Binary_tree2  =  Bool1 ;

     return Binary_tree2 ;
    }
  /* removing duplicates from the linked list */
  /* the remove duplicates is useless in this case because each time we will empty the stack*/
  void Delete_duplicates (Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_LATib Current=NULL;
      Pointeur_LATib Index=NULL;
      Pointeur_LATib Temp=NULL;
      int Value1;
      int Value2;

      /** Corps du module **/
     Current  =  *Head ;
     Index  =  NULL ;
     if( *Head == NULL) {
       printf ( " %s", "The list is empty" ) ;
       }
     else
       {
       while( Current != NULL) {
         Temp  =  Current ;
         Index  =  Suivant_LATib ( Current ) ;
         while( Index != NULL) {
           Value1  =  Struct1_Tib ( Info_ATib ( Valeur_LATib ( Current ) )  ) ;
           Value2  =  Struct1_Tib ( Info_ATib ( Valeur_LATib ( Index ) )  ) ;
           if( Value1 == Value2) {
             Aff_adr_LATib ( Temp , Suivant_LATib ( Index ) ) ;
             Liberer_LATib ( Index ) ;
             Index  =  Suivant_LATib ( Temp ) ;
             }
           else
             {
             Temp  =  Index ;
             Index  =  Suivant_LATib ( Index ) ;

           } ;

         } ;
         Current  =  Suivant_LATib ( Current ) ;

       } ;

     } ;

    }
  /* the construction  of the linked list that holds all the branches of the tree from the left to the right */
  /* cinstruct the list of all the paths from the leaf to the root */
  void Path_list_lr (Pointeur_ATib *Root , Pointeur_PATib *S , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_ATib Temp=NULL;
      Pointeur_LATib Newcell=NULL;
      Pointeur_LATib Lastcell=NULL;
      Pointeur_ATib _Px1=NULL;
      Pointeur_ATib _Px2=NULL;

      /** Corps du module **/
     if( *Root != NULL) {
       if( Pilevide_PATib ( *S )) {
         Creerpile_PATib (& *S ) ;

       } ;
       Empiler_PATib (& *S , *Root ) ;
       if( ( Fg_ATib ( *Root ) == NULL ) && ( Fd_ATib ( *Root ) == NULL )) {
         Stack_list ( & *S , & *Head ) ;
         }
       else
         {
         _Px1 =  Fg_ATib ( *Root ) ;
         Path_list_lr ( &_Px1, & *S , & *Head ) ;
         _Px2 =  Fd_ATib ( *Root ) ;
         Path_list_lr ( &_Px2, & *S , & *Head ) ;

       } ;

     }
    }
  /* construct the list of all the paths from the leaf to the root */
  void Path_list_rl (Pointeur_ATib *Root , Pointeur_PATib *S , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_ATib Temp=NULL;
      Pointeur_LATib Newcell=NULL;
      Pointeur_LATib Lastcell=NULL;
      Pointeur_ATib _Px1=NULL;
      Pointeur_ATib _Px2=NULL;

      /** Corps du module **/
     if( *Root != NULL) {
       if( Pilevide_PATib ( *S )) {
         Creerpile_PATib (& *S ) ;

       } ;
       Empiler_PATib (& *S , *Root ) ;
       if( ( Fg_ATib ( *Root ) == NULL ) && ( Fd_ATib ( *Root ) == NULL )) {
         Stack_list ( & *S , & *Head ) ;
         }
       else
         {
         _Px1 =  Fd_ATib ( *Root ) ;
         Path_list_rl ( &_Px1, & *S , & *Head ) ;
         _Px2 =  Fg_ATib ( *Root ) ;
         Path_list_rl ( &_Px2, & *S , & *Head ) ;

       } ;

     }
    }
  /* put the values of the stack in a linked list and save the stack*/
  void Stack_list (Pointeur_PATib *S , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_ATib Temp=NULL;
      Pointeur_LATib Current=NULL;
      Pointeur_LATib Newcell=NULL;
      Pointeur_LATib Lastcell=NULL;

      /** Corps du module **/
     while( ! Pilevide_PATib ( *S )) {
       Depiler_PATib (& *S , &Temp ) ;
       Allouer_LATib (& Newcell ) ;
       Aff_adr_LATib ( Newcell , NULL ) ;
       Aff_val_LATib ( Newcell , Temp ) ;
       if( *Head == NULL) {
         *Head  =  Newcell ;
         }
       else
         {
         Current  =  *Head ;
         while( Suivant_LATib ( Current ) != NULL) {
           Current  =  Suivant_LATib ( Current ) ;

         } ;
         Aff_adr_LATib ( Current , Newcell ) ;

       }
     } ;

    }
  /* we construct the list of all the paths of the leaves and then we remove the duplicates */
  void Verify_bb_rl (Pointeur_ATib *Root , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_PATib S=NULL;

      /** Corps du module **/
     Path_list_rl ( & *Root , & S , & *Head ) ;
     Delete_duplicates ( & *Head ) ;

    }
  /* we construct the list of all the paths of the leaves and then we remove the duplicates */
  void Verify_bb_lr (Pointeur_ATib *Root , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_PATib S=NULL;

      /** Corps du module **/
     Path_list_lr ( & *Root , & S , & *Head ) ;
     Delete_duplicates ( & *Head ) ;

    }
  /* print a list */
  void Print_list (Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_LATib Current=NULL;
      Type_Tib _Struct_Temp1;

      /** Corps du module **/
     if( *Head == NULL) {
       printf ( " %s", "The list is empty" ) ;
       }
     else
       {
       Current  =  *Head ;
       while( Current != NULL) {
         /** Ecriture d'une structure */
         _Struct_Temp1 = *Info_ATib(Valeur_LATib(Current));
         printf ( "%d", _Struct_Temp1.Champ1 );
         printf(" | ");
         Current  =  Suivant_LATib ( Current ) ;

       } ;

     } ;

    }
  /* this function verifies if the two lists are identical */
  bool1  Compare_list (Pointeur_LATib *Head1 , Pointeur_LATib *Head2)
    {
      /** Variables locales **/
      bool1  Compare_list2 ;
      Pointeur_LATib Current1=NULL;
      Pointeur_LATib Current2=NULL;
      bool1 Identical;

      /** Corps du module **/
     Identical  =  True ;
     Current1  =  *Head1 ;
     Current2  =  *Head2 ;
     while( ( Current1 != NULL ) && ( Current2 != NULL )) {
       if( Struct1_Tib ( Info_ATib ( Valeur_LATib ( Current1 ) )  ) != Struct1_Tib ( Info_ATib ( Valeur_LATib ( Current2 ) )  )) {
         Identical  =  False ;

       } ;
       Current1  =  Suivant_LATib ( Current1 ) ;
       Current2  =  Suivant_LATib ( Current2 ) ;

     } ;
     if( ( Current1 == NULL ) && ( Current2 != NULL )) {
       Identical  =  False ;

     } ;
     if( ( Current2 == NULL ) && ( Current1 != NULL )) {
       Identical  =  False ;

     } ;
     Compare_list2  =  Identical ;

     return Compare_list2 ;
    }
  void Bb_lr (Pointeur_ATib *Root , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_LATib Newcell=NULL;
      Pointeur_LATib Lastcell=NULL;
      Pointeur_PATib S=NULL;
      Pointeur_PATib S1=NULL;
      Pointeur_ATib Temp=NULL;
      Pointeur_ATib Temp1=NULL;
      bool1 Stop;
      bool1 _Px1;

      /** Corps du module **/
     *Head  =  NULL ;
     Stop  =  False ;
     Creerpile_PATib (& S ) ;
     Creerpile_PATib (& S1 ) ;
     Empiler_PATib (& S , *Root ) ;
     Temp  =  *Root ;
     while( ( ! Stop )) {
       Depiler_PATib (& S , &Temp ) ;
       while( ( Temp != NULL )) {
         Empiler_PATib (& S , Temp ) ;
         Temp1  =  Temp ;
         if( ( Fd_ATib ( Temp ) != NULL )) {
           Empiler_PATib (& S1 , Fd_ATib ( Temp ) ) ;

         } ;
         Temp  =  Fg_ATib ( Temp ) ;

       } ;
       if( Fd_ATib ( Temp1 ) != NULL) {
         Empiler_PATib (& S , Fd_ATib ( Temp1 ) ) ;
         }
       else
         {
         while( ( ! Pilevide_PATib ( S ) )) {
           ;
           Depiler_PATib (& S , &Temp ) ;
           if( ( ! Struct2_Tib ( Info_ATib ( Temp )  ) )) {
             Allouer_LATib (& Newcell ) ;
             Aff_adr_LATib ( Newcell , NULL ) ;
             Aff_val_LATib ( Newcell , Temp ) ;
             if( *Head == NULL) {
               *Head  =  Newcell ;
               }
             else
               {
               Aff_adr_LATib ( Lastcell , Newcell ) ;

             } ;
             Lastcell  =  Newcell ;
             _Px1 =  True ;
             Aff_visited ( & Temp , &_Px1) ;

           } ;

         } ;
         if( ! Pilevide_PATib ( S1 )) {
           Depiler_PATib (& S1 , &Temp ) ;
           Empiler_PATib (& S , Temp ) ;
           Stop  =  False ;
           }
         else
           {
           Stop  =  True ;

         } ;

       } ;

     } ;
     printf ( " %s", "Traversal of the tree branch by branch from the left to the right : OK\n" ) ;

    }
  void Bb_rl (Pointeur_ATib *Root , Pointeur_LATib *Head)
    {
      /** Variables locales **/
      Pointeur_LATib Newcell=NULL;
      Pointeur_LATib Lastcell=NULL;
      Pointeur_PATib S=NULL;
      Pointeur_PATib S1=NULL;
      Pointeur_ATib Temp=NULL;
      Pointeur_ATib Temp1=NULL;
      bool1 Stop;
      bool1 _Px1;

      /** Corps du module **/
     *Head  =  NULL ;
     Stop  =  False ;
     Creerpile_PATib (& S ) ;
     Creerpile_PATib (& S1 ) ;
     Empiler_PATib (& S , *Root ) ;
     Temp  =  *Root ;
     while( ( ! Stop )) {
       Depiler_PATib (& S , &Temp ) ;
       while( ( Temp != NULL )) {
         Empiler_PATib (& S , Temp ) ;
         Temp1  =  Temp ;
         if( ( Fg_ATib ( Temp ) != NULL )) {
           Empiler_PATib (& S1 , Fg_ATib ( Temp ) ) ;

         } ;
         Temp  =  Fd_ATib ( Temp ) ;

       } ;
       if( Fg_ATib ( Temp1 ) != NULL) {
         Empiler_PATib (& S , Fg_ATib ( Temp1 ) ) ;
         }
       else
         {
         while( ( ! Pilevide_PATib ( S ) )) {
           ;
           Depiler_PATib (& S , &Temp ) ;
           if( ( ! Struct2_Tib ( Info_ATib ( Temp )  ) )) {
             Allouer_LATib (& Newcell ) ;
             Aff_adr_LATib ( Newcell , NULL ) ;
             Aff_val_LATib ( Newcell , Temp ) ;
             if( *Head == NULL) {
               *Head  =  Newcell ;
               }
             else
               {
               Aff_adr_LATib ( Lastcell , Newcell ) ;

             } ;
             Lastcell  =  Newcell ;
             _Px1 =  True ;
             Aff_visited ( & Temp , &_Px1) ;

           } ;

         } ;
         if( ! Pilevide_PATib ( S1 )) {
           Depiler_PATib (& S1 , &Temp ) ;
           Empiler_PATib (& S , Temp ) ;
           Stop  =  False ;
           }
         else
           {
           Stop  =  True ;

         } ;

       } ;

     } ;
     printf ( " %s", "Traversal of the tree branch by branch from the right to the left : OK\n" ) ;

    }





void Presentation ()
{

        // system("mode con: cols=999 lines=999");
        printf("\n\n");
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c      %c%c%c%c%c%c   %c%c%c%c%c%c   %c%c%c%c%c%c       %c%c%c%c%c%c   %c%c%c%c%c%c     %c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("%c%c%c%c      %c%c       %c%c         %c%c           %c%c     %c%c  %c%c     %c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("%c%c%c%c      %c%c%c%c%c%c   %c%c%c%c%c%c     %c%c           %c%c     %c%c%c%c%c%c     %c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("%c%c%c%c      %c%c           %c%c     %c%c           %c%c     %c%c         %c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("%c%c%c%c      %c%c%c%c%c%c   %c%c%c%c%c%c   %c%c%c%c%c%c         %c%c    %c%c%c%c        %c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c                ___________________________              %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c               /                           /             %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c              /     TAREK AIT AHMED       /              %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c             /          RAYAN DERRADJI   /               %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c            /___________________________/                %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        system("pause");
        system("cls");

}

void GoodBye(){
system("cls");
system("mode con: cols=999 lines=999");
printf("\n\n\n\n\n\n\n");
printf("\t\t\t\t .----------------.  .----------------.  .----------------.  .-----------------. .----------------. \n");
printf("\t\t\t\t| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
printf("\t\t\t\t| |  _________   | || |  ____  ____  | || |      __      | || | ____  _____  | || |  ___  ____   | |\n");
printf("\t\t\t\t| | |  _   _  |  | || | |_   ||   _| | || |     /  |     | || ||_   ||_   _| | || | |_  ||_  _|  | |\n");
printf("\t\t\t\t| | |_/ | | |_|  | || |   | |__| |   | || |    / /| |    | || |  |   ( | |   | || |   | |_/ /    | |\n");
printf("\t\t\t\t| |     | |      | || |   |  __  |   | || |   / ____ |   | || |  | |( (| |   | || |   |  __'.    | |\n");
printf("\t\t\t\t| |    _| |_     | || |  _| |  | |_  | || | _/ /    | |_ | || | _| |_(   |_  | || |  _| |  | |_  | |\n");
printf("\t\t\t\t| |   |_____|    | || | |____||____| | || ||____|  |____|| || ||_____|(____| | || | |____||____| | |\n");
printf("\t\t\t\t| |              | || |              | || |              | || |              | || |              | |\n");
printf("\t\t\t\t| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
printf("\t\t\t\t '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n\n\n");
printf("\t\t\t\t           .----------------.  .----------------.  .----------------.  .----------------. \n");
printf("\t\t\t\t          | .--------------. || .--------------. || .--------------. || .--------------. |\n");
printf("\t\t\t\t          | |  ____  ____  | || |     ____     | || | _____  _____ | || |              | |\n");
printf("\t\t\t\t          | | |_  _||_  _| | || |   .'    `.   | || ||_   _||_   _|| || |      _       | |\n");
printf("\t\t\t\t          | |   ( |  / /   | || |  /  .--.  |  | || |  | |    | |  | || |     | |      | |\n");
printf("\t\t\t\t          | |    ( |/ /    | || |  | |    | |  | || |  | '    ' |  | || |     | |      | |\n");
printf("\t\t\t\t          | |    _|  |_    | || |  |  `--'  /  | || |   | `--' /   | || |     | |      | |\n");
printf("\t\t\t\t          | |   |______|   | || |   `.____.'   | || |    `.__.'    | || |     |_|      | |\n");
printf("\t\t\t\t          | |              | || |              | || |              | || |     (_)      | |\n");
printf("\t\t\t\t          | '--------------' || '--------------' || '--------------' || '--------------' | \n");
printf("\t\t\t\t           '----------------'  '----------------'  '----------------'  '----------------' \n");


Sleep(1000);
system("cls");
}

void welcome()

{
    int k;
    // system("mode con: cols=999 lines=999");
    system("Cls");
    for (k = 0; k < 10; k++)
    {

        printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t  .----------------.  .----------------.  .----------------.\n");
    printf("\t\t\t\t\t\t | .--------------. || .--------------. || .--------------. |\n");
    printf("\t\t\t\t\t\t | |  _________   | || |    _______   | || |     _____    | |\n");
    printf("\t\t\t\t\t\t | | |_   ___  |  | || |   /  ___  |  | || |    |_   _|   | |\n");
    printf("\t\t\t\t\t\t | |   | |_  \\_|  | || |  |  (__ \\_|  | || |      | |     | |\n");
    printf("\t\t\t\t\t\t | |   |  _|  _   | || |   \'.___`-.   | || |      | |     | |\n");
    printf("\t\t\t\t\t\t | |  _| |___/ |  | || |  |`\\____) |  | || |     _| |_    | |\n");
    printf("\t\t\t\t\t\t | | |_________|  | || |  |_______.\'  | || |    |_____|   | |\n");
    printf("\t\t\t\t\t\t | |              | || |              | || |              | |\n");
    printf("\t\t\t\t\t\t | \'--------------\' || \'--------------\' || \'--------------\' |\n");
    printf("\t\t\t\t\t\t  \'----------------\'  \'----------------\'  \'----------------\'\n");
    Sleep(100);
    system("cls");
    }

    printf("\t\t\t\t\t\t          R%cpublique Alg%crienne D%cmocratique et Populaire           \n", 130, 130, 130);
    printf("\t\t\t\t\t\tMinist%cre de l'Enseignement Sup%crieur et de la Recherche Scientifique\n\n\n", 130, 130);
    printf("\t\t\t\t\t\t     _______________________________________________________\n");
    printf("\t\t\t\t\t\t    |        _______     _______     _                      |\n");
    printf("\t\t\t\t\t\t    |       |  _____|   |  _____|   | |  %ccole nationale    |\n", 130);
    printf("\t\t\t\t\t\t    |       | |_____    | |_____    | |                     |\n");
    printf("\t\t\t\t\t\t    |       |  _____|   |_____  |   | |  sup%crieure         |\n", 130);
    printf("\t\t\t\t\t\t    |       | |_____     _____| |   | |                     |\n");
    printf("\t\t\t\t\t\t    |       |_______|   |_______|   |_|  d'informatique     |\n");
    printf("\t\t\t\t\t\t    |_______________________________________________________|\n\n\n");

    printf("\t\t\t\t\t\t ___________________________________________________________________\n");
    printf("\t\t\t\t\t\t|                                                                   |\n");
    printf("\t\t\t\t\t\t| Done by  :             Tarek Ait Ahmed                            |\n");
    printf("\t\t\t\t\t\t|                                                                   |\n");
    printf("\t\t\t\t\t\t|                              &                                    |\n");
    printf("\t\t\t\t\t\t|                        Rayan Derradji                             |\n");
    printf("\t\t\t\t\t\t|                                                                   |\n");
    printf("\t\t\t\t\t\t|                                                                   |\n");
    printf("\t\t\t\t\t\t|           SECTION : A           GROUP : 03                        |\n");
    printf("\t\t\t\t\t\t|                                                                   |\n");
    printf("\t\t\t\t\t\t|           TP2 :        BINARY SEARCH TREES TRAVERSALS             |\n", 130, 130);
    printf("\t\t\t\t\t\t|                                                                   |\n");
    printf("\t\t\t\t\t\t|                                                                   |\n");
    printf("\t\t\t\t\t\t|                                                                   |\n");
    printf("\t\t\t\t\t\t|                                                                   |\n");
    printf("\t\t\t\t\t\t| Supervised By : Pr D.E Zegour                                     |\n");
    printf("\t\t\t\t\t\t|___________________________________________________________________|\n\n\n");
    printf("\n");
    system("PAUSE");
}




void branch_by_branch_LR(){
  // system("mode con: cols=999 lines=999");

            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                                                                %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c             This is the branch by branch traversal from the left to the right                  %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                                                                %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf( "   \n\n" );
};

void branch_by_branch_RL(){
  // system("mode con: cols=999 lines=999");

            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                                                                %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c             This is the branch by branch traversal from the right to the left                  %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                                                                %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf( "   \n\n" );
};

void leaf_by_leaf_LR(){
  // system("mode con: cols=999 lines=999");

            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                                                                %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c             This is the leaf by leaf traversal from the left to the right                      %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                                                                %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf( "   \n\n" );
};


void leaf_by_leaf_RL(){
  // system("mode con: cols=999 lines=999");
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                                                                %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c             This is the leaf by leaf traversal from the right to the left                      %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                                                                %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf( "   \n\n" );
};

void create_BST(){
  // system("mode con: cols=999 lines=999");
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                 CREATE YOUR BST                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
            printf( "   \n\n" );
};


void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
  }

  void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
  }

// Function to calculate the height of the tree
int getHeight(Pointeur_ATib node) {
    if (node == NULL) {
        return 0;
    } else {
        int leftHeight = getHeight(Fg_ATib(node));
        int rightHeight = getHeight(Fd_ATib(node));
        return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
    }
}

// Simple Display of Tree Horizontally, efficient for large trees compared to the vertical method
void printTree_V3(Pointeur_ATib root, int level) {
    if (root == NULL)
        return;

    printTree_V3(Fd_ATib(root), level + 1);

    for (int i = 0; i < level; i++) {
        printf("   ");
    }

    if (Struct2_Tib(Info_ATib(root))) {
        printf("\033[31m%d\033[0m\n", Struct1_Tib(Info_ATib(root))); // Print in red
    } else {
        printf("\033[37m%d\033[0m*\n", Struct1_Tib(Info_ATib(root))); // Print in white
    }

    printTree_V3(Fg_ATib(root), level + 1);
}

// Displays the binary tree considering the height of the tree at each node
void visualizeTreeWithHeight(Pointeur_ATib root, int x, int y, int height) {
    if (root == NULL) return;
    root->x=x;
    root->y=y;

    int spaces = pow(2, height);

    gotoxy(x, y);
    printf("%d", Struct1_Tib(Info_ATib(root)));

    if (Fg_ATib(root) != NULL) {
        for (int i = 1; i <= spaces / 2; i++) {
            gotoxy(x - i, y);
            printf("_");
        }
        gotoxy(x - spaces / 2, y + 1);
        printf("|");
        visualizeTreeWithHeight(Fg_ATib(root), x - spaces / 2, y + 2, height - 1);
    }

    if (Fd_ATib(root) != NULL) {
        for (int i = 1; i <= spaces / 2; i++) {
            gotoxy(x + i + 1, y);
            printf("_");
        }
        gotoxy(x + spaces / 2, y + 1);
        printf("|");
        visualizeTreeWithHeight(Fd_ATib(root), x + spaces / 2, y + 2, height - 1);
    }
}

// Function to highlight a node when animating
void markNode(Pointeur_ATib node) {
    int x_coord = node->x;
    int y_coord = node->y;
    setColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // Set text color to bright red
    gotoxy(x_coord, y_coord);
    printf("%d", Struct1_Tib(Info_ATib(node)));
    Sleep(500); // Highlight for 500 milliseconds
    setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset text color to default
}

void initialize_visited(Pointeur_ATib root) {
    if (root != NULL) {
        initialize_visited(Fg_ATib(root));
        Aff_struct2_Tib(Info_ATib(root), false);
        initialize_visited(Fd_ATib(root));
    }
}

void search(Pointeur_ATib root, Type1_Tib value, Pointeur_ATib *P, Pointeur_ATib *Q) {
    if (root == NULL) {
        *P = NULL;
        *Q = NULL;
    } else if (Struct1_Tib(Info_ATib(root)) == value) {
        *P = root;
        *Q = NULL;
    } else {
        if (value > Struct1_Tib(Info_ATib(root))) {
            search(Fd_ATib(root), value, P, Q);
        } else {
            search(Fg_ATib(root), value, P, Q);
        }
    }
    if (*Q == NULL) {
        *Q = root;
    }
}

void insertInTree(Pointeur_ATib *root, Type1_Tib value) {
    if (*root == NULL) {
        Creernoeud_ATib(root);
        Aff_struct1_Tib(Info_ATib(*root), value);
        Aff_struct2_Tib(Info_ATib(*root), false);
    } else {
        if (value < Struct1_Tib(Info_ATib(*root))) {
            insertInTree(&((*root)->Fg), value);
        } else if (value > Struct1_Tib(Info_ATib(*root))) {
            insertInTree(&((*root)->Fd), value);
        }
    }
}

void createTpTree(Pointeur_ATib *Root) {
    int _Px1;
    int _Px2;
    int _Px3;
    int _Px4;
    int _Px5;
    int _Px6;
    int _Px7;
    int _Px8;
    int _Px9;
    int _Px10;
    int _Px11;
    int _Px12;
    int _Px13;
    int _Px14;
    int _Px15;
    int _Px16;
    int _Px17;
    int _Px18;

    _Px1 = 45;
    insertInTree(Root, _Px1);
    _Px2 = 20;
    insertInTree(Root, _Px2);
    _Px3 = 65;
    insertInTree(Root, _Px3);
    _Px4 = 10;
    insertInTree(Root, _Px4);
    _Px5 = 35;
    insertInTree(Root, _Px5);
    _Px6 = 55;
    insertInTree(Root, _Px6);
    _Px7 = 85;
    insertInTree(Root, _Px7);
    _Px8 = 50;
    insertInTree(Root, _Px8);
    _Px9 = 58;
    insertInTree(Root, _Px9);
    _Px10 = 75;
    insertInTree(Root, _Px10);
    _Px11 = 95;
    insertInTree(Root, _Px11);
    _Px12 = 56;
    insertInTree(Root, _Px12);
    _Px13 = 60;
    insertInTree(Root, _Px13);
    _Px14 = 90;
    insertInTree(Root, _Px14);
    _Px15 = 98;
    insertInTree(Root, _Px15);
    _Px16 = 57;
    insertInTree(Root, _Px16);
    _Px17 = 62;
    insertInTree(Root, _Px17);
    _Px18 = 88;
    insertInTree(Root, _Px18);
}

void createBTree(Pointeur_ATib *root, int n) {
    int i = 1;
    Type1_Tib value;
    *root = NULL;
    while (i <= n) {
        if (*root == NULL) {
            printf("Give the root of your tree: \n");
        }
        printf("Give the value (%d): ", i);
        scanf("%d", &value);
        insertInTree(root, value);
        i++;
    }
}

void createBTreeRandom(Pointeur_ATib *root, int n) {
    int i = 1;
    int min, max;
    Type1_Tib value;
    *root = NULL;

    printf("Give the maximum value: ");
    scanf("%d", &max);
    printf("Give the minimum value: ");
    scanf("%d", &min);

    while (i <= n) {
        value = rand() % (max - min) + min;
        insertInTree(root, value);
        i++;
    }
}

void clearScreen() {
    COORD topLeft  = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}

void BB_LR_animate(Pointeur_ATib root) {
    Typepile_PATib S, S1;
    bool stop = false;
    Creerpile_PATib(&S);
    Creerpile_PATib(&S1);
    Pointeur_ATib temp, temp1;
    temp = root;
    Empiler_PATib(&S, root);

    while (!stop) {
        Depiler_PATib(&S, &temp);
        while (temp != NULL) {
            Empiler_PATib(&S, temp);
            temp1 = temp;
            if (Fd_ATib(temp) != NULL) {
                Empiler_PATib(&S1, Fd_ATib(temp));
            }
            temp = Fg_ATib(temp);
        }

        if (Fd_ATib(temp1) != NULL) {
            Empiler_PATib(&S, Fd_ATib(temp1));
        } else {
            while (!Pilevide_PATib(S)) {
                Depiler_PATib(&S, &temp);
                if (!Struct2_Tib(Info_ATib(temp))) {
                    Aff_struct2_Tib(Info_ATib(temp), true);
                    clearScreen();
                    system("cls");
                    branch_by_branch_LR();
                    printf("\n\n");
                    printf("This is the branch by branch traversal of the tree from the left to the right:\n\n");
                    int h = getHeight(root);
                    if( h > 6){

                    printf("The tree is in this direction  --> \n\n");
                    printTree_V3(root,0);
                    Sleep(1000);

                    }else{
                    visualizeTreeWithHeight(root, 70, 15, h);
                    markNode(temp);
                    Sleep(500);
                    }
                }
            }

            if (!Pilevide_PATib(S1)) {
                Depiler_PATib(&S1, &temp);
                Empiler_PATib(&S, temp);
                stop = false;
            } else {
                if (Pilevide_PATib(S)) {
                    stop = true;
                }
            }
        }
    }
}
void BB_RL_animate(Pointeur_ATib root) {
    Typepile_PATib S, S1;
    bool stop = false;
    Creerpile_PATib(&S);
    Creerpile_PATib(&S1);
    Pointeur_ATib temp, temp1;
    temp = root;
    Empiler_PATib(&S, root);

    while (!stop) {
        Depiler_PATib(&S, &temp);
        while (temp != NULL) {
            Empiler_PATib(&S, temp);
            temp1 = temp;
            if (Fg_ATib(temp) != NULL) {
                Empiler_PATib(&S1, Fg_ATib(temp));
            }
            temp = Fd_ATib(temp);
        }

        if (Fg_ATib(temp1) != NULL) {
            Empiler_PATib(&S, Fg_ATib(temp1));
        } else {
            while (!Pilevide_PATib(S)) {
                Depiler_PATib(&S, &temp);
                if (!Struct2_Tib(Info_ATib(temp))) {
                    Aff_struct2_Tib(Info_ATib(temp), true);
                    clearScreen();
                    system("cls");
                    branch_by_branch_RL();
                    printf("\n\n");
                    printf("This is the branch by branch traversal of the tree from the right to the left:\n\n");
                    int h = getHeight(root);
                if( h > 6){

                printf("The tree is in this direction  --> \n\n");
                printTree_V3(root,0);
                Sleep(1000);

                }else{
                visualizeTreeWithHeight(root, 70, 15, h);
                markNode(temp);
                Sleep(500);
                }
                }
            }

            if (!Pilevide_PATib(S1)) {
                Depiler_PATib(&S1, &temp);
                Empiler_PATib(&S, temp);
                stop = false;
            } else {
                stop = true;
            }
        }
    }
}
void LL_LR_animate(Pointeur_ATib root) {
    Typepile_PATib S;
    Pointeur_ATib temp;
    Creerpile_PATib(&S);
    Empiler_PATib(&S, root);
    bool stop = false;

    while (!stop) {
        while (!Pilevide_PATib(S)) {
            Depiler_PATib(&S, &temp);
            if (Fd_ATib(temp) == NULL && Fg_ATib(temp) == NULL && !Struct2_Tib(Info_ATib(temp))) {
                Aff_struct2_Tib(Info_ATib(temp), true);
                system("cls");
                leaf_by_leaf_LR();
                printf("\n\n");
                printf("This is the leaf by leaf traversal of the tree from the left to the right:\n\n");
                int h = getHeight(root);
                if( h > 6){

                printf("The tree is in this direction  --> \n\n");
                printTree_V3(root,0);
                Sleep(1000);

                }else{
                visualizeTreeWithHeight(root, 70, 15, h);
                markNode(temp);
                Sleep(500);
                }
            }
            if (Fd_ATib(temp) != NULL && !Struct2_Tib(Info_ATib(Fd_ATib(temp)))) {
                Empiler_PATib(&S, Fd_ATib(temp));
            }
            if (Fg_ATib(temp) != NULL && !Struct2_Tib(Info_ATib(Fg_ATib(temp)))) {
                Empiler_PATib(&S, Fg_ATib(temp));
            }
            if (Fd_ATib(temp) != NULL && Struct2_Tib(Info_ATib(Fd_ATib(temp))) && Fg_ATib(temp) == NULL && !Struct2_Tib(Info_ATib(temp))) {
                Aff_struct2_Tib(Info_ATib(temp), true);
                system("cls");
                leaf_by_leaf_LR();
                printf("\n\n");
                printf("This is the leaf by leaf traversal of the tree from the left to the right:\n\n");
                int h = getHeight(root);
                if( h > 6){

                printf("The tree is in this direction  --> \n\n");
                printTree_V3(root,0);
                Sleep(1000);

                }else{
                visualizeTreeWithHeight(root, 70, 15, h);
                markNode(temp);
                Sleep(500);
                }
            }
            if (Fg_ATib(temp) != NULL && Struct2_Tib(Info_ATib(Fg_ATib(temp))) && Fd_ATib(temp) == NULL && !Struct2_Tib(Info_ATib(temp))) {
                Aff_struct2_Tib(Info_ATib(temp), true);
                system("cls");
                leaf_by_leaf_LR();
                printf("\n\n");
                printf("This is the leaf by leaf traversal of the tree from the left to the right:\n\n");
                int h = getHeight(root);
                if( h > 6){

                printf("The tree is in this direction  --> \n\n");
                printTree_V3(root,0);
                Sleep(1000);

                }else{
                visualizeTreeWithHeight(root, 70, 15, h);
                markNode(temp);
                Sleep(500);
                }
            }
            if (Fd_ATib(temp) != NULL && Fg_ATib(temp) != NULL && Struct2_Tib(Info_ATib(Fd_ATib(temp))) && Struct2_Tib(Info_ATib(Fg_ATib(temp)))) {
                Aff_struct2_Tib(Info_ATib(temp), true);
                system("cls");
                leaf_by_leaf_LR();
                printf("\n\n");
                printf("This is the leaf by leaf traversal of the tree from the left to the right:\n\n");
               int h = getHeight(root);
                if( h > 6){

                printf("The tree is in this direction  --> \n\n");
                printTree_V3(root,0);
                Sleep(1000);

                }else{
                visualizeTreeWithHeight(root, 70, 15, h);
                markNode(temp);
                Sleep(500);
                }
            }
        }
        if (!Struct2_Tib(Info_ATib(root))) {
            Empiler_PATib(&S, root);
            stop = false;
        } else {
            stop = true;
        }
    }
}
void LL_RL_animate(Pointeur_ATib root) {
    Typepile_PATib S, S2;
    Pointeur_ATib temp;
    Creerpile_PATib(&S);
    Creerpile_PATib(&S2);
    Empiler_PATib(&S, root);
    bool stop = false;

    while (!stop) {
        while (!Pilevide_PATib(S)) {
            Depiler_PATib(&S, &temp);
            if (Fd_ATib(temp) == NULL && Fg_ATib(temp) == NULL && !Struct2_Tib(Info_ATib(temp))) {
                Aff_struct2_Tib(Info_ATib(temp), true);
                system("cls");
                leaf_by_leaf_RL();
                printf("\n\n");
                printf("This is the leaf by leaf traversal of the tree from the right to the left:\n\n");
                int h = getHeight(root);
                if( h > 6){

                printf("The tree is in this direction  --> \n\n");
                printTree_V3(root,0);
                Sleep(1000);

                }else{
                visualizeTreeWithHeight(root, 70, 15, h);
                markNode(temp);
                Sleep(500);
                }
            }
            if (Fg_ATib(temp) != NULL && !Struct2_Tib(Info_ATib(Fg_ATib(temp)))) {
                Empiler_PATib(&S, Fg_ATib(temp));
            }
            if (Fd_ATib(temp) != NULL && !Struct2_Tib(Info_ATib(Fd_ATib(temp)))) {
                Empiler_PATib(&S, Fd_ATib(temp));
            }
            if (Fd_ATib(temp) != NULL && Struct2_Tib(Info_ATib(Fd_ATib(temp))) && Fg_ATib(temp) == NULL && !Struct2_Tib(Info_ATib(temp))) {
                Aff_struct2_Tib(Info_ATib(temp), true);
                system("cls");
                leaf_by_leaf_RL();
                printf("\n\n");
                printf("This is the leaf by leaf traversal of the tree from the right to the left:\n\n");
                int h = getHeight(root);
                if( h > 6){

                printf("The tree is in this direction  --> \n\n");
                printTree_V3(root,0);
                Sleep(1000);

                }else{
                visualizeTreeWithHeight(root, 70, 15, h);
                markNode(temp);
                Sleep(500);
                }
            }
            if (Fg_ATib(temp) != NULL && Struct2_Tib(Info_ATib(Fg_ATib(temp))) && Fd_ATib(temp) == NULL && !Struct2_Tib(Info_ATib(temp))) {
                Aff_struct2_Tib(Info_ATib(temp), true);
                system("cls");
                leaf_by_leaf_RL();
                printf("\n\n");
                printf("This is the leaf by leaf traversal of the tree from the right to the left:\n\n");
                int h = getHeight(root);
                if( h > 6){

                printf("The tree is in this direction  --> \n\n");
                printTree_V3(root,0);
                Sleep(1000);

                }else{
                visualizeTreeWithHeight(root, 70, 15, h);
                markNode(temp);
                Sleep(500);
                }
            }
            if (Fd_ATib(temp) != NULL && Fg_ATib(temp) != NULL && Struct2_Tib(Info_ATib(Fd_ATib(temp))) && Struct2_Tib(Info_ATib(Fg_ATib(temp)))) {
                Aff_struct2_Tib(Info_ATib(temp), true);
                system("cls");
                leaf_by_leaf_RL();
                printf("\n\n");
                printf("This is the leaf by leaf traversal of the tree from the right to the left:\n\n");
                int h = getHeight(root);

                if( h > 6){

                printf("The tree is in this direction  --> \n\n");
                printTree_V3(root,0);
                Sleep(1000);

                }else{
                visualizeTreeWithHeight(root, 70, 15, h);
                markNode(temp);
                Sleep(500);
                }
            }
        }
        if (!Struct2_Tib(Info_ATib(root))) {
            Empiler_PATib(&S, root);
            stop = false;
        } else {
            stop = true;
        }
    }
}



void MENU (int *ch)
{
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
  printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
  printf("%c%c%c%c                        MENU                             %c%c%c%c\n",219,219,219,219,219,219,219,219);
  printf("%c%c%c%c                                                         %c%c%c%c\n",219,219,219,219,219,219,219,219);
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
  printf( "   \n\n" );
  printf( "     1) The main algorithm traversing the all 10 tree and do the verification \n\n" );
  printf( "     2) The animation of the first traversal: branch by branch from the left to the right  (initally tp example, can be your generated tree)\n\n" );
  printf( "     3) The animation of the third traversal: branch by branch from the right to the left (initally tp example, can be your generated tree)\n\n" );
  printf( "     4) The animation of the second traversal: leaf by leaf from the left to the right (initally tp example, can be your generated tree)\n\n" );
  printf( "     5) The animation of the fourth traversal: leaf by leaf from the right to the left  (initally tp example, can be your generated tree)\n\n" );
  printf( "     6) Create your own tree example\n\n");
  printf( "     7) Print the BST in a tree format\n\n");
  printf( "     0) Exit the program\n\n" );
  printf( "     Enter your choice: " );
  scanf( "%d", ch );
  printf( "\n" );
}



  int main(int argc, char *argv[])
    {
    int choice;
    Pointeur_ATib root = NULL;
    int key;
    createTpTree(&root);
    int choice2;
    bool stop2;
    int n ;

    srand(time(NULL));
    Presentation();
    welcome();

    key = 0;


    do{
        key = 0;
        printf("\n");
        system("cls");
        MENU(&key);
        printf("key: %d\n", key);
        system("cls");
      switch (key){
        case 1:
            M  =  10 ;
            N  =  0 ;
            system("cls");
            printf("You selected: The main algorithm\n\n");
            while( N < M)  {
              printf ( " %s", "" ) ;
              printf("\n") ;
              if (N <= 9){
                printf ("\n\n> Press any key to proceed with the next tree...\n");
                fflush(stdin);
                getchar();
                system("cls");
              }
              printf("---------------------------------------------------------------\n\n");
              printf ( " %s", "THIS IS THE TRAVERSAL OF THE TREE NUMBER" ) ;
              printf ( " %d \n\n", N+1 ) ;
              printf ( " %s", "" ) ;
              Root1 = NULL;
              Root2 = NULL;
              Create_tree ( & Root1 , & Root2 ) ;
              printf("This is the inorder traversal of the tree: ");
              inorderTraversal ( Root1 ) ;
              printf("\n\n");
              if( Binary_tree ( & Root1 )) {
                printf ( " %s", "Checking if the binary search tree is well constructed : OK\n" ) ;
                }
              else
                {
                printf ( " %s", "Checking if the binary search tree is well constructed : NO\n" ) ;

              } ;
              Bb_lr ( & Root1 , & Head1 ) ;
              Bb_rl ( & Root2 , & Head2 ) ;
              Initialize_visited ( & Root1 ) ;
              Initialize_visited ( & Root2 ) ;
              Ll_lr ( & Root1 , & Head3 ) ;
              Ll_rl ( & Root2 , & Head4 ) ;
              Head7  =  NULL ;
              Head8  =  NULL ;
              Verify_bb_lr ( & Root1 , & Head7 ) ;
              Verify_bb_rl ( & Root2 , & Head8 ) ;
              Verify_ll_lr ( & Root1 , & Head5 ) ;
              Verify_ll_rl ( & Root2 , & Head6 ) ;
              printf("\n\n");
              if( ( Compare_list ( & Head3 , & Head5 ) )) {
                ;
                printf ( " %s", "The verification of the traversal leaf by leaf from the left to the right : OK\n" ) ;
                }
              else
                {
                printf ( " %s", "The verification of the traversal leaf by leaf from the left to the right : NO\n" ) ;

              } ;
              if( ( Compare_list ( & Head4 , & Head6 ) )) {
                ;
                printf ( " %s", "The verification of the traversal leaf by leaf from the right to the left : OK\n" ) ;
                }
              else
                {
                printf ( " %s", "The verification of the traversal leaf by leaf from the right to the left : NO\n" ) ;

              } ;
              if( ( Compare_list ( & Head2 , & Head8 ) )) {
                ;
                printf ( " %s", "The verification of the traversal branch by branch from the left to the right : OK\n" ) ;
                }
              else
                {
                printf ( " %s", "The verification of the traversal branch by branch from the left to the right : NO\n" ) ;

              } ;
              if( ( Compare_list ( & Head1 , & Head7 ) )) {
                ;
                printf ( " %s", "The verification of the traversal branch by branch from the right to the left : OK\n" ) ;
                }
              else
                {
                printf ( " %s", "The verification of the traversal branch by branch from the right to the left : NO\n" ) ;

              } ;

            
                printf("\n");
                printf ( " %s", "The traversal of the tree branch by branch from the left to the right :\n\n " ) ;
                printf ( " %s", "" ) ;
                Print_list ( & Head1 ) ;
                printf("\n\n");
                printf ( " %s", "" ) ;
                printf ( " %s", "The traversal of the tree branch by branch from the right to the left : \n\n" ) ;
                printf ( " %s", "" ) ;
                Print_list ( & Head2 ) ;
                printf("\n\n") ;
                printf ( " %s", "" ) ;
                printf ( " %s", "The traversal of the tree leaf by leaf from the left to the right : \n\n" ) ;
                printf ( " %s", "" ) ;
                Print_list ( & Head3 ) ;
                printf ( " %s", "" ) ;
                printf("\n\n") ;
                printf ( " %s", "The traversal of the tree leaf by leaf from the right to the left : \n\n" ) ;
                printf ( " %s", "" ) ;
                Print_list ( & Head4 ) ;
                printf("\n\n") ;
                printf ( " %s", "" ) ;
            
              N  =  N + 1 ;

            };
          break;

          case 2 :
              system("cls");
              printf("You selected: The branch by branch animation from the left to the right\n\n");
              branch_by_branch_LR();
              BB_LR_animate(root);
              initialize_visited(root);
              gotoxy(0, 30);
          break;
          case 3 :
              system("cls");
              printf("You selected: The branch by branch animation from the right to the left\n\n");
              branch_by_branch_RL();
              printf("\n\n\n");
              BB_RL_animate(root);
              initialize_visited(root);
              gotoxy(0, 30);
          break;
          case 4 :
              system("cls");
              printf("You selected: The leaf by leaf animation from the right to the left\n\n");
              leaf_by_leaf_LR();
              printf("\n\n\n");
              LL_LR_animate(root);
              initialize_visited(root);
              gotoxy(0, 30);
          break;
          case 5 :
              system("cls");
              printf("You selected: The leaf by leaf animation from the right to the left\n\n");
              leaf_by_leaf_RL();
              LL_RL_animate(root);
              initialize_visited(root);
              gotoxy(0, 30);
          break;
          case 6:
          do{
              system("cls");
              printf("You selected: Creating you own BST example : ");
              printf("\n");
              create_BST();
              printf ("1. Binary search tree construction \n");
              printf ("   ----------------------- \n\n");
              printf ("1. Random construction\n");
              printf ("2. Manual construction\n\n");
              printf (">  Your choice : ");
              scanf ("%d",&choice2);
              switch(choice2){
                  case 1:
                      system("cls");
                      printf("\n");
                      printf("1. Binary search tree construction \n");
                      printf("------------------------------- \n");
                      printf("1. Random construction\n\n");
                      printf("Give the number of Nodes : ");
                      scanf("%d",&n);
                      createBTreeRandom(&root,n);
                      printf("\n");
                      printf("The tree is constructed !! :)\n");
                      stop2 = true;
                  break;
                  case 2:
                      system("cls");
                      printf("\n");
                      printf("1. Binary search tree construction \n");
                      printf("---------------------------------- \n");
                      printf("2. manually construction\n\n");
                      printf("Give the number of Nodes : ");
                      scanf ("%d",&n);
                      printf("\n");
                      createBTree(&root,n);
                      printf("\n");
                      printf("The tree is constructed !! :)\n");
                      stop2 = true;
                  break;
              }
            }while(!stop2);
            printf ("\n\n> Press ENTER to continue ...\n");
            fflush(stdin);
            getchar();
          break ;


        case 7:
          system("cls");
          printf("You selected: Creating you own BST example\n");
          printf("NOTICE: There are two modes of display : \n");
          printf("- Complex vertical display if tree height is <= 6 \n");
          printf("- Simple horizontal display if tree height is > 6 \n");
          printf("\n");

          if(getHeight(root) > 6){
            printf("The root is : %d\n", Struct1_Tib(Info_ATib(root)));
            printf("The tree is in this direction  --> \n\n");
            printTree_V3(root,0);
          }
          if(getHeight(root) <= 6){
            int h = getHeight(root);
            visualizeTreeWithHeight(root, 70, 15, h);
            gotoxy(0, 30);
          }
          break;
        case 0:
            printf("EXITING THE PROGRAM...\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("****************************************************************");
            printf("\n");
            printf("\n");
        break;

        default:

          printf("Invalid choice. Please choose a valid option.\n");
          break;

        }

        printf("\n");
        printf("Do you want to continue? (Press 'Y' to continue): ");
        char continueChoice;
        scanf(" %c", &continueChoice);
        system("cls");
        if (continueChoice != 'Y' && continueChoice !='y' ) {
            key = 0;
        }
        clearScreen();
  }while (key != 0);

  GoodBye();
  return 0;
}
