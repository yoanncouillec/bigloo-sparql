/*===========================================================================*/
/*   (Misc/make_lib.scm)                                                     */
/*   Bigloo (3.9a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Thu Oct 25 08:26:27 CEST 2012       */
/*===========================================================================*/
/* COMPILATION: (bigloo -O3 -unsafe -safee -mkaddlib -cc gcc -fsharing -q -rm -unsafev Misc/make_lib.scm -o Obj/make_lib_u.o -c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_requirezd2initializa7ationz75zzmake_libz00 = BUNSPEC;
extern obj_t BGl_imdbz00zzsparqlz00;
BGL_IMPORT obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_dbpediaz00zzsparqlz00;
static obj_t BGl_toplevelzd2initzd2zzmake_libz00();
static obj_t BGl_genericzd2initzd2zzmake_libz00();
extern obj_t BGl_bbcz00zzsparqlz00;
static obj_t BGl_objectzd2initzd2zzmake_libz00();
static obj_t BGl_evalzd2initzd2zzmake_libz00();
BGL_IMPORT obj_t bstring_to_symbol(obj_t);
extern obj_t BGl_dbtunez00zzsparqlz00;
static obj_t BGl_appendzd221010zd2zzmake_libz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zzmake_libz00();
extern obj_t BGl_prefixsz00zzsparqlz00;
extern obj_t BGl_bioz00zzsparqlz00;
BGL_IMPORT obj_t BGl_definezd2primopzd2refz12z12zz__evenvz00(obj_t, obj_t);
static obj_t BGl_symbol1101z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1103z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1105z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1107z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1109z00zzmake_libz00 = BUNSPEC;
extern obj_t BGl_eeaz00zzsparqlz00;
static obj_t BGl_symbol1111z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1113z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1115z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1117z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1119z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1121z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1123z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1125z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1127z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1129z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1131z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1133z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1135z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1137z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1139z00zzmake_libz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmake_libz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zzsparqlz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_symbol1141z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1143z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1145z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1087z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1089z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zzmake_libz00();
static obj_t BGl_libraryzd2moduleszd2initz00zzmake_libz00();
static obj_t BGl_symbol1091z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1093z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1095z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1097z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1099z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_importedzd2moduleszd2initz00zzmake_libz00();
extern obj_t BGl_lodacz00zzsparqlz00;
BGL_IMPORT obj_t BGl_definezd2primopz12zc0zz__evenvz00(obj_t, obj_t);
static obj_t BGl_z62appendzd221010zb0zzmake_libz00(obj_t, obj_t, obj_t);
extern obj_t BGl_gouvzd2ukzd2zzsparqlz00;
static obj_t *__cnst;


extern obj_t BGl_entityzd2envzd2zzsparqlz00;
DEFINE_STRING( BGl_string1084z00zzmake_libz00, BgL_bgl_string1084za700za7za7m1150za7, "&append-21010", 13 );
DEFINE_STRING( BGl_string1085z00zzmake_libz00, BgL_bgl_string1085za700za7za7m1151za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1086z00zzmake_libz00, BgL_bgl_string1086za700za7za7m1152za7, "make_lib", 8 );
DEFINE_STRING( BGl_string1088z00zzmake_libz00, BgL_bgl_string1088za700za7za7m1153za7, "select", 6 );
extern obj_t BGl_childrenzd2selectzd2envz00zzsparqlz00;
DEFINE_STRING( BGl_string1090z00zzmake_libz00, BgL_bgl_string1090za700za7za7m1154za7, "select-nt", 9 );
DEFINE_STRING( BGl_string1092z00zzmake_libz00, BgL_bgl_string1092za700za7za7m1155za7, "gouv-uk", 7 );
DEFINE_STRING( BGl_string1094z00zzmake_libz00, BgL_bgl_string1094za700za7za7m1156za7, "pipe", 4 );
DEFINE_STRING( BGl_string1096z00zzmake_libz00, BgL_bgl_string1096za700za7za7m1157za7, "construct", 9 );
DEFINE_STRING( BGl_string1098z00zzmake_libz00, BgL_bgl_string1098za700za7za7m1158za7, "generate-ontology", 17 );
extern obj_t BGl_teezd2envzd2zzsparqlz00;
extern obj_t BGl_generatezd2ontologyzd2envz00zzsparqlz00;
extern obj_t BGl_predicatzd2objectzd2envz00zzsparqlz00;
extern obj_t BGl_treezd2ze3stringzd2envze3zzsparqlz00;
extern obj_t BGl_constructzd2dbpediazd2envz00zzsparqlz00;
extern obj_t BGl_sparqlzd2queryzd2envz00zzsparqlz00;
DEFINE_STATIC_BGL_PROCEDURE( BGl_appendzd221010zd2envz00zzmake_libz00, BgL_bgl_za762appendza7d221011159z00, BGl_z62appendzd221010zb0zzmake_libz00, 0L, BUNSPEC, 2 );
extern obj_t BGl_constructzd2envzd2zzsparqlz00;
extern obj_t BGl_mlistzd2envzd2zzsparqlz00;
extern obj_t BGl_pipezd2envzd2zzsparqlz00;
extern obj_t BGl_childrenzd2constructzd2envz00zzsparqlz00;
extern obj_t BGl_instancezd2ontologyzd2envz00zzsparqlz00;
extern obj_t BGl_pipezd2mapzd2envz00zzsparqlz00;
extern obj_t BGl_foldzd2envzd2zzsparqlz00;
extern obj_t BGl_selectzd2ntzd2envz00zzsparqlz00;
extern obj_t BGl_constructzd2ntzd2envz00zzsparqlz00;
DEFINE_STRING( BGl_string1100z00zzmake_libz00, BgL_bgl_string1100za700za7za7m1160za7, "subject-predicat", 16 );
DEFINE_STRING( BGl_string1102z00zzmake_libz00, BgL_bgl_string1102za700za7za7m1161za7, "lodac", 5 );
DEFINE_STRING( BGl_string1104z00zzmake_libz00, BgL_bgl_string1104za700za7za7m1162za7, "pipe-map", 8 );
DEFINE_STRING( BGl_string1106z00zzmake_libz00, BgL_bgl_string1106za700za7za7m1163za7, "sparql-query", 12 );
extern obj_t BGl_subjectzd2predicatzd2envz00zzsparqlz00;
DEFINE_STRING( BGl_string1108z00zzmake_libz00, BgL_bgl_string1108za700za7za7m1164za7, "eea", 3 );
DEFINE_STRING( BGl_string1110z00zzmake_libz00, BgL_bgl_string1110za700za7za7m1165za7, "mlist", 5 );
DEFINE_STRING( BGl_string1112z00zzmake_libz00, BgL_bgl_string1112za700za7za7m1166za7, "from", 4 );
DEFINE_STRING( BGl_string1114z00zzmake_libz00, BgL_bgl_string1114za700za7za7m1167za7, "tee", 3 );
DEFINE_STRING( BGl_string1116z00zzmake_libz00, BgL_bgl_string1116za700za7za7m1168za7, "entity", 6 );
DEFINE_STRING( BGl_string1118z00zzmake_libz00, BgL_bgl_string1118za700za7za7m1169za7, "bio", 3 );
extern obj_t BGl_selectzd2envzd2zzsparqlz00;
DEFINE_STRING( BGl_string1120z00zzmake_libz00, BgL_bgl_string1120za700za7za7m1170za7, "prefixs", 7 );
DEFINE_STRING( BGl_string1122z00zzmake_libz00, BgL_bgl_string1122za700za7za7m1171za7, "append-21010", 12 );
DEFINE_STRING( BGl_string1124z00zzmake_libz00, BgL_bgl_string1124za700za7za7m1172za7, "children-select", 15 );
DEFINE_STRING( BGl_string1126z00zzmake_libz00, BgL_bgl_string1126za700za7za7m1173za7, "dbtune", 6 );
DEFINE_STRING( BGl_string1128z00zzmake_libz00, BgL_bgl_string1128za700za7za7m1174za7, "children-construct", 18 );
extern obj_t BGl_fromzd2envzd2zzsparqlz00;
DEFINE_STRING( BGl_string1130z00zzmake_libz00, BgL_bgl_string1130za700za7za7m1175za7, "construct-nt", 12 );
DEFINE_STRING( BGl_string1132z00zzmake_libz00, BgL_bgl_string1132za700za7za7m1176za7, "predicat-object", 15 );
DEFINE_STRING( BGl_string1134z00zzmake_libz00, BgL_bgl_string1134za700za7za7m1177za7, "bbc", 3 );
DEFINE_STRING( BGl_string1136z00zzmake_libz00, BgL_bgl_string1136za700za7za7m1178za7, "fold", 4 );
DEFINE_STRING( BGl_string1138z00zzmake_libz00, BgL_bgl_string1138za700za7za7m1179za7, "instance-ontology", 17 );
DEFINE_STRING( BGl_string1140z00zzmake_libz00, BgL_bgl_string1140za700za7za7m1180za7, "dbpedia", 7 );
DEFINE_STRING( BGl_string1142z00zzmake_libz00, BgL_bgl_string1142za700za7za7m1181za7, "tree->string", 12 );
DEFINE_STRING( BGl_string1144z00zzmake_libz00, BgL_bgl_string1144za700za7za7m1182za7, "imdb", 4 );
DEFINE_STRING( BGl_string1146z00zzmake_libz00, BgL_bgl_string1146za700za7za7m1183za7, "construct-dbpedia", 17 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmake_libz00(long BgL_checksumz00_109, char * BgL_fromz00_110)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zzmake_libz00))
{ 
BGl_requirezd2initializa7ationz75zzmake_libz00 = 
BBOOL(((bool_t)0)); 
BGl_libraryzd2moduleszd2initz00zzmake_libz00(); 
BGl_cnstzd2initzd2zzmake_libz00(); 
BGl_importedzd2moduleszd2initz00zzmake_libz00(); 
BGl_evalzd2initzd2zzmake_libz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* library-modules-init */
obj_t BGl_libraryzd2moduleszd2initz00zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)0), "make_lib"); 
BGl_modulezd2initializa7ationz75zz__evenvz00(((long)0), "make_lib"); 
BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)0), "make_lib"); 
return BUNSPEC;} 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
BGl_symbol1087z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1088z00zzmake_libz00); 
BGl_symbol1089z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1090z00zzmake_libz00); 
BGl_symbol1091z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1092z00zzmake_libz00); 
BGl_symbol1093z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1094z00zzmake_libz00); 
BGl_symbol1095z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1096z00zzmake_libz00); 
BGl_symbol1097z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1098z00zzmake_libz00); 
BGl_symbol1099z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1100z00zzmake_libz00); 
BGl_symbol1101z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1102z00zzmake_libz00); 
BGl_symbol1103z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1104z00zzmake_libz00); 
BGl_symbol1105z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1106z00zzmake_libz00); 
BGl_symbol1107z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1108z00zzmake_libz00); 
BGl_symbol1109z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1110z00zzmake_libz00); 
BGl_symbol1111z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1112z00zzmake_libz00); 
BGl_symbol1113z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1114z00zzmake_libz00); 
BGl_symbol1115z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1116z00zzmake_libz00); 
BGl_symbol1117z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1118z00zzmake_libz00); 
BGl_symbol1119z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1120z00zzmake_libz00); 
BGl_symbol1121z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1122z00zzmake_libz00); 
BGl_symbol1123z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1124z00zzmake_libz00); 
BGl_symbol1125z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1126z00zzmake_libz00); 
BGl_symbol1127z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1128z00zzmake_libz00); 
BGl_symbol1129z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1130z00zzmake_libz00); 
BGl_symbol1131z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1132z00zzmake_libz00); 
BGl_symbol1133z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1134z00zzmake_libz00); 
BGl_symbol1135z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1136z00zzmake_libz00); 
BGl_symbol1137z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1138z00zzmake_libz00); 
BGl_symbol1139z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1140z00zzmake_libz00); 
BGl_symbol1141z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1142z00zzmake_libz00); 
BGl_symbol1143z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1144z00zzmake_libz00); 
return ( 
BGl_symbol1145z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1146z00zzmake_libz00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
return BUNSPEC;} 
}



