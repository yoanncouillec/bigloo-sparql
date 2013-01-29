/*===========================================================================*/
/*   (Misc/make_lib.scm)                                                     */
/*   Bigloo (3.9a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Thu Oct 25 08:26:27 CEST 2012       */
/*===========================================================================*/
/* COMPILATION: (bigloo -O3 -mkaddlib -g -cg -cc gcc -fsharing -q -rm -unsafev Misc/make_lib.scm -o Obj/make_lib.o -c)*/
/* GC selection */
#define THE_GC BOEHM_GC

/* debug mode */
#define BIGLOO_DEBUG 1

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_requirezd2initializa7ationz75zzmake_libz00 = BUNSPEC;
extern obj_t BGl_imdbz00zzsparqlz00;
BGL_IMPORT obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_dbpediaz00zzsparqlz00;
static obj_t BGl_list1127z00zzmake_libz00 = BUNSPEC;
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
extern obj_t BGl_eeaz00zzsparqlz00;
static obj_t BGl_symbol1200z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1202z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1204z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1125z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1128z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1131z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1135z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1137z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1139z00zzmake_libz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmake_libz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zzsparqlz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_symbol1141z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1144z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1146z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1148z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1150z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1152z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1154z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1156z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1158z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1160z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1162z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1164z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1166z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1168z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zzmake_libz00();
static obj_t BGl_libraryzd2moduleszd2initz00zzmake_libz00();
static obj_t BGl_symbol1170z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1172z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1174z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1176z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1178z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_importedzd2moduleszd2initz00zzmake_libz00();
static obj_t BGl_symbol1180z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1182z00zzmake_libz00 = BUNSPEC;
extern obj_t BGl_lodacz00zzsparqlz00;
static obj_t BGl_symbol1184z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1186z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1188z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1190z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1192z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1194z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1196z00zzmake_libz00 = BUNSPEC;
static obj_t BGl_symbol1198z00zzmake_libz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_definezd2primopz12zc0zz__evenvz00(obj_t, obj_t);
static obj_t BGl_z62appendzd221010zb0zzmake_libz00(obj_t, obj_t, obj_t);
extern obj_t BGl_gouvzd2ukzd2zzsparqlz00;
static obj_t *__cnst;


