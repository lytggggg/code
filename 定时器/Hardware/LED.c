??# i n c l u d e   " s t m 3 2 f 1 0 x . h "                                     / /   D e v i c e   h e a d e r  
  
 v o i d   L E D _ I n i t ( v o i d )  
 {  
 	 R C C _ A P B 2 P e r i p h C l o c k C m d ( R C C _ A P B 2 P e r i p h _ G P I O A ,   E N A B L E ) ;  
 	  
 	 G P I O _ I n i t T y p e D e f   G P I O _ I n i t S t r u c t u r e ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ M o d e   =   G P I O _ M o d e _ O u t _ P P ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ P i n   =   G P I O _ P i n _ 1   |   G P I O _ P i n _ 2 ;  
 	 G P I O _ I n i t S t r u c t u r e . G P I O _ S p e e d   =   G P I O _ S p e e d _ 5 0 M H z ;  
 	 G P I O _ I n i t ( G P I O A ,   & G P I O _ I n i t S t r u c t u r e ) ;  
 	  
 	 G P I O _ S e t B i t s ( G P I O A ,   G P I O _ P i n _ 1   |   G P I O _ P i n _ 2 ) ;  
 }  
  
 v o i d   L E D 1 _ O N ( v o i d )  
 {  
 	 G P I O _ R e s e t B i t s ( G P I O A ,   G P I O _ P i n _ 1 ) ;  
 }  
  
 v o i d   L E D 1 _ O F F ( v o i d )  
 {  
 	 G P I O _ S e t B i t s ( G P I O A ,   G P I O _ P i n _ 1 ) ;  
 }  
  
 v o i d   L E D 1 _ T u r n ( v o i d )  
 {  
 	 i f   ( G P I O _ R e a d O u t p u t D a t a B i t ( G P I O A ,   G P I O _ P i n _ 1 )   = =   0 )  
 	 {  
 	 	 G P I O _ S e t B i t s ( G P I O A ,   G P I O _ P i n _ 1 ) ;  
 	 }  
 	 e l s e  
 	 {  
 	 	 G P I O _ R e s e t B i t s ( G P I O A ,   G P I O _ P i n _ 1 ) ;  
 	 }  
 }  
  
 v o i d   L E D 2 _ O N ( v o i d )  
 {  
 	 G P I O _ R e s e t B i t s ( G P I O A ,   G P I O _ P i n _ 2 ) ;  
 }  
  
 v o i d   L E D 2 _ O F F ( v o i d )  
 {  
 	 G P I O _ S e t B i t s ( G P I O A ,   G P I O _ P i n _ 2 ) ;  
 }  
  
 v o i d   L E D 2 _ T u r n ( v o i d )  
 {  
 	 i f   ( G P I O _ R e a d O u t p u t D a t a B i t ( G P I O A ,   G P I O _ P i n _ 2 )   = =   0 )  
 	 {  
 	 	 G P I O _ S e t B i t s ( G P I O A ,   G P I O _ P i n _ 2 ) ;  
 	 }  
 	 e l s e  
 	 {  
 	 	 G P I O _ R e s e t B i t s ( G P I O A ,   G P I O _ P i n _ 2 ) ;  
 	 }  
 }  