/* append-21010 */
obj_t BGl_appendzd221010zd2zzmake_libz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
{ AN_OBJECT;
{ 
{ 
obj_t BgL_headz00_3;
BgL_headz00_3 = 
MAKE_PAIR(BNIL, BgL_l2z00_2); 
{ 
obj_t BgL_prevz00_4;obj_t BgL_tailz00_5;
BgL_prevz00_4 = BgL_headz00_3; 
BgL_tailz00_5 = BgL_l1z00_1; 
BgL_loopz00_6:
if(
PAIRP(BgL_tailz00_5))
{ 
obj_t BgL_newzd2prevzd2_8;
BgL_newzd2prevzd2_8 = 
MAKE_PAIR(
CAR(BgL_tailz00_5), BgL_l2z00_2); 
SET_CDR(BgL_prevz00_4, BgL_newzd2prevzd2_8); 
{ 
obj_t BgL_tailz00_158;obj_t BgL_prevz00_157;
BgL_prevz00_157 = BgL_newzd2prevzd2_8; 
BgL_tailz00_158 = 
CDR(BgL_tailz00_5); 
BgL_tailz00_5 = BgL_tailz00_158; 
BgL_prevz00_4 = BgL_prevz00_157; 
goto BgL_loopz00_6;} }  else 
{ BNIL; } 
return 
CDR(BgL_headz00_3);} } } 
}