DEFINE_STRING( BGl_string1151z00zzmake_libz00, BgL_bgl_string1151za700za7za7m1216za7, "gouv-uk", 7 );
DEFINE_STRING( BGl_string1153z00zzmake_libz00, BgL_bgl_string1153za700za7za7m1217za7, "pipe", 4 );
DEFINE_STRING( BGl_string1155z00zzmake_libz00, BgL_bgl_string1155za700za7za7m1218za7, "construct", 9 );
DEFINE_STRING( BGl_string1157z00zzmake_libz00, BgL_bgl_string1157za700za7za7m1219za7, "generate-ontology", 17 );
DEFINE_STRING( BGl_string1159z00zzmake_libz00, BgL_bgl_string1159za700za7za7m1220za7, "subject-predicat", 16 );
extern obj_t BGl_entityzd2envzd2zzsparqlz00;
DEFINE_STRING( BGl_string1161z00zzmake_libz00, BgL_bgl_string1161za700za7za7m1221za7, "lodac", 5 );
DEFINE_STRING( BGl_string1163z00zzmake_libz00, BgL_bgl_string1163za700za7za7m1222za7, "pipe-map", 8 );
DEFINE_STRING( BGl_string1165z00zzmake_libz00, BgL_bgl_string1165za700za7za7m1223za7, "sparql-query", 12 );
DEFINE_STRING( BGl_string1167z00zzmake_libz00, BgL_bgl_string1167za700za7za7m1224za7, "eea", 3 );
DEFINE_STRING( BGl_string1169z00zzmake_libz00, BgL_bgl_string1169za700za7za7m1225za7, "mlist", 5 );
extern obj_t BGl_childrenzd2selectzd2envz00zzsparqlz00;
DEFINE_STRING( BGl_string1171z00zzmake_libz00, BgL_bgl_string1171za700za7za7m1226za7, "from", 4 );
DEFINE_STRING( BGl_string1173z00zzmake_libz00, BgL_bgl_string1173za700za7za7m1227za7, "tee", 3 );
DEFINE_STRING( BGl_string1175z00zzmake_libz00, BgL_bgl_string1175za700za7za7m1228za7, "entity", 6 );
DEFINE_STRING( BGl_string1177z00zzmake_libz00, BgL_bgl_string1177za700za7za7m1229za7, "bio", 3 );
DEFINE_STRING( BGl_string1179z00zzmake_libz00, BgL_bgl_string1179za700za7za7m1230za7, "prefixs", 7 );
DEFINE_STRING( BGl_string1181z00zzmake_libz00, BgL_bgl_string1181za700za7za7m1231za7, "append-21010", 12 );
DEFINE_STRING( BGl_string1183z00zzmake_libz00, BgL_bgl_string1183za700za7za7m1232za7, "children-select", 15 );
DEFINE_STRING( BGl_string1185z00zzmake_libz00, BgL_bgl_string1185za700za7za7m1233za7, "dbtune", 6 );
DEFINE_STRING( BGl_string1187z00zzmake_libz00, BgL_bgl_string1187za700za7za7m1234za7, "children-construct", 18 );
DEFINE_STRING( BGl_string1189z00zzmake_libz00, BgL_bgl_string1189za700za7za7m1235za7, "construct-nt", 12 );
DEFINE_STRING( BGl_string1191z00zzmake_libz00, BgL_bgl_string1191za700za7za7m1236za7, "predicat-object", 15 );
DEFINE_STRING( BGl_string1193z00zzmake_libz00, BgL_bgl_string1193za700za7za7m1237za7, "bbc", 3 );
DEFINE_STRING( BGl_string1195z00zzmake_libz00, BgL_bgl_string1195za700za7za7m1238za7, "fold", 4 );
DEFINE_STRING( BGl_string1197z00zzmake_libz00, BgL_bgl_string1197za700za7za7m1239za7, "instance-ontology", 17 );
DEFINE_STRING( BGl_string1199z00zzmake_libz00, BgL_bgl_string1199za700za7za7m1240za7, "dbpedia", 7 );
extern obj_t BGl_teezd2envzd2zzsparqlz00;
extern obj_t BGl_generatezd2ontologyzd2envz00zzsparqlz00;
extern obj_t BGl_predicatzd2objectzd2envz00zzsparqlz00;
extern obj_t BGl_treezd2ze3stringzd2envze3zzsparqlz00;
extern obj_t BGl_constructzd2dbpediazd2envz00zzsparqlz00;
extern obj_t BGl_sparqlzd2queryzd2envz00zzsparqlz00;
DEFINE_STATIC_BGL_PROCEDURE( BGl_appendzd221010zd2envz00zzmake_libz00, BgL_bgl_za762appendza7d221011241z00, BGl_z62appendzd221010zb0zzmake_libz00, 0L, BUNSPEC, 2 );
extern obj_t BGl_constructzd2envzd2zzsparqlz00;
extern obj_t BGl_mlistzd2envzd2zzsparqlz00;
extern obj_t BGl_pipezd2envzd2zzsparqlz00;
extern obj_t BGl_childrenzd2constructzd2envz00zzsparqlz00;
extern obj_t BGl_instancezd2ontologyzd2envz00zzsparqlz00;
extern obj_t BGl_pipezd2mapzd2envz00zzsparqlz00;
extern obj_t BGl_foldzd2envzd2zzsparqlz00;
extern obj_t BGl_selectzd2ntzd2envz00zzsparqlz00;
extern obj_t BGl_constructzd2ntzd2envz00zzsparqlz00;
extern obj_t BGl_subjectzd2predicatzd2envz00zzsparqlz00;
extern obj_t BGl_selectzd2envzd2zzsparqlz00;
DEFINE_STRING( BGl_string1201z00zzmake_libz00, BgL_bgl_string1201za700za7za7m1242za7, "tree->string", 12 );
DEFINE_STRING( BGl_string1203z00zzmake_libz00, BgL_bgl_string1203za700za7za7m1243za7, "imdb", 4 );
DEFINE_STRING( BGl_string1205z00zzmake_libz00, BgL_bgl_string1205za700za7za7m1244za7, "construct-dbpedia", 17 );
DEFINE_STRING( BGl_string1126z00zzmake_libz00, BgL_bgl_string1126za700za7za7m1245za7, "%toplevel@make_lib", 18 );
DEFINE_STRING( BGl_string1129z00zzmake_libz00, BgL_bgl_string1129za700za7za7m1246za7, "at", 2 );
extern obj_t BGl_fromzd2envzd2zzsparqlz00;
DEFINE_STRING( BGl_string1130z00zzmake_libz00, BgL_bgl_string1130za700za7za7m1247za7, "/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Misc/make_lib.scm", 72 );
DEFINE_STRING( BGl_string1132z00zzmake_libz00, BgL_bgl_string1132za700za7za7m1248za7, "append-21010@make_lib", 21 );
DEFINE_STRING( BGl_string1133z00zzmake_libz00, BgL_bgl_string1133za700za7za7m1249za7, "&append-21010", 13 );
DEFINE_STRING( BGl_string1134z00zzmake_libz00, BgL_bgl_string1134za700za7za7m1250za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string1136z00zzmake_libz00, BgL_bgl_string1136za700za7za7m1251za7, "object-init@make_lib", 20 );
DEFINE_STRING( BGl_string1138z00zzmake_libz00, BgL_bgl_string1138za700za7za7m1252za7, "generic-init@make_lib", 21 );
DEFINE_STRING( BGl_string1140z00zzmake_libz00, BgL_bgl_string1140za700za7za7m1253za7, "method-init@make_lib", 20 );
DEFINE_STRING( BGl_string1142z00zzmake_libz00, BgL_bgl_string1142za700za7za7m1254za7, "%import@make_lib", 16 );
DEFINE_STRING( BGl_string1143z00zzmake_libz00, BgL_bgl_string1143za700za7za7m1255za7, "make_lib", 8 );
DEFINE_STRING( BGl_string1145z00zzmake_libz00, BgL_bgl_string1145za700za7za7m1256za7, "eval-init@make_lib", 18 );
DEFINE_STRING( BGl_string1147z00zzmake_libz00, BgL_bgl_string1147za700za7za7m1257za7, "select", 6 );
DEFINE_STRING( BGl_string1149z00zzmake_libz00, BgL_bgl_string1149za700za7za7m1258za7, "select-nt", 9 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmake_libz00(long BgL_checksumz00_144, char * BgL_fromz00_145)
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
BGl_objectzd2initzd2zzmake_libz00(); 
BGl_genericzd2initzd2zzmake_libz00(); 
BGl_methodzd2initzd2zzmake_libz00(); 
BGl_evalzd2initzd2zzmake_libz00(); 
BGl_toplevelzd2initzd2zzmake_libz00(); 
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
BGl_modulezd2initializa7ationz75zz__threadz00(((long)0), "make_lib"); 
BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)0), "make_lib"); 
return BUNSPEC;} 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
BGl_symbol1125z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1126z00zzmake_libz00); 
BGl_symbol1128z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1129z00zzmake_libz00); 
BGl_list1127z00zzmake_libz00 = 
MAKE_PAIR(BGl_symbol1128z00zzmake_libz00, 
MAKE_PAIR(BGl_string1130z00zzmake_libz00, 
MAKE_PAIR(
BINT(((long)0)), BNIL))); 
BGl_symbol1131z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1132z00zzmake_libz00); 
BGl_symbol1135z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1136z00zzmake_libz00); 
BGl_symbol1137z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1138z00zzmake_libz00); 
BGl_symbol1139z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1140z00zzmake_libz00); 
BGl_symbol1141z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1142z00zzmake_libz00); 
BGl_symbol1144z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1145z00zzmake_libz00); 
BGl_symbol1146z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1147z00zzmake_libz00); 
BGl_symbol1148z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1149z00zzmake_libz00); 
BGl_symbol1150z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1151z00zzmake_libz00); 
BGl_symbol1152z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1153z00zzmake_libz00); 
BGl_symbol1154z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1155z00zzmake_libz00); 
BGl_symbol1156z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1157z00zzmake_libz00); 
BGl_symbol1158z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1159z00zzmake_libz00); 
BGl_symbol1160z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1161z00zzmake_libz00); 
BGl_symbol1162z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1163z00zzmake_libz00); 
BGl_symbol1164z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1165z00zzmake_libz00); 
BGl_symbol1166z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1167z00zzmake_libz00); 
BGl_symbol1168z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1169z00zzmake_libz00); 
BGl_symbol1170z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1171z00zzmake_libz00); 
BGl_symbol1172z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1173z00zzmake_libz00); 
BGl_symbol1174z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1175z00zzmake_libz00); 
BGl_symbol1176z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1177z00zzmake_libz00); 
BGl_symbol1178z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1179z00zzmake_libz00); 
BGl_symbol1180z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1181z00zzmake_libz00); 
BGl_symbol1182z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1183z00zzmake_libz00); 
BGl_symbol1184z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1185z00zzmake_libz00); 
BGl_symbol1186z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1187z00zzmake_libz00); 
BGl_symbol1188z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1189z00zzmake_libz00); 
BGl_symbol1190z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1191z00zzmake_libz00); 
BGl_symbol1192z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1193z00zzmake_libz00); 
BGl_symbol1194z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1195z00zzmake_libz00); 
BGl_symbol1196z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1197z00zzmake_libz00); 
BGl_symbol1198z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1199z00zzmake_libz00); 
BGl_symbol1200z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1201z00zzmake_libz00); 
BGl_symbol1202z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1203z00zzmake_libz00); 
return ( 
BGl_symbol1204z00zzmake_libz00 = 
bstring_to_symbol(BGl_string1205z00zzmake_libz00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
{ /* Misc/make_lib.scm 1 */
obj_t BgL_name1016z00_18;obj_t BgL_loc1017z00_19;obj_t BgL_env1018z00_20;
BgL_name1016z00_18 = BGl_symbol1125z00zzmake_libz00; 
BgL_loc1017z00_19 = BGl_list1127z00zzmake_libz00; 
BgL_env1018z00_20 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Misc/make_lib.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env1018z00_20, BgL_name1016z00_18, BgL_loc1017z00_19); 
BGL_ENV_POP_TRACE(BgL_env1018z00_20); 
return BUNSPEC;} } } 
}



/* append-21010 */
obj_t BGl_appendzd221010zd2zzmake_libz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
{ AN_OBJECT;
{ 
{ 
obj_t BgL_name1020z00_22;obj_t BgL_env1022z00_24;
BgL_name1020z00_22 = BGl_symbol1131z00zzmake_libz00; 
BgL_env1022z00_24 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ 

BGL_ENV_PUSH_TRACE(BgL_env1022z00_24, BgL_name1020z00_22, BFALSE); 
{ 
obj_t BgL_aux1019z00_25;
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
obj_t BgL_tailz00_215;obj_t BgL_prevz00_214;
BgL_prevz00_214 = BgL_newzd2prevzd2_8; 
BgL_tailz00_215 = 
CDR(BgL_tailz00_5); 
BgL_tailz00_5 = BgL_tailz00_215; 
BgL_prevz00_4 = BgL_prevz00_214; 
goto BgL_loopz00_6;} }  else 
{ BNIL; } 
BgL_aux1019z00_25 = 
CDR(BgL_headz00_3); } } 
BGL_ENV_POP_TRACE(BgL_env1022z00_24); 
return BgL_aux1019z00_25;} } } } 
}



/* &append-21010 */
obj_t BGl_z62appendzd221010zb0zzmake_libz00(obj_t BgL_envz00_46, obj_t BgL_l1z00_47, obj_t BgL_l2z00_48)
{ AN_OBJECT;
{ 
{ 
obj_t BgL_auxz00_219;
{ 
bool_t BgL_testz00_220;
if(
PAIRP(BgL_l1z00_47))
{ /* Ieee/pairlist.scm 227 */
BgL_testz00_220 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 227 */
BgL_testz00_220 = 
NULLP(BgL_l1z00_47)
; } 
if(BgL_testz00_220)
{ 
BgL_auxz00_219 = BgL_l1z00_47
; }  else 
{ 
obj_t BgL_auxz00_224;
BgL_auxz00_224 = 
BGl_typezd2errorzd2zz__errorz00(BFALSE, BFALSE, BGl_string1133z00zzmake_libz00, BGl_string1134z00zzmake_libz00, BgL_l1z00_47); 
FAILURE(BgL_auxz00_224,BFALSE,BFALSE);} } 
return 
BGl_appendzd221010zd2zzmake_libz00(BgL_auxz00_219, BgL_l2z00_48);} } 
}