/* &append-21010 */
obj_t BGl_z62appendzd221010zb0zzmake_libz00(obj_t BgL_envz00_18, obj_t BgL_l1z00_19, obj_t BgL_l2z00_20)
{ AN_OBJECT;
{ 
{ 
obj_t BgL_auxz00_161;
{ 
bool_t BgL_testz00_162;
if(
PAIRP(BgL_l1z00_19))
{ /* Ieee/pairlist.scm 227 */
BgL_testz00_162 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 227 */
BgL_testz00_162 = 
NULLP(BgL_l1z00_19)
; } 
if(BgL_testz00_162)
{ 
BgL_auxz00_161 = BgL_l1z00_19
; }  else 
{ 
obj_t BgL_auxz00_166;
BgL_auxz00_166 = 
BGl_typezd2errorzd2zz__errorz00(BFALSE, BFALSE, BGl_string1084z00zzmake_libz00, BGl_string1085z00zzmake_libz00, BgL_l1z00_19); 
FAILURE(BgL_auxz00_166,BFALSE,BFALSE);} } 
return 
BGl_appendzd221010zd2zzmake_libz00(BgL_auxz00_161, BgL_l2z00_20);} } 
}



/* object-init */
obj_t BGl_objectzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
return BUNSPEC;} 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
return 
BGl_modulezd2initializa7ationz75zzsparqlz00(((long)93007821), 
BSTRING_TO_STRING(BGl_string1086z00zzmake_libz00));} 
}