/* object-init */
obj_t BGl_objectzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
{ /* Misc/make_lib.scm 1 */
obj_t BgL_name1024z00_26;obj_t BgL_loc1025z00_27;obj_t BgL_env1026z00_28;
BgL_name1024z00_26 = BGl_symbol1135z00zzmake_libz00; 
BgL_loc1025z00_27 = BGl_list1127z00zzmake_libz00; 
BgL_env1026z00_28 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Misc/make_lib.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env1026z00_28, BgL_name1024z00_26, BgL_loc1025z00_27); 
BGL_ENV_POP_TRACE(BgL_env1026z00_28); 
return BUNSPEC;} } } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
{ /* Misc/make_lib.scm 1 */
obj_t BgL_name1028z00_30;obj_t BgL_loc1029z00_31;obj_t BgL_env1030z00_32;
BgL_name1028z00_30 = BGl_symbol1137z00zzmake_libz00; 
BgL_loc1029z00_31 = BGl_list1127z00zzmake_libz00; 
BgL_env1030z00_32 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Misc/make_lib.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env1030z00_32, BgL_name1028z00_30, BgL_loc1029z00_31); 
BGL_ENV_POP_TRACE(BgL_env1030z00_32); 
return BUNSPEC;} } } 
}



/* method-init */
obj_t BGl_methodzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
{ /* Misc/make_lib.scm 1 */
obj_t BgL_name1032z00_34;obj_t BgL_loc1033z00_35;obj_t BgL_env1034z00_36;
BgL_name1032z00_34 = BGl_symbol1139z00zzmake_libz00; 
BgL_loc1033z00_35 = BGl_list1127z00zzmake_libz00; 
BgL_env1034z00_36 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Misc/make_lib.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env1034z00_36, BgL_name1032z00_34, BgL_loc1033z00_35); 
BGL_ENV_POP_TRACE(BgL_env1034z00_36); 
return BUNSPEC;} } } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
{ /* Misc/make_lib.scm 1 */
obj_t BgL_name1036z00_38;obj_t BgL_loc1037z00_39;obj_t BgL_env1038z00_40;
BgL_name1036z00_38 = BGl_symbol1141z00zzmake_libz00; 
BgL_loc1037z00_39 = BGl_list1127z00zzmake_libz00; 
BgL_env1038z00_40 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Misc/make_lib.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env1038z00_40, BgL_name1036z00_38, BgL_loc1037z00_39); 
{ /* Misc/make_lib.scm 1 */
obj_t BgL_aux1035z00_41;
BgL_aux1035z00_41 = 
BGl_modulezd2initializa7ationz75zzsparqlz00(((long)93007821), 
BSTRING_TO_STRING(BGl_string1143z00zzmake_libz00)); 
BGL_ENV_POP_TRACE(BgL_env1038z00_40); 
return BgL_aux1035z00_41;} } } } 
}