/* eval-init */
obj_t BGl_evalzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1087z00zzmake_libz00, BGl_selectzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1089z00zzmake_libz00, BGl_selectzd2ntzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1091z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_gouvzd2ukzd2zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1093z00zzmake_libz00, BGl_pipezd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1095z00zzmake_libz00, BGl_constructzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1097z00zzmake_libz00, BGl_generatezd2ontologyzd2envz00zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1099z00zzmake_libz00, BGl_subjectzd2predicatzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1101z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_lodacz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1103z00zzmake_libz00, BGl_pipezd2mapzd2envz00zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1105z00zzmake_libz00, BGl_sparqlzd2queryzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1107z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_eeaz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1109z00zzmake_libz00, BGl_mlistzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1111z00zzmake_libz00, BGl_fromzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1113z00zzmake_libz00, BGl_teezd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1115z00zzmake_libz00, BGl_entityzd2envzd2zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1117z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_bioz00zzsparqlz00))); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1119z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_prefixsz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1121z00zzmake_libz00, BGl_appendzd221010zd2envz00zzmake_libz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1123z00zzmake_libz00, BGl_childrenzd2selectzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1125z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_dbtunez00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1127z00zzmake_libz00, BGl_childrenzd2constructzd2envz00zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1129z00zzmake_libz00, BGl_constructzd2ntzd2envz00zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1131z00zzmake_libz00, BGl_predicatzd2objectzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1133z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_bbcz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1135z00zzmake_libz00, BGl_foldzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1137z00zzmake_libz00, BGl_instancezd2ontologyzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1139z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_dbpediaz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1141z00zzmake_libz00, BGl_treezd2ze3stringzd2envze3zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1143z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_imdbz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1145z00zzmake_libz00, BGl_constructzd2dbpediazd2envz00zzsparqlz00); 
return BUNSPEC;} 
}

#ifdef __cplusplus
}
#endif