/* eval-init */
obj_t BGl_evalzd2initzd2zzmake_libz00()
{ AN_OBJECT;
{ /* Misc/make_lib.scm 1 */
{ /* Misc/make_lib.scm 1 */
obj_t BgL_name1040z00_42;obj_t BgL_loc1041z00_43;obj_t BgL_env1042z00_44;
BgL_name1040z00_42 = BGl_symbol1144z00zzmake_libz00; 
BgL_loc1041z00_43 = BGl_list1127z00zzmake_libz00; 
BgL_env1042z00_44 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Misc/make_lib.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env1042z00_44, BgL_name1040z00_42, BgL_loc1041z00_43); 
{ /* Misc/make_lib.scm 1 */
obj_t BgL_aux1039z00_45;
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1146z00zzmake_libz00, BGl_selectzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1148z00zzmake_libz00, BGl_selectzd2ntzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1150z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_gouvzd2ukzd2zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1152z00zzmake_libz00, BGl_pipezd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1154z00zzmake_libz00, BGl_constructzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1156z00zzmake_libz00, BGl_generatezd2ontologyzd2envz00zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1158z00zzmake_libz00, BGl_subjectzd2predicatzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1160z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_lodacz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1162z00zzmake_libz00, BGl_pipezd2mapzd2envz00zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1164z00zzmake_libz00, BGl_sparqlzd2queryzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1166z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_eeaz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1168z00zzmake_libz00, BGl_mlistzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1170z00zzmake_libz00, BGl_fromzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1172z00zzmake_libz00, BGl_teezd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1174z00zzmake_libz00, BGl_entityzd2envzd2zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1176z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_bioz00zzsparqlz00))); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1178z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_prefixsz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1180z00zzmake_libz00, BGl_appendzd221010zd2envz00zzmake_libz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1182z00zzmake_libz00, BGl_childrenzd2selectzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1184z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_dbtunez00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1186z00zzmake_libz00, BGl_childrenzd2constructzd2envz00zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1188z00zzmake_libz00, BGl_constructzd2ntzd2envz00zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1190z00zzmake_libz00, BGl_predicatzd2objectzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1192z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_bbcz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1194z00zzmake_libz00, BGl_foldzd2envzd2zzsparqlz00); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1196z00zzmake_libz00, BGl_instancezd2ontologyzd2envz00zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1198z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_dbpediaz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1200z00zzmake_libz00, BGl_treezd2ze3stringzd2envze3zzsparqlz00); 
BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol1202z00zzmake_libz00, 
__EVMEANING_ADDRESS(
(BGl_imdbz00zzsparqlz00))); 
BGl_definezd2primopz12zc0zz__evenvz00(BGl_symbol1204z00zzmake_libz00, BGl_constructzd2dbpediazd2envz00zzsparqlz00); 
BgL_aux1039z00_45 = BUNSPEC; 
BGL_ENV_POP_TRACE(BgL_env1042z00_44); 
return BgL_aux1039z00_45;} } } } 
}

#ifdef __cplusplus
}
#endif
