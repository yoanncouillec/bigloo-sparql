/*===========================================================================*/
/*   (Llib/sparql.scm)                                                       */
/*   Bigloo (3.9a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Thu Oct 25 08:26:27 CEST 2012       */
/*===========================================================================*/
/* COMPILATION: (bigloo -O3 -unsafe -safee -mkaddlib -cc gcc -fsharing -q -rm -unsafev Llib/sparql.scm -o Obj/sparql_u.o -c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_constructzd2dbpediazd2zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_sparqlzd2grammarzd2tokensz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol2649z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t, unsigned char, unsigned char);
static obj_t BGl_symbol2653z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_imdbz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62treezd2ze3stringzd2levelz81zzsparqlz00(obj_t, obj_t);
static obj_t BGl_symbol2660z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol2668z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza32037ze3ze1zzsparqlz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_treezd2ze3stringz31zzsparqlz00(obj_t);
BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl_z62sparqlzd2queryzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_dbpediaz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62foldz62zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3anonymousza31422ze3ze1zzsparqlz00(obj_t, obj_t);
static obj_t BGl_z62zc3anonymousza32062ze3ze1zzsparqlz00(obj_t, obj_t);
static obj_t BGl_z62zc3anonymousza32135ze3ze1zzsparqlz00(obj_t, obj_t);
BGL_IMPORT obj_t BGl___makezd2parserzd2zz__lalr_driverz00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_instancezd2ontologyzd2zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2684z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zzsparqlz00();
static obj_t BGl_symbol2687z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza31988ze3ze1zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_foldz00zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2690z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol2694z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol2698z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_IMPORT obj_t bgl_reverse(obj_t);
static obj_t BGl_genericzd2initzd2zzsparqlz00();
BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_bbcz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_objectzd2initzd2zzsparqlz00();
static obj_t BGl_z62generatezd2ontologyzb0zzsparqlz00(obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl_z62selectz62zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_predicatzd2objectzd2zzsparqlz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_constructzd2ntzd2zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62predicatzd2objectzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_childrenzd2constructzd2zzsparqlz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_dbtunez00zzsparqlz00 = BUNSPEC;
static obj_t BGl_selectzd2stringzd2zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_constructzd2stringzd2zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_childrenzd2selectzd2zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_appendzd221010zd2zzsparqlz00(obj_t, obj_t);
static obj_t BGl_z62childrenzd2selectzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62pipezd2mapzb0zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zzsparqlz00();
BGL_IMPORT obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_zc3anonymousza31840ze3z83zzsparqlz00(obj_t);
static obj_t BGl_z62zc3anonymousza31802ze3ze1zzsparqlz00(obj_t);
static obj_t BGl_z62constructzd2dbpediazb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62fromz62zzsparqlz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_prefixsz00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_bioz00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_entityz00zzsparqlz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_teez00zzsparqlz00(obj_t, obj_t, obj_t);
BGL_IMPORT obj_t string_append(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_fromz00zzsparqlz00(obj_t, obj_t);
BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
static obj_t BGl_sparqlzd2grammarzd2rulesz00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mlistz00zzsparqlz00(obj_t);
BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2607z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_eeaz00zzsparqlz00 = BUNSPEC;
BGL_IMPORT bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl_list2608z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62instancezd2ontologyzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list2611z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62treezd2ze3stringz53zzsparqlz00(obj_t, obj_t);
static obj_t BGl_list2700z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2701z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2623z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2705z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2624z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2625z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2630z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2633z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2636z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2639z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsparqlz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__lalr_driverz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__httpz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_IMPORT obj_t socket_close(obj_t);
static obj_t BGl__teez00zzsparqlz00(obj_t, obj_t);
static obj_t BGl_list2640z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2641z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2642z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2643z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2644z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2645z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2646z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2647z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62mlistz62zzsparqlz00(obj_t, obj_t);
static obj_t BGl_list2648z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_list2651z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2652z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2655z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2656z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2657z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl_list2658z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2659z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_sparqlzd2queryzd2zzsparqlz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_pipezd2mapzd2zzsparqlz00(obj_t, obj_t);
static obj_t BGl_list2742z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2662z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2663z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2664z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2665z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2666z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2667z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zzsparqlz00();
static obj_t BGl_libraryzd2moduleszd2initz00zzsparqlz00();
static obj_t BGl_zc3anonymousza32007ze3z83zzsparqlz00(obj_t);
static obj_t BGl_list2670z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2671z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2672z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
static obj_t BGl_list2673z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2674z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2675z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2676z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2677z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2678z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2679z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_vector2622z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_lodacz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62constructz62zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list2681z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2682z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2683z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2686z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2689z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62constructzd2ntzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62entityz62zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_subjectzd2predicatzd2zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2692z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list2693z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_list2696z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza31966ze3z83zzsparqlz00(obj_t);
static obj_t BGl_list2697z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza32012ze3ze1zzsparqlz00(obj_t, obj_t);
static obj_t BGl_z62parserz62zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62pipez62zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62selectzd2ntzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_keyword2708z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62__reducez62zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3anonymousza32021ze3ze1zzsparqlz00(obj_t, obj_t);
static obj_t BGl_keyword2710z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_keyword2713z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_generatezd2ontologyzd2zzsparqlz00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_urlzd2parsezd2zz__urlz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_constructz00zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_urlzd2pathzd2encodez00zz__urlz00(obj_t);
static obj_t BGl_z62zc3anonymousza32006ze3ze1zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_pipez00zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_gouvzd2ukzd2zzsparqlz00 = BUNSPEC;
static obj_t BGl_keyword2721z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza31971ze3ze1zzsparqlz00(obj_t, obj_t);
static obj_t BGl_z62childrenzd2constructzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_IMPORT obj_t bstring_to_keyword(obj_t);
BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
static obj_t BGl_vector2680z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_selectzd2ntzd2zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3anonymousza31965ze3ze1zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_selectz00zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_httpz00zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2626z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol2628z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62subjectzd2predicatzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2631z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol2634z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol2716z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol2718z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol2637z00zzsparqlz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_entityzd2envzd2zzsparqlz00, BgL_bgl_za762entityza762za7za7sp2756z00, BGl_z62entityz62zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_childrenzd2selectzd2envz00zzsparqlz00, BgL_bgl_za762childrenza7d2se2757z00, BGl_z62childrenzd2selectzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_teezd2envzd2zzsparqlz00, BgL_bgl__teeza700za7za7sparqlza72758z00, opt_generic_entry, BGl__teez00zzsparqlz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_generatezd2ontologyzd2envz00zzsparqlz00, BgL_bgl_za762generateza7d2on2759z00, BGl_z62generatezd2ontologyzb0zzsparqlz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_predicatzd2objectzd2envz00zzsparqlz00, BgL_bgl_za762predicatza7d2ob2760z00, BGl_z62predicatzd2objectzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2609z00zzsparqlz00, BgL_bgl_string2609za700za7za7s2761za7, "rdfs:", 5 );
DEFINE_STRING( BGl_string2610z00zzsparqlz00, BgL_bgl_string2610za700za7za7s2762za7, "<http://www.w3.org/2000/01/rdf-schema#>", 39 );
DEFINE_STRING( BGl_string2612z00zzsparqlz00, BgL_bgl_string2612za700za7za7s2763za7, "owl:", 4 );
DEFINE_STRING( BGl_string2613z00zzsparqlz00, BgL_bgl_string2613za700za7za7s2764za7, "<http://www.w3.org/2002/07/owl#>", 32 );
DEFINE_STRING( BGl_string2614z00zzsparqlz00, BgL_bgl_string2614za700za7za7s2765za7, "http://dbpedia.org/sparql", 25 );
DEFINE_STRING( BGl_string2615z00zzsparqlz00, BgL_bgl_string2615za700za7za7s2766za7, "http://data.linkedmdb.org/sparql", 32 );
DEFINE_STRING( BGl_string2616z00zzsparqlz00, BgL_bgl_string2616za700za7za7s2767za7, "http://dbtune.org/musicbrainz/sparql", 36 );
DEFINE_STRING( BGl_string2617z00zzsparqlz00, BgL_bgl_string2617za700za7za7s2768za7, "http://lod.ac/sparql", 20 );
DEFINE_STRING( BGl_string2618z00zzsparqlz00, BgL_bgl_string2618za700za7za7s2769za7, "http://lod.openlinksw.com/sparql", 32 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_treezd2ze3stringzd2envze3zzsparqlz00, BgL_bgl_za762treeza7d2za7e3str2770za7, BGl_z62treezd2ze3stringz53zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2619z00zzsparqlz00, BgL_bgl_string2619za700za7za7s2771za7, "http://www.semantic-systems-biology.org/biogateway/endpoint", 59 );
DEFINE_STRING( BGl_string2620z00zzsparqlz00, BgL_bgl_string2620za700za7za7s2772za7, "http://data.gov.uk/sparql", 25 );
DEFINE_STRING( BGl_string2621z00zzsparqlz00, BgL_bgl_string2621za700za7za7s2773za7, "http://semantic.eea.europa.eu/sparql", 36 );
DEFINE_STRING( BGl_string2703z00zzsparqlz00, BgL_bgl_string2703za700za7za7s2774za7, "regular-grammar", 15 );
DEFINE_STRING( BGl_string2704z00zzsparqlz00, BgL_bgl_string2704za700za7za7s2775za7, "Illegal match", 13 );
DEFINE_STRING( BGl_string2706z00zzsparqlz00, BgL_bgl_string2706za700za7za7s2776za7, "eof", 3 );
DEFINE_STRING( BGl_string2627z00zzsparqlz00, BgL_bgl_string2627za700za7za7s2777za7, "default1000", 11 );
DEFINE_STRING( BGl_string2709z00zzsparqlz00, BgL_bgl_string2709za700za7za7s2778za7, "Host", 4 );
DEFINE_STRING( BGl_string2629z00zzsparqlz00, BgL_bgl_string2629za700za7za7s2779za7, "*error*", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_constructzd2dbpediazd2envz00zzsparqlz00, BgL_bgl_za762constructza7d2d2780z00, va_generic_entry, BGl_z62constructzd2dbpediazb0zzsparqlz00, BUNSPEC, -3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2702z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza72781za7, BGl_z62zc3anonymousza31422ze3ze1zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2711z00zzsparqlz00, BgL_bgl_string2711za700za7za7s2782za7, "Accept", 6 );
DEFINE_STRING( BGl_string2712z00zzsparqlz00, BgL_bgl_string2712za700za7za7s2783za7, "close", 5 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2707z00zzsparqlz00, BgL_bgl_za762parserza762za7za7sp2784z00, BGl_z62parserz62zzsparqlz00, 0L, BUNSPEC, 5 );
DEFINE_STRING( BGl_string2632z00zzsparqlz00, BgL_bgl_string2632za700za7za7s2785za7, "namedNode", 9 );
DEFINE_STRING( BGl_string2714z00zzsparqlz00, BgL_bgl_string2714za700za7za7s2786za7, "Connection", 10 );
DEFINE_STRING( BGl_string2715z00zzsparqlz00, BgL_bgl_string2715za700za7za7s2787za7, "?query=", 7 );
DEFINE_STRING( BGl_string2635z00zzsparqlz00, BgL_bgl_string2635za700za7za7s2788za7, "empty", 5 );
DEFINE_STRING( BGl_string2717z00zzsparqlz00, BgL_bgl_string2717za700za7za7s2789za7, "get", 3 );
DEFINE_STRING( BGl_string2719z00zzsparqlz00, BgL_bgl_string2719za700za7za7s2790za7, "http", 4 );
DEFINE_STRING( BGl_string2638z00zzsparqlz00, BgL_bgl_string2638za700za7za7s2791za7, "uri", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sparqlzd2queryzd2envz00zzsparqlz00, BgL_bgl_za762sparqlza7d2quer2792z00, BGl_z62sparqlzd2queryzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2720z00zzsparqlz00, BgL_bgl_string2720za700za7za7s2793za7, "HTTP/1.1", 8 );
DEFINE_STRING( BGl_string2722z00zzsparqlz00, BgL_bgl_string2722za700za7za7s2794za7, "text/plain", 10 );
DEFINE_STRING( BGl_string2723z00zzsparqlz00, BgL_bgl_string2723za700za7za7s2795za7, "sparql-query", 12 );
DEFINE_STRING( BGl_string2724z00zzsparqlz00, BgL_bgl_string2724za700za7za7s2796za7, "format not implemented", 22 );
DEFINE_STRING( BGl_string2725z00zzsparqlz00, BgL_bgl_string2725za700za7za7s2797za7, "status code", 11 );
DEFINE_STRING( BGl_string2726z00zzsparqlz00, BgL_bgl_string2726za700za7za7s2798za7, " ", 1 );
DEFINE_STRING( BGl_string2727z00zzsparqlz00, BgL_bgl_string2727za700za7za7s2799za7, "PREFIX ", 7 );
DEFINE_STRING( BGl_string2728z00zzsparqlz00, BgL_bgl_string2728za700za7za7s2800za7, "", 0 );
DEFINE_STRING( BGl_string2729z00zzsparqlz00, BgL_bgl_string2729za700za7za7s2801za7, " . ", 3 );
DEFINE_STRING( BGl_string2730z00zzsparqlz00, BgL_bgl_string2730za700za7za7s2802za7, "}", 1 );
DEFINE_STRING( BGl_string2731z00zzsparqlz00, BgL_bgl_string2731za700za7za7s2803za7, "}WHERE{", 7 );
DEFINE_STRING( BGl_string2650z00zzsparqlz00, BgL_bgl_string2650za700za7za7s2804za7, "dot", 3 );
DEFINE_STRING( BGl_string2732z00zzsparqlz00, BgL_bgl_string2732za700za7za7s2805za7, "CONSTRUCT{", 10 );
DEFINE_STRING( BGl_string2733z00zzsparqlz00, BgL_bgl_string2733za700za7za7s2806za7, "DISTINCT ", 9 );
DEFINE_STRING( BGl_string2734z00zzsparqlz00, BgL_bgl_string2734za700za7za7s2807za7, " WHERE{", 7 );
DEFINE_STRING( BGl_string2735z00zzsparqlz00, BgL_bgl_string2735za700za7za7s2808za7, "SELECT ", 7 );
DEFINE_STRING( BGl_string2654z00zzsparqlz00, BgL_bgl_string2654za700za7za7s2809za7, "*eoi*", 5 );
DEFINE_STRING( BGl_string2736z00zzsparqlz00, BgL_bgl_string2736za700za7za7s2810za7, "http://dbpedia.org/sparql/", 26 );
DEFINE_STRING( BGl_string2737z00zzsparqlz00, BgL_bgl_string2737za700za7za7s2811za7, "rdfs:subClassOf", 15 );
DEFINE_STRING( BGl_string2738z00zzsparqlz00, BgL_bgl_string2738za700za7za7s2812za7, "?s", 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_constructzd2envzd2zzsparqlz00, BgL_bgl_za762constructza762za72813za7, BGl_z62constructz62zzsparqlz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string2741z00zzsparqlz00, BgL_bgl_string2741za700za7za7s2814za7, "<http://www.w3.org/2005/sparql-results#value>", 45 );
DEFINE_STRING( BGl_string2661z00zzsparqlz00, BgL_bgl_string2661za700za7za7s2815za7, "litteral", 8 );
DEFINE_STRING( BGl_string2743z00zzsparqlz00, BgL_bgl_string2743za700za7za7s2816za7, "<bidon>", 7 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2739z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza72817za7, BGl_z62zc3anonymousza31971ze3ze1zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2747z00zzsparqlz00, BgL_bgl_string2747za700za7za7s2818za7, "   ", 3 );
DEFINE_STRING( BGl_string2748z00zzsparqlz00, BgL_bgl_string2748za700za7za7s2819za7, "\n", 1 );
DEFINE_STRING( BGl_string2749z00zzsparqlz00, BgL_bgl_string2749za700za7za7s2820za7, "a", 1 );
DEFINE_STRING( BGl_string2669z00zzsparqlz00, BgL_bgl_string2669za700za7za7s2821za7, "accept", 6 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2740z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza72822za7, BGl_z62zc3anonymousza31965ze3ze1zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2750z00zzsparqlz00, BgL_bgl_string2750za700za7za7s2823za7, "?uri", 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2744z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza72824za7, BGl_z62zc3anonymousza31988ze3ze1zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2745z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza72825za7, BGl_z62zc3anonymousza32012ze3ze1zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2752z00zzsparqlz00, BgL_bgl_string2752za700za7za7s2826za7, "?o", 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2746z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza72827za7, BGl_z62zc3anonymousza32006ze3ze1zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2753z00zzsparqlz00, BgL_bgl_string2753za700za7za7s2828za7, "?p", 2 );
DEFINE_STRING( BGl_string2755z00zzsparqlz00, BgL_bgl_string2755za700za7za7s2829za7, "/", 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2751z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza72830za7, BGl_z62zc3anonymousza32062ze3ze1zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2754z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza72831za7, BGl_z62zc3anonymousza32135ze3ze1zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2685z00zzsparqlz00, BgL_bgl_string2685za700za7za7s2832za7, "triplets", 8 );
DEFINE_STRING( BGl_string2688z00zzsparqlz00, BgL_bgl_string2688za700za7za7s2833za7, "triplet", 7 );
DEFINE_STRING( BGl_string2691z00zzsparqlz00, BgL_bgl_string2691za700za7za7s2834za7, "subject", 7 );
DEFINE_STRING( BGl_string2695z00zzsparqlz00, BgL_bgl_string2695za700za7za7s2835za7, "predicat", 8 );
DEFINE_STRING( BGl_string2699z00zzsparqlz00, BgL_bgl_string2699za700za7za7s2836za7, "object", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mlistzd2envzd2zzsparqlz00, BgL_bgl_za762mlistza762za7za7spa2837z00, BGl_z62mlistz62zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pipezd2envzd2zzsparqlz00, BgL_bgl_za762pipeza762za7za7spar2838z00, va_generic_entry, BGl_z62pipez62zzsparqlz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_childrenzd2constructzd2envz00zzsparqlz00, BgL_bgl_za762childrenza7d2co2839z00, BGl_z62childrenzd2constructzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_instancezd2ontologyzd2envz00zzsparqlz00, BgL_bgl_za762instanceza7d2on2840z00, BGl_z62instancezd2ontologyzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pipezd2mapzd2envz00zzsparqlz00, BgL_bgl_za762pipeza7d2mapza7b02841za7, va_generic_entry, BGl_z62pipezd2mapzb0zzsparqlz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_foldzd2envzd2zzsparqlz00, BgL_bgl_za762foldza762za7za7spar2842z00, BGl_z62foldz62zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_selectzd2ntzd2envz00zzsparqlz00, BgL_bgl_za762selectza7d2ntza7b2843za7, va_generic_entry, BGl_z62selectzd2ntzb0zzsparqlz00, BUNSPEC, -4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_constructzd2ntzd2envz00zzsparqlz00, BgL_bgl_za762constructza7d2n2844z00, va_generic_entry, BGl_z62constructzd2ntzb0zzsparqlz00, BUNSPEC, -4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_subjectzd2predicatzd2envz00zzsparqlz00, BgL_bgl_za762subjectza7d2pre2845z00, BGl_z62subjectzd2predicatzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_selectzd2envzd2zzsparqlz00, BgL_bgl_za762selectza762za7za7sp2846z00, BGl_z62selectz62zzsparqlz00, 0L, BUNSPEC, 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fromzd2envzd2zzsparqlz00, BgL_bgl_za762fromza762za7za7spar2847z00, BGl_z62fromz62zzsparqlz00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsparqlz00(long BgL_checksumz00_3413, char * BgL_fromz00_3414)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zzsparqlz00))
{ 
BGl_requirezd2initializa7ationz75zzsparqlz00 = 
BBOOL(((bool_t)0)); 
BGl_libraryzd2moduleszd2initz00zzsparqlz00(); 
BGl_cnstzd2initzd2zzsparqlz00(); 
BGl_toplevelzd2initzd2zzsparqlz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* library-modules-init */
obj_t BGl_libraryzd2moduleszd2initz00zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__lalr_driverz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__httpz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__urlz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__socketz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__rgcz00(((long)0), "sparql"); 
return BUNSPEC;} 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
BGl_list2608z00zzsparqlz00 = 
MAKE_PAIR(BGl_string2609z00zzsparqlz00, 
MAKE_PAIR(BGl_string2610z00zzsparqlz00, BNIL)); 
BGl_list2611z00zzsparqlz00 = 
MAKE_PAIR(BGl_string2612z00zzsparqlz00, 
MAKE_PAIR(BGl_string2613z00zzsparqlz00, BNIL)); 
BGl_list2607z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2608z00zzsparqlz00, 
MAKE_PAIR(BGl_list2611z00zzsparqlz00, BNIL)); 
BGl_symbol2626z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2627z00zzsparqlz00); 
BGl_symbol2628z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2629z00zzsparqlz00); 
BGl_list2625z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, BGl_symbol2628z00zzsparqlz00); 
BGl_symbol2631z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2632z00zzsparqlz00); 
BGl_list2630z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2631z00zzsparqlz00, 
BINT(((long)1))); 
BGl_symbol2634z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2635z00zzsparqlz00); 
BGl_list2633z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2634z00zzsparqlz00, 
BINT(((long)2))); 
BGl_symbol2637z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2638z00zzsparqlz00); 
BGl_list2636z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2637z00zzsparqlz00, 
BINT(((long)3))); 
BGl_list2624z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2625z00zzsparqlz00, 
MAKE_PAIR(BGl_list2630z00zzsparqlz00, 
MAKE_PAIR(BGl_list2633z00zzsparqlz00, 
MAKE_PAIR(BGl_list2636z00zzsparqlz00, BNIL)))); 
BGl_list2640z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-7))); 
BGl_list2639z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2640z00zzsparqlz00, BNIL); 
BGl_list2642z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-4))); 
BGl_list2641z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2642z00zzsparqlz00, BNIL); 
BGl_list2644z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-6))); 
BGl_list2643z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2644z00zzsparqlz00, BNIL); 
BGl_list2646z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2637z00zzsparqlz00, 
BINT(((long)7))); 
BGl_list2645z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2625z00zzsparqlz00, 
MAKE_PAIR(BGl_list2646z00zzsparqlz00, BNIL)); 
BGl_symbol2649z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2650z00zzsparqlz00); 
BGl_list2648z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2649z00zzsparqlz00, 
BINT(((long)9))); 
BGl_list2647z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2625z00zzsparqlz00, 
MAKE_PAIR(BGl_list2648z00zzsparqlz00, BNIL)); 
BGl_symbol2653z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2654z00zzsparqlz00); 
BGl_list2652z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2653z00zzsparqlz00, 
BINT(((long)10))); 
BGl_list2651z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2625z00zzsparqlz00, 
MAKE_PAIR(BGl_list2652z00zzsparqlz00, BNIL)); 
BGl_list2656z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-8))); 
BGl_list2655z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2656z00zzsparqlz00, BNIL); 
BGl_list2658z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2631z00zzsparqlz00, 
BINT(((long)11))); 
BGl_symbol2660z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2661z00zzsparqlz00); 
BGl_list2659z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2660z00zzsparqlz00, 
BINT(((long)12))); 
BGl_list2662z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2637z00zzsparqlz00, 
BINT(((long)13))); 
BGl_list2657z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2625z00zzsparqlz00, 
MAKE_PAIR(BGl_list2658z00zzsparqlz00, 
MAKE_PAIR(BGl_list2659z00zzsparqlz00, 
MAKE_PAIR(BGl_list2662z00zzsparqlz00, BNIL)))); 
BGl_list2664z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-3))); 
BGl_list2663z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2664z00zzsparqlz00, 
MAKE_PAIR(BGl_list2630z00zzsparqlz00, 
MAKE_PAIR(BGl_list2633z00zzsparqlz00, 
MAKE_PAIR(BGl_list2636z00zzsparqlz00, BNIL)))); 
BGl_list2666z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-1))); 
BGl_symbol2668z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2669z00zzsparqlz00); 
BGl_list2667z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2653z00zzsparqlz00, BGl_symbol2668z00zzsparqlz00); 
BGl_list2665z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2666z00zzsparqlz00, 
MAKE_PAIR(BGl_list2667z00zzsparqlz00, BNIL)); 
BGl_list2671z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-10))); 
BGl_list2670z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2671z00zzsparqlz00, BNIL); 
BGl_list2673z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-11))); 
BGl_list2672z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2673z00zzsparqlz00, BNIL); 
BGl_list2675z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-9))); 
BGl_list2674z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2675z00zzsparqlz00, BNIL); 
BGl_list2677z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-5))); 
BGl_list2676z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2677z00zzsparqlz00, BNIL); 
BGl_list2679z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2626z00zzsparqlz00, 
BINT(((long)-2))); 
BGl_list2678z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2679z00zzsparqlz00, BNIL); 
BGl_list2623z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2624z00zzsparqlz00, 
MAKE_PAIR(BGl_list2639z00zzsparqlz00, 
MAKE_PAIR(BGl_list2641z00zzsparqlz00, 
MAKE_PAIR(BGl_list2643z00zzsparqlz00, 
MAKE_PAIR(BGl_list2645z00zzsparqlz00, 
MAKE_PAIR(BGl_list2647z00zzsparqlz00, 
MAKE_PAIR(BGl_list2651z00zzsparqlz00, 
MAKE_PAIR(BGl_list2655z00zzsparqlz00, 
MAKE_PAIR(BGl_list2657z00zzsparqlz00, 
MAKE_PAIR(BGl_list2663z00zzsparqlz00, 
MAKE_PAIR(BGl_list2665z00zzsparqlz00, 
MAKE_PAIR(BGl_list2670z00zzsparqlz00, 
MAKE_PAIR(BGl_list2672z00zzsparqlz00, 
MAKE_PAIR(BGl_list2674z00zzsparqlz00, 
MAKE_PAIR(BGl_list2676z00zzsparqlz00, 
MAKE_PAIR(BGl_list2678z00zzsparqlz00, BNIL)))))))))))))))); 
BGl_vector2622z00zzsparqlz00 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BGl_list2623z00zzsparqlz00); 
BGl_symbol2684z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2685z00zzsparqlz00); 
BGl_list2683z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2684z00zzsparqlz00, 
BINT(((long)6))); 
BGl_symbol2687z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2688z00zzsparqlz00); 
BGl_list2686z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2687z00zzsparqlz00, 
BINT(((long)5))); 
BGl_symbol2690z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2691z00zzsparqlz00); 
BGl_list2689z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2690z00zzsparqlz00, 
BINT(((long)4))); 
BGl_list2682z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2683z00zzsparqlz00, 
MAKE_PAIR(BGl_list2686z00zzsparqlz00, 
MAKE_PAIR(BGl_list2689z00zzsparqlz00, BNIL))); 
BGl_symbol2694z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2695z00zzsparqlz00); 
BGl_list2693z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2694z00zzsparqlz00, 
BINT(((long)8))); 
BGl_list2692z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2693z00zzsparqlz00, BNIL); 
BGl_symbol2698z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2699z00zzsparqlz00); 
BGl_list2697z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2698z00zzsparqlz00, 
BINT(((long)14))); 
BGl_list2696z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2697z00zzsparqlz00, BNIL); 
BGl_list2701z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol2684z00zzsparqlz00, 
BINT(((long)15))); 
BGl_list2700z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2701z00zzsparqlz00, 
MAKE_PAIR(BGl_list2686z00zzsparqlz00, 
MAKE_PAIR(BGl_list2689z00zzsparqlz00, BNIL))); 
BGl_list2681z00zzsparqlz00 = 
MAKE_PAIR(BGl_list2682z00zzsparqlz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BGl_list2692z00zzsparqlz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BGl_list2696z00zzsparqlz00, 
MAKE_PAIR(BGl_list2700z00zzsparqlz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, BNIL)))))))))))))))); 
BGl_vector2680z00zzsparqlz00 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BGl_list2681z00zzsparqlz00); 
BGl_list2705z00zzsparqlz00 = 
MAKE_PAIR(BNIL, BNIL); 
BGl_keyword2708z00zzsparqlz00 = 
bstring_to_keyword(BGl_string2709z00zzsparqlz00); 
BGl_keyword2710z00zzsparqlz00 = 
bstring_to_keyword(BGl_string2711z00zzsparqlz00); 
BGl_keyword2713z00zzsparqlz00 = 
bstring_to_keyword(BGl_string2714z00zzsparqlz00); 
BGl_symbol2716z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2717z00zzsparqlz00); 
BGl_symbol2718z00zzsparqlz00 = 
bstring_to_symbol(BGl_string2719z00zzsparqlz00); 
BGl_keyword2721z00zzsparqlz00 = 
bstring_to_keyword(BGl_string2669z00zzsparqlz00); 
return ( 
BGl_list2742z00zzsparqlz00 = 
MAKE_PAIR(BGl_string2738z00zzsparqlz00, 
MAKE_PAIR(BGl_string2743z00zzsparqlz00, 
MAKE_PAIR(BGl_string2743z00zzsparqlz00, BNIL))), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
BGl_prefixsz00zzsparqlz00 = BGl_list2607z00zzsparqlz00; 
BGl_dbpediaz00zzsparqlz00 = BGl_string2614z00zzsparqlz00; 
BGl_imdbz00zzsparqlz00 = BGl_string2615z00zzsparqlz00; 
BGl_dbtunez00zzsparqlz00 = BGl_string2616z00zzsparqlz00; 
BGl_lodacz00zzsparqlz00 = BGl_string2617z00zzsparqlz00; 
BGl_bbcz00zzsparqlz00 = BGl_string2618z00zzsparqlz00; 
BGl_bioz00zzsparqlz00 = BGl_string2619z00zzsparqlz00; 
BGl_gouvzd2ukzd2zzsparqlz00 = BGl_string2620z00zzsparqlz00; 
BGl_eeaz00zzsparqlz00 = BGl_string2621z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL___actionzd2tablezd2_75;
BgL___actionzd2tablezd2_75 = BGl_vector2622z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL___gotozd2tablezd2_76;
BgL___gotozd2tablezd2_76 = BGl_vector2680z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL___reducez00_3280;
BgL___reducez00_3280 = 
MAKE_FX_PROCEDURE(BGl_z62__reducez62zzsparqlz00, 
(int)(((long)3)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL___reducez00_3280, 
(int)(((long)0)), BgL___gotozd2tablezd2_76); 
{ /* Llib/sparql.scm 91 */

BGl_sparqlzd2grammarzd2rulesz00zzsparqlz00 = 
BGl___makezd2parserzd2zz__lalr_driverz00(BgL___actionzd2tablezd2_75, BgL___reducez00_3280); } } } } 
return ( 
BGl_sparqlzd2grammarzd2tokensz00zzsparqlz00 = BGl_proc2702z00zzsparqlz00, BUNSPEC) ;} 
}



/* &<anonymous:1422> */
obj_t BGl_z62zc3anonymousza31422ze3ze1zzsparqlz00(obj_t BgL_envz00_3281, obj_t BgL_inputzd2portzd2_3282)
{ AN_OBJECT;
{ /* Llib/sparql.scm 111 */
{ 
obj_t BgL_inputzd2portzd2_160;
BgL_inputzd2portzd2_160 = BgL_inputzd2portzd2_3282; 
{ 
obj_t BgL_inputzd2portzd2_242;long BgL_lastzd2matchzd2_243;obj_t BgL_inputzd2portzd2_250;long BgL_lastzd2matchzd2_251;obj_t BgL_inputzd2portzd2_258;long BgL_lastzd2matchzd2_259;obj_t BgL_inputzd2portzd2_265;long BgL_lastzd2matchzd2_266;obj_t BgL_inputzd2portzd2_272;long BgL_lastzd2matchzd2_273;obj_t BgL_inputzd2portzd2_279;long BgL_lastzd2matchzd2_280;obj_t BgL_inputzd2portzd2_286;long BgL_lastzd2matchzd2_287;obj_t BgL_inputzd2portzd2_293;long BgL_lastzd2matchzd2_294;obj_t BgL_inputzd2portzd2_301;long BgL_lastzd2matchzd2_302;obj_t BgL_inputzd2portzd2_308;long BgL_lastzd2matchzd2_309;obj_t BgL_inputzd2portzd2_315;long BgL_lastzd2matchzd2_316;obj_t BgL_inputzd2portzd2_322;long BgL_lastzd2matchzd2_323;obj_t BgL_inputzd2portzd2_329;long BgL_lastzd2matchzd2_330;obj_t BgL_inputzd2portzd2_340;long BgL_lastzd2matchzd2_341;obj_t BgL_inputzd2portzd2_348;long BgL_lastzd2matchzd2_349;obj_t BgL_inputzd2portzd2_368;long BgL_lastzd2matchzd2_369;obj_t BgL_inputzd2portzd2_378;long BgL_lastzd2matchzd2_379;obj_t BgL_inputzd2portzd2_386;long BgL_lastzd2matchzd2_387;obj_t BgL_inputzd2portzd2_395;long BgL_lastzd2matchzd2_396;obj_t BgL_inputzd2portzd2_404;long BgL_lastzd2matchzd2_405;obj_t BgL_inputzd2portzd2_413;long BgL_lastzd2matchzd2_414;obj_t BgL_inputzd2portzd2_422;long BgL_lastzd2matchzd2_423;obj_t BgL_inputzd2portzd2_431;long BgL_lastzd2matchzd2_432;obj_t BgL_inputzd2portzd2_440;long BgL_lastzd2matchzd2_441;obj_t BgL_inputzd2portzd2_450;long BgL_lastzd2matchzd2_451;obj_t BgL_inputzd2portzd2_459;long BgL_lastzd2matchzd2_460;obj_t BgL_inputzd2portzd2_477;long BgL_lastzd2matchzd2_478;obj_t BgL_inputzd2portzd2_484;long BgL_lastzd2matchzd2_485;obj_t BgL_inputzd2portzd2_495;long BgL_lastzd2matchzd2_496;obj_t BgL_inputzd2portzd2_502;long BgL_lastzd2matchzd2_503;obj_t BgL_inputzd2portzd2_509;long BgL_lastzd2matchzd2_510;obj_t BgL_inputzd2portzd2_516;long BgL_lastzd2matchzd2_517;obj_t BgL_inputzd2portzd2_523;long BgL_lastzd2matchzd2_524;obj_t BgL_inputzd2portzd2_530;long BgL_lastzd2matchzd2_531;obj_t BgL_inputzd2portzd2_545;long BgL_lastzd2matchzd2_546;obj_t BgL_inputzd2portzd2_552;long BgL_lastzd2matchzd2_553;obj_t BgL_inputzd2portzd2_559;long BgL_lastzd2matchzd2_560;obj_t BgL_inputzd2portzd2_567;long BgL_lastzd2matchzd2_568;obj_t BgL_inputzd2portzd2_575;long BgL_lastzd2matchzd2_576;obj_t BgL_inputzd2portzd2_586;long BgL_lastzd2matchzd2_587;
BgL_zc3anonymousza31737ze3z83_670:
{ /* Llib/sparql.scm 111 */
long BgL_res2494z00_2561;
BgL_res2494z00_2561 = 
RGC_START_MATCH(BgL_inputzd2portzd2_160); BgL_res2494z00_2561; } 
{ /* Llib/sparql.scm 111 */
long BgL_matchz00_671;
BgL_inputzd2portzd2_348 = BgL_inputzd2portzd2_160; 
BgL_lastzd2matchzd2_349 = ((long)9); 
BgL_zc3anonymousza31489ze3z83_350:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_351;
{ /* Llib/sparql.scm 111 */
int BgL_res2294z00_2036;
BgL_res2294z00_2036 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_348); 
BgL_currentzd2charzd2_351 = BgL_res2294z00_2036; } 
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3604;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2296z00_2041;
BgL_res2296z00_2041 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_348); 
BgL_testz00_3604 = BgL_res2296z00_2041; } 
if(BgL_testz00_3604)
{ /* Llib/sparql.scm 111 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_348))
{ 

goto BgL_zc3anonymousza31489ze3z83_350;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_349; } }  else 
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2046;
{ /* Llib/sparql.scm 111 */
long BgL_res2298z00_2048;
BgL_res2298z00_2048 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_348); BgL_res2298z00_2048; } 
BgL_newzd2matchzd2_2046 = ((long)9); 
BgL_matchz00_671 = BgL_newzd2matchzd2_2046; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3609;
if(
(
(long)(BgL_currentzd2charzd2_351)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3609 = 
(
(long)(BgL_currentzd2charzd2_351)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3609 = ((bool_t)0)
; } 
if(BgL_testz00_3609)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_440 = BgL_inputzd2portzd2_348; 
BgL_lastzd2matchzd2_441 = BgL_lastzd2matchzd2_349; 
BgL_zc3anonymousza31548ze3z83_442:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_443;
{ /* Llib/sparql.scm 111 */
long BgL_res2363z00_2221;
BgL_res2363z00_2221 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_440); BgL_res2363z00_2221; } 
BgL_newzd2matchzd2_443 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_444;
{ /* Llib/sparql.scm 111 */
int BgL_res2364z00_2223;
BgL_res2364z00_2223 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_440); 
BgL_currentzd2charzd2_444 = BgL_res2364z00_2223; } 
if(
(
(long)(BgL_currentzd2charzd2_444)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3620;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2368z00_2233;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2227;
BgL_inputzd2portzd2_2227 = BgL_inputzd2portzd2_440; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3621;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2366z00_2230;
BgL_res2366z00_2230 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2227); 
BgL_testz00_3621 = BgL_res2366z00_2230; } 
if(BgL_testz00_3621)
{ /* Llib/sparql.scm 111 */
BgL_res2368z00_2233 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2227); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2368z00_2233 = ((bool_t)0); } } } 
BgL_testz00_3620 = BgL_res2368z00_2233; } 
if(BgL_testz00_3620)
{ 

goto BgL_zc3anonymousza31548ze3z83_442;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_443; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3624;
if(
(
(long)(BgL_currentzd2charzd2_444)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3624 = 
(
(long)(BgL_currentzd2charzd2_444)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3624 = ((bool_t)0)
; } 
if(BgL_testz00_3624)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_395 = BgL_inputzd2portzd2_440; 
BgL_lastzd2matchzd2_396 = BgL_newzd2matchzd2_443; 
BgL_zc3anonymousza31522ze3z83_397:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_398;
{ /* Llib/sparql.scm 111 */
int BgL_res2327z00_2130;
BgL_res2327z00_2130 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_395); 
BgL_currentzd2charzd2_398 = BgL_res2327z00_2130; } 
if(
(
(long)(BgL_currentzd2charzd2_398)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3634;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2331z00_2140;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2134;
BgL_inputzd2portzd2_2134 = BgL_inputzd2portzd2_395; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3635;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2329z00_2137;
BgL_res2329z00_2137 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2134); 
BgL_testz00_3635 = BgL_res2329z00_2137; } 
if(BgL_testz00_3635)
{ /* Llib/sparql.scm 111 */
BgL_res2331z00_2140 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2134); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2331z00_2140 = ((bool_t)0); } } } 
BgL_testz00_3634 = BgL_res2331z00_2140; } 
if(BgL_testz00_3634)
{ 

goto BgL_zc3anonymousza31522ze3z83_397;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_396; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3638;
if(
(
(long)(BgL_currentzd2charzd2_398)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3638 = 
(
(long)(BgL_currentzd2charzd2_398)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3638 = ((bool_t)0)
; } 
if(BgL_testz00_3638)
{ 

goto BgL_zc3anonymousza31522ze3z83_397;}  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_398)==((long)58)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_404 = BgL_inputzd2portzd2_395; 
BgL_lastzd2matchzd2_405 = BgL_lastzd2matchzd2_396; 
BgL_zc3anonymousza31529ze3z83_406:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_407;
{ /* Llib/sparql.scm 111 */
long BgL_res2335z00_2151;
BgL_res2335z00_2151 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_404); BgL_res2335z00_2151; } 
BgL_newzd2matchzd2_407 = ((long)3); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_408;
{ /* Llib/sparql.scm 111 */
int BgL_res2336z00_2153;
BgL_res2336z00_2153 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_404); 
BgL_currentzd2charzd2_408 = BgL_res2336z00_2153; } 
if(
(
(long)(BgL_currentzd2charzd2_408)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3652;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2340z00_2163;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2157;
BgL_inputzd2portzd2_2157 = BgL_inputzd2portzd2_404; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3653;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2338z00_2160;
BgL_res2338z00_2160 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2157); 
BgL_testz00_3653 = BgL_res2338z00_2160; } 
if(BgL_testz00_3653)
{ /* Llib/sparql.scm 111 */
BgL_res2340z00_2163 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2157); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2340z00_2163 = ((bool_t)0); } } } 
BgL_testz00_3652 = BgL_res2340z00_2163; } 
if(BgL_testz00_3652)
{ 

goto BgL_zc3anonymousza31529ze3z83_406;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_407; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3656;
if(
(
(long)(BgL_currentzd2charzd2_408)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3656 = 
(
(long)(BgL_currentzd2charzd2_408)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3656 = ((bool_t)0)
; } 
if(BgL_testz00_3656)
{ 
long BgL_lastzd2matchzd2_3662;
BgL_lastzd2matchzd2_3662 = BgL_newzd2matchzd2_407; 
BgL_lastzd2matchzd2_405 = BgL_lastzd2matchzd2_3662; 
goto BgL_zc3anonymousza31529ze3z83_406;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_407; } } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_396; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_444)==((long)58)))
{ 
long BgL_lastzd2matchzd2_3667;obj_t BgL_inputzd2portzd2_3666;
BgL_inputzd2portzd2_3666 = BgL_inputzd2portzd2_440; 
BgL_lastzd2matchzd2_3667 = BgL_newzd2matchzd2_443; 
BgL_lastzd2matchzd2_405 = BgL_lastzd2matchzd2_3667; 
BgL_inputzd2portzd2_404 = BgL_inputzd2portzd2_3666; 
goto BgL_zc3anonymousza31529ze3z83_406;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_443; } } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)95)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_340 = BgL_inputzd2portzd2_348; 
BgL_lastzd2matchzd2_341 = BgL_lastzd2matchzd2_349; 
BgL_zc3anonymousza31484ze3z83_342:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_343;
{ /* Llib/sparql.scm 111 */
long BgL_res2287z00_2019;
BgL_res2287z00_2019 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_340); BgL_res2287z00_2019; } 
BgL_newzd2matchzd2_343 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_344;
{ /* Llib/sparql.scm 111 */
int BgL_res2288z00_2021;
BgL_res2288z00_2021 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_340); 
BgL_currentzd2charzd2_344 = BgL_res2288z00_2021; } 
if(
(
(long)(BgL_currentzd2charzd2_344)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3676;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2292z00_2031;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2025;
BgL_inputzd2portzd2_2025 = BgL_inputzd2portzd2_340; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3677;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2290z00_2028;
BgL_res2290z00_2028 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2025); 
BgL_testz00_3677 = BgL_res2290z00_2028; } 
if(BgL_testz00_3677)
{ /* Llib/sparql.scm 111 */
BgL_res2292z00_2031 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2025); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2292z00_2031 = ((bool_t)0); } } } 
BgL_testz00_3676 = BgL_res2292z00_2031; } 
if(BgL_testz00_3676)
{ 

goto BgL_zc3anonymousza31484ze3z83_342;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_343; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_344)==((long)58)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_459 = BgL_inputzd2portzd2_340; 
BgL_lastzd2matchzd2_460 = BgL_newzd2matchzd2_343; 
BgL_zc3anonymousza31560ze3z83_461:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_462;
{ /* Llib/sparql.scm 111 */
int BgL_res2380z00_2264;
BgL_res2380z00_2264 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_459); 
BgL_currentzd2charzd2_462 = BgL_res2380z00_2264; } 
if(
(
(long)(BgL_currentzd2charzd2_462)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3687;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2384z00_2274;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2268;
BgL_inputzd2portzd2_2268 = BgL_inputzd2portzd2_459; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3688;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2382z00_2271;
BgL_res2382z00_2271 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2268); 
BgL_testz00_3688 = BgL_res2382z00_2271; } 
if(BgL_testz00_3688)
{ /* Llib/sparql.scm 111 */
BgL_res2384z00_2274 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2268); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2384z00_2274 = ((bool_t)0); } } } 
BgL_testz00_3687 = BgL_res2384z00_2274; } 
if(BgL_testz00_3687)
{ 

goto BgL_zc3anonymousza31560ze3z83_461;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_460; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3691;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3692;
if(
(
(long)(BgL_currentzd2charzd2_462)>=((long)65)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3692 = 
(
(long)(BgL_currentzd2charzd2_462)<((long)91))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3692 = ((bool_t)0)
; } 
if(BgL_testz00_3692)
{ /* Llib/sparql.scm 111 */
BgL_testz00_3691 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_462)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3691 = 
(
(long)(BgL_currentzd2charzd2_462)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3691 = ((bool_t)0)
; } } } 
if(BgL_testz00_3691)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_586 = BgL_inputzd2portzd2_459; 
BgL_lastzd2matchzd2_587 = BgL_lastzd2matchzd2_460; 
BgL_zc3anonymousza31633ze3z83_588:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_589;
{ /* Llib/sparql.scm 111 */
long BgL_res2476z00_2513;
BgL_res2476z00_2513 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_586); BgL_res2476z00_2513; } 
BgL_newzd2matchzd2_589 = ((long)1); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_590;
{ /* Llib/sparql.scm 111 */
int BgL_res2477z00_2515;
BgL_res2477z00_2515 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_586); 
BgL_currentzd2charzd2_590 = BgL_res2477z00_2515; } 
if(
(
(long)(BgL_currentzd2charzd2_590)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3708;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2481z00_2525;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2519;
BgL_inputzd2portzd2_2519 = BgL_inputzd2portzd2_586; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3709;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2479z00_2522;
BgL_res2479z00_2522 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2519); 
BgL_testz00_3709 = BgL_res2479z00_2522; } 
if(BgL_testz00_3709)
{ /* Llib/sparql.scm 111 */
BgL_res2481z00_2525 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2519); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2481z00_2525 = ((bool_t)0); } } } 
BgL_testz00_3708 = BgL_res2481z00_2525; } 
if(BgL_testz00_3708)
{ 

goto BgL_zc3anonymousza31633ze3z83_588;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_589; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3712;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3713;
if(
(
(long)(BgL_currentzd2charzd2_590)>=((long)48)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3713 = 
(
(long)(BgL_currentzd2charzd2_590)<((long)58))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3713 = ((bool_t)0)
; } 
if(BgL_testz00_3713)
{ /* Llib/sparql.scm 111 */
BgL_testz00_3712 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3719;
if(
(
(long)(BgL_currentzd2charzd2_590)>=((long)65)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3719 = 
(
(long)(BgL_currentzd2charzd2_590)<((long)91))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3719 = ((bool_t)0)
; } 
if(BgL_testz00_3719)
{ /* Llib/sparql.scm 111 */
BgL_testz00_3712 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_590)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3712 = 
(
(long)(BgL_currentzd2charzd2_590)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3712 = ((bool_t)0)
; } } } } 
if(BgL_testz00_3712)
{ 
long BgL_lastzd2matchzd2_3730;
BgL_lastzd2matchzd2_3730 = BgL_newzd2matchzd2_589; 
BgL_lastzd2matchzd2_587 = BgL_lastzd2matchzd2_3730; 
goto BgL_zc3anonymousza31633ze3z83_588;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_589; } } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_460; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_343; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)64)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_250 = BgL_inputzd2portzd2_348; 
BgL_lastzd2matchzd2_251 = BgL_lastzd2matchzd2_349; 
BgL_zc3anonymousza31430ze3z83_252:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_253;
{ /* Llib/sparql.scm 111 */
long BgL_res2210z00_1822;
BgL_res2210z00_1822 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_250); BgL_res2210z00_1822; } 
BgL_newzd2matchzd2_253 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_254;
{ /* Llib/sparql.scm 111 */
int BgL_res2211z00_1824;
BgL_res2211z00_1824 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_250); 
BgL_currentzd2charzd2_254 = BgL_res2211z00_1824; } 
if(
(
(long)(BgL_currentzd2charzd2_254)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3739;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2215z00_1834;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1828;
BgL_inputzd2portzd2_1828 = BgL_inputzd2portzd2_250; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3740;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2213z00_1831;
BgL_res2213z00_1831 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1828); 
BgL_testz00_3740 = BgL_res2213z00_1831; } 
if(BgL_testz00_3740)
{ /* Llib/sparql.scm 111 */
BgL_res2215z00_1834 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1828); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2215z00_1834 = ((bool_t)0); } } } 
BgL_testz00_3739 = BgL_res2215z00_1834; } 
if(BgL_testz00_3739)
{ 

goto BgL_zc3anonymousza31430ze3z83_252;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_253; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_254)==((long)112)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_477 = BgL_inputzd2portzd2_250; 
BgL_lastzd2matchzd2_478 = BgL_newzd2matchzd2_253; 
BgL_zc3anonymousza31568ze3z83_479:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_480;
{ /* Llib/sparql.scm 111 */
int BgL_res2391z00_2294;
BgL_res2391z00_2294 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_477); 
BgL_currentzd2charzd2_480 = BgL_res2391z00_2294; } 
if(
(
(long)(BgL_currentzd2charzd2_480)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3750;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2395z00_2304;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2298;
BgL_inputzd2portzd2_2298 = BgL_inputzd2portzd2_477; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3751;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2393z00_2301;
BgL_res2393z00_2301 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2298); 
BgL_testz00_3751 = BgL_res2393z00_2301; } 
if(BgL_testz00_3751)
{ /* Llib/sparql.scm 111 */
BgL_res2395z00_2304 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2298); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2395z00_2304 = ((bool_t)0); } } } 
BgL_testz00_3750 = BgL_res2395z00_2304; } 
if(BgL_testz00_3750)
{ 

goto BgL_zc3anonymousza31568ze3z83_479;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_478; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_480)==((long)114)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_258 = BgL_inputzd2portzd2_477; 
BgL_lastzd2matchzd2_259 = BgL_lastzd2matchzd2_478; 
BgL_zc3anonymousza31434ze3z83_260:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_261;
{ /* Llib/sparql.scm 111 */
int BgL_res2217z00_1839;
BgL_res2217z00_1839 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_258); 
BgL_currentzd2charzd2_261 = BgL_res2217z00_1839; } 
if(
(
(long)(BgL_currentzd2charzd2_261)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3761;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2221z00_1849;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1843;
BgL_inputzd2portzd2_1843 = BgL_inputzd2portzd2_258; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3762;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2219z00_1846;
BgL_res2219z00_1846 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1843); 
BgL_testz00_3762 = BgL_res2219z00_1846; } 
if(BgL_testz00_3762)
{ /* Llib/sparql.scm 111 */
BgL_res2221z00_1849 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1843); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2221z00_1849 = ((bool_t)0); } } } 
BgL_testz00_3761 = BgL_res2221z00_1849; } 
if(BgL_testz00_3761)
{ 

goto BgL_zc3anonymousza31434ze3z83_260;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_259; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_261)==((long)101)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_484 = BgL_inputzd2portzd2_258; 
BgL_lastzd2matchzd2_485 = BgL_lastzd2matchzd2_259; 
BgL_zc3anonymousza31572ze3z83_486:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_487;
{ /* Llib/sparql.scm 111 */
int BgL_res2397z00_2309;
BgL_res2397z00_2309 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_484); 
BgL_currentzd2charzd2_487 = BgL_res2397z00_2309; } 
if(
(
(long)(BgL_currentzd2charzd2_487)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3772;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2401z00_2319;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2313;
BgL_inputzd2portzd2_2313 = BgL_inputzd2portzd2_484; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3773;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2399z00_2316;
BgL_res2399z00_2316 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2313); 
BgL_testz00_3773 = BgL_res2399z00_2316; } 
if(BgL_testz00_3773)
{ /* Llib/sparql.scm 111 */
BgL_res2401z00_2319 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2313); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2401z00_2319 = ((bool_t)0); } } } 
BgL_testz00_3772 = BgL_res2401z00_2319; } 
if(BgL_testz00_3772)
{ 

goto BgL_zc3anonymousza31572ze3z83_486;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_485; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_487)==((long)102)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_265 = BgL_inputzd2portzd2_484; 
BgL_lastzd2matchzd2_266 = BgL_lastzd2matchzd2_485; 
BgL_zc3anonymousza31439ze3z83_267:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_268;
{ /* Llib/sparql.scm 111 */
int BgL_res2223z00_1854;
BgL_res2223z00_1854 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_265); 
BgL_currentzd2charzd2_268 = BgL_res2223z00_1854; } 
if(
(
(long)(BgL_currentzd2charzd2_268)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3783;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2227z00_1864;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1858;
BgL_inputzd2portzd2_1858 = BgL_inputzd2portzd2_265; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3784;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2225z00_1861;
BgL_res2225z00_1861 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1858); 
BgL_testz00_3784 = BgL_res2225z00_1861; } 
if(BgL_testz00_3784)
{ /* Llib/sparql.scm 111 */
BgL_res2227z00_1864 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1858); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2227z00_1864 = ((bool_t)0); } } } 
BgL_testz00_3783 = BgL_res2227z00_1864; } 
if(BgL_testz00_3783)
{ 

goto BgL_zc3anonymousza31439ze3z83_267;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_266; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_268)==((long)105)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_272 = BgL_inputzd2portzd2_265; 
BgL_lastzd2matchzd2_273 = BgL_lastzd2matchzd2_266; 
BgL_zc3anonymousza31443ze3z83_274:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_275;
{ /* Llib/sparql.scm 111 */
int BgL_res2229z00_1869;
BgL_res2229z00_1869 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_272); 
BgL_currentzd2charzd2_275 = BgL_res2229z00_1869; } 
if(
(
(long)(BgL_currentzd2charzd2_275)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3794;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2233z00_1879;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1873;
BgL_inputzd2portzd2_1873 = BgL_inputzd2portzd2_272; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3795;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2231z00_1876;
BgL_res2231z00_1876 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1873); 
BgL_testz00_3795 = BgL_res2231z00_1876; } 
if(BgL_testz00_3795)
{ /* Llib/sparql.scm 111 */
BgL_res2233z00_1879 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1873); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2233z00_1879 = ((bool_t)0); } } } 
BgL_testz00_3794 = BgL_res2233z00_1879; } 
if(BgL_testz00_3794)
{ 

goto BgL_zc3anonymousza31443ze3z83_274;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_273; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_275)==((long)120)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_1885;
{ /* Llib/sparql.scm 111 */
long BgL_res2235z00_1887;
BgL_res2235z00_1887 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_272); BgL_res2235z00_1887; } 
BgL_newzd2matchzd2_1885 = ((long)8); 
BgL_matchz00_671 = BgL_newzd2matchzd2_1885; }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_273; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_266; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_485; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_259; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_478; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_253; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)60)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_431 = BgL_inputzd2portzd2_348; 
BgL_lastzd2matchzd2_432 = BgL_lastzd2matchzd2_349; 
BgL_zc3anonymousza31542ze3z83_433:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_434;
{ /* Llib/sparql.scm 111 */
long BgL_res2356z00_2202;
BgL_res2356z00_2202 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_431); BgL_res2356z00_2202; } 
BgL_newzd2matchzd2_434 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_435;
{ /* Llib/sparql.scm 111 */
int BgL_res2357z00_2204;
BgL_res2357z00_2204 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_431); 
BgL_currentzd2charzd2_435 = BgL_res2357z00_2204; } 
if(
(
(long)(BgL_currentzd2charzd2_435)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3810;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2359z00_2209;
BgL_res2359z00_2209 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_431); 
BgL_testz00_3810 = BgL_res2359z00_2209; } 
if(BgL_testz00_3810)
{ /* Llib/sparql.scm 111 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_431))
{ 

goto BgL_zc3anonymousza31542ze3z83_433;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_434; } }  else 
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_567 = BgL_inputzd2portzd2_431; 
BgL_lastzd2matchzd2_568 = BgL_newzd2matchzd2_434; 
BgL_zc3anonymousza31619ze3z83_569:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_570;
{ /* Llib/sparql.scm 111 */
int BgL_res2460z00_2470;
BgL_res2460z00_2470 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_567); 
BgL_currentzd2charzd2_570 = BgL_res2460z00_2470; } 
if(
(
(long)(BgL_currentzd2charzd2_570)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3818;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2462z00_2475;
BgL_res2462z00_2475 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_567); 
BgL_testz00_3818 = BgL_res2462z00_2475; } 
if(BgL_testz00_3818)
{ /* Llib/sparql.scm 111 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_567))
{ 

goto BgL_zc3anonymousza31619ze3z83_569;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_568; } }  else 
{ 

goto BgL_zc3anonymousza31619ze3z83_569;} }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_570)==((long)62)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2483;
{ /* Llib/sparql.scm 111 */
long BgL_res2465z00_2485;
BgL_res2465z00_2485 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_567); BgL_res2465z00_2485; } 
BgL_newzd2matchzd2_2483 = ((long)2); 
BgL_matchz00_671 = BgL_newzd2matchzd2_2483; }  else 
{ 

goto BgL_zc3anonymousza31619ze3z83_569;} } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_435)==((long)62)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2217;
{ /* Llib/sparql.scm 111 */
long BgL_res2362z00_2219;
BgL_res2362z00_2219 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_431); BgL_res2362z00_2219; } 
BgL_newzd2matchzd2_2217 = ((long)2); 
BgL_matchz00_671 = BgL_newzd2matchzd2_2217; }  else 
{ 
long BgL_lastzd2matchzd2_3831;obj_t BgL_inputzd2portzd2_3830;
BgL_inputzd2portzd2_3830 = BgL_inputzd2portzd2_431; 
BgL_lastzd2matchzd2_3831 = BgL_newzd2matchzd2_434; 
BgL_lastzd2matchzd2_568 = BgL_lastzd2matchzd2_3831; 
BgL_inputzd2portzd2_567 = BgL_inputzd2portzd2_3830; 
goto BgL_zc3anonymousza31619ze3z83_569;} } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)58)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_450 = BgL_inputzd2portzd2_348; 
BgL_lastzd2matchzd2_451 = BgL_lastzd2matchzd2_349; 
BgL_zc3anonymousza31555ze3z83_452:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_453;
{ /* Llib/sparql.scm 111 */
long BgL_res2372z00_2244;
BgL_res2372z00_2244 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_450); BgL_res2372z00_2244; } 
BgL_newzd2matchzd2_453 = ((long)3); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_454;
{ /* Llib/sparql.scm 111 */
int BgL_res2373z00_2246;
BgL_res2373z00_2246 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_450); 
BgL_currentzd2charzd2_454 = BgL_res2373z00_2246; } 
if(
(
(long)(BgL_currentzd2charzd2_454)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3840;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2377z00_2256;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2250;
BgL_inputzd2portzd2_2250 = BgL_inputzd2portzd2_450; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3841;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2375z00_2253;
BgL_res2375z00_2253 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2250); 
BgL_testz00_3841 = BgL_res2375z00_2253; } 
if(BgL_testz00_3841)
{ /* Llib/sparql.scm 111 */
BgL_res2377z00_2256 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2250); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2377z00_2256 = ((bool_t)0); } } } 
BgL_testz00_3840 = BgL_res2377z00_2256; } 
if(BgL_testz00_3840)
{ 

goto BgL_zc3anonymousza31555ze3z83_452;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_453; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3844;
if(
(
(long)(BgL_currentzd2charzd2_454)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_3844 = 
(
(long)(BgL_currentzd2charzd2_454)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_3844 = ((bool_t)0)
; } 
if(BgL_testz00_3844)
{ 
long BgL_lastzd2matchzd2_3851;obj_t BgL_inputzd2portzd2_3850;
BgL_inputzd2portzd2_3850 = BgL_inputzd2portzd2_450; 
BgL_lastzd2matchzd2_3851 = BgL_newzd2matchzd2_453; 
BgL_lastzd2matchzd2_405 = BgL_lastzd2matchzd2_3851; 
BgL_inputzd2portzd2_404 = BgL_inputzd2portzd2_3850; 
goto BgL_zc3anonymousza31529ze3z83_406;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_453; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)46)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2072;
{ /* Llib/sparql.scm 111 */
long BgL_res2306z00_2074;
BgL_res2306z00_2074 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_348); BgL_res2306z00_2074; } 
BgL_newzd2matchzd2_2072 = ((long)5); 
BgL_matchz00_671 = BgL_newzd2matchzd2_2072; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)35)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_242 = BgL_inputzd2portzd2_348; 
BgL_lastzd2matchzd2_243 = BgL_lastzd2matchzd2_349; 
BgL_zc3anonymousza31425ze3z83_244:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_245;
{ /* Llib/sparql.scm 111 */
long BgL_res2203z00_1805;
BgL_res2203z00_1805 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_242); BgL_res2203z00_1805; } 
BgL_newzd2matchzd2_245 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_246;
{ /* Llib/sparql.scm 111 */
int BgL_res2204z00_1807;
BgL_res2204z00_1807 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_242); 
BgL_currentzd2charzd2_246 = BgL_res2204z00_1807; } 
if(
(
(long)(BgL_currentzd2charzd2_246)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3864;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2208z00_1817;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1811;
BgL_inputzd2portzd2_1811 = BgL_inputzd2portzd2_242; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3865;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2206z00_1814;
BgL_res2206z00_1814 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1811); 
BgL_testz00_3865 = BgL_res2206z00_1814; } 
if(BgL_testz00_3865)
{ /* Llib/sparql.scm 111 */
BgL_res2208z00_1817 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1811); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2208z00_1817 = ((bool_t)0); } } } 
BgL_testz00_3864 = BgL_res2208z00_1817; } 
if(BgL_testz00_3864)
{ 

goto BgL_zc3anonymousza31425ze3z83_244;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_245; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_246)==((long)32)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_279 = BgL_inputzd2portzd2_242; 
BgL_lastzd2matchzd2_280 = BgL_newzd2matchzd2_245; 
BgL_zc3anonymousza31447ze3z83_281:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_282;
{ /* Llib/sparql.scm 111 */
int BgL_res2236z00_1889;
BgL_res2236z00_1889 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_279); 
BgL_currentzd2charzd2_282 = BgL_res2236z00_1889; } 
if(
(
(long)(BgL_currentzd2charzd2_282)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3875;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2240z00_1899;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1893;
BgL_inputzd2portzd2_1893 = BgL_inputzd2portzd2_279; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3876;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2238z00_1896;
BgL_res2238z00_1896 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1893); 
BgL_testz00_3876 = BgL_res2238z00_1896; } 
if(BgL_testz00_3876)
{ /* Llib/sparql.scm 111 */
BgL_res2240z00_1899 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1893); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2240z00_1899 = ((bool_t)0); } } } 
BgL_testz00_3875 = BgL_res2240z00_1899; } 
if(BgL_testz00_3875)
{ 

goto BgL_zc3anonymousza31447ze3z83_281;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_280; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_282)==((long)69)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_495 = BgL_inputzd2portzd2_279; 
BgL_lastzd2matchzd2_496 = BgL_lastzd2matchzd2_280; 
BgL_zc3anonymousza31577ze3z83_497:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_498;
{ /* Llib/sparql.scm 111 */
int BgL_res2404z00_2327;
BgL_res2404z00_2327 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_495); 
BgL_currentzd2charzd2_498 = BgL_res2404z00_2327; } 
if(
(
(long)(BgL_currentzd2charzd2_498)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3886;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2408z00_2337;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2331;
BgL_inputzd2portzd2_2331 = BgL_inputzd2portzd2_495; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3887;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2406z00_2334;
BgL_res2406z00_2334 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2331); 
BgL_testz00_3887 = BgL_res2406z00_2334; } 
if(BgL_testz00_3887)
{ /* Llib/sparql.scm 111 */
BgL_res2408z00_2337 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2331); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2408z00_2337 = ((bool_t)0); } } } 
BgL_testz00_3886 = BgL_res2408z00_2337; } 
if(BgL_testz00_3886)
{ 

goto BgL_zc3anonymousza31577ze3z83_497;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_496; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_498)==((long)109)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_502 = BgL_inputzd2portzd2_495; 
BgL_lastzd2matchzd2_503 = BgL_lastzd2matchzd2_496; 
BgL_zc3anonymousza31581ze3z83_504:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_505;
{ /* Llib/sparql.scm 111 */
int BgL_res2410z00_2342;
BgL_res2410z00_2342 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_502); 
BgL_currentzd2charzd2_505 = BgL_res2410z00_2342; } 
if(
(
(long)(BgL_currentzd2charzd2_505)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3897;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2414z00_2352;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2346;
BgL_inputzd2portzd2_2346 = BgL_inputzd2portzd2_502; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3898;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2412z00_2349;
BgL_res2412z00_2349 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2346); 
BgL_testz00_3898 = BgL_res2412z00_2349; } 
if(BgL_testz00_3898)
{ /* Llib/sparql.scm 111 */
BgL_res2414z00_2352 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2346); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2414z00_2352 = ((bool_t)0); } } } 
BgL_testz00_3897 = BgL_res2414z00_2352; } 
if(BgL_testz00_3897)
{ 

goto BgL_zc3anonymousza31581ze3z83_504;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_503; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_505)==((long)112)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_509 = BgL_inputzd2portzd2_502; 
BgL_lastzd2matchzd2_510 = BgL_lastzd2matchzd2_503; 
BgL_zc3anonymousza31585ze3z83_511:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_512;
{ /* Llib/sparql.scm 111 */
int BgL_res2416z00_2357;
BgL_res2416z00_2357 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_509); 
BgL_currentzd2charzd2_512 = BgL_res2416z00_2357; } 
if(
(
(long)(BgL_currentzd2charzd2_512)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3908;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2420z00_2367;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2361;
BgL_inputzd2portzd2_2361 = BgL_inputzd2portzd2_509; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3909;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2418z00_2364;
BgL_res2418z00_2364 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2361); 
BgL_testz00_3909 = BgL_res2418z00_2364; } 
if(BgL_testz00_3909)
{ /* Llib/sparql.scm 111 */
BgL_res2420z00_2367 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2361); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2420z00_2367 = ((bool_t)0); } } } 
BgL_testz00_3908 = BgL_res2420z00_2367; } 
if(BgL_testz00_3908)
{ 

goto BgL_zc3anonymousza31585ze3z83_511;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_510; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_512)==((long)116)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_286 = BgL_inputzd2portzd2_509; 
BgL_lastzd2matchzd2_287 = BgL_lastzd2matchzd2_510; 
BgL_zc3anonymousza31451ze3z83_288:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_289;
{ /* Llib/sparql.scm 111 */
int BgL_res2242z00_1904;
BgL_res2242z00_1904 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_286); 
BgL_currentzd2charzd2_289 = BgL_res2242z00_1904; } 
if(
(
(long)(BgL_currentzd2charzd2_289)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3919;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2246z00_1914;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1908;
BgL_inputzd2portzd2_1908 = BgL_inputzd2portzd2_286; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3920;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2244z00_1911;
BgL_res2244z00_1911 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1908); 
BgL_testz00_3920 = BgL_res2244z00_1911; } 
if(BgL_testz00_3920)
{ /* Llib/sparql.scm 111 */
BgL_res2246z00_1914 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1908); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2246z00_1914 = ((bool_t)0); } } } 
BgL_testz00_3919 = BgL_res2246z00_1914; } 
if(BgL_testz00_3919)
{ 

goto BgL_zc3anonymousza31451ze3z83_288;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_287; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_289)==((long)121)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_516 = BgL_inputzd2portzd2_286; 
BgL_lastzd2matchzd2_517 = BgL_lastzd2matchzd2_287; 
BgL_zc3anonymousza31590ze3z83_518:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_519;
{ /* Llib/sparql.scm 111 */
int BgL_res2422z00_2372;
BgL_res2422z00_2372 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_516); 
BgL_currentzd2charzd2_519 = BgL_res2422z00_2372; } 
if(
(
(long)(BgL_currentzd2charzd2_519)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3930;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2426z00_2382;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2376;
BgL_inputzd2portzd2_2376 = BgL_inputzd2portzd2_516; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3931;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2424z00_2379;
BgL_res2424z00_2379 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2376); 
BgL_testz00_3931 = BgL_res2424z00_2379; } 
if(BgL_testz00_3931)
{ /* Llib/sparql.scm 111 */
BgL_res2426z00_2382 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2376); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2426z00_2382 = ((bool_t)0); } } } 
BgL_testz00_3930 = BgL_res2426z00_2382; } 
if(BgL_testz00_3930)
{ 

goto BgL_zc3anonymousza31590ze3z83_518;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_517; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_519)==((long)32)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_293 = BgL_inputzd2portzd2_516; 
BgL_lastzd2matchzd2_294 = BgL_lastzd2matchzd2_517; 
BgL_zc3anonymousza31456ze3z83_295:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_296;
{ /* Llib/sparql.scm 111 */
int BgL_res2248z00_1919;
BgL_res2248z00_1919 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_293); 
BgL_currentzd2charzd2_296 = BgL_res2248z00_1919; } 
switch( 
(long)(BgL_currentzd2charzd2_296)) { case ((long)0) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3938;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2251z00_1926;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1920;
BgL_inputzd2portzd2_1920 = BgL_inputzd2portzd2_293; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3939;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2249z00_1923;
BgL_res2249z00_1923 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1920); 
BgL_testz00_3939 = BgL_res2249z00_1923; } 
if(BgL_testz00_3939)
{ /* Llib/sparql.scm 111 */
BgL_res2251z00_1926 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1920); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2251z00_1926 = ((bool_t)0); } } } 
BgL_testz00_3938 = BgL_res2251z00_1926; } 
if(BgL_testz00_3938)
{ 

goto BgL_zc3anonymousza31456ze3z83_295;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_294; } } break;case ((long)84) : 

BgL_inputzd2portzd2_308 = BgL_inputzd2portzd2_293; 
BgL_lastzd2matchzd2_309 = BgL_lastzd2matchzd2_294; 
BgL_zc3anonymousza31463ze3z83_310:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_311;
{ /* Llib/sparql.scm 111 */
int BgL_res2259z00_1948;
BgL_res2259z00_1948 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_308); 
BgL_currentzd2charzd2_311 = BgL_res2259z00_1948; } 
if(
(
(long)(BgL_currentzd2charzd2_311)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3946;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2263z00_1958;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1952;
BgL_inputzd2portzd2_1952 = BgL_inputzd2portzd2_308; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3947;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2261z00_1955;
BgL_res2261z00_1955 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1952); 
BgL_testz00_3947 = BgL_res2261z00_1955; } 
if(BgL_testz00_3947)
{ /* Llib/sparql.scm 111 */
BgL_res2263z00_1958 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1952); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2263z00_1958 = ((bool_t)0); } } } 
BgL_testz00_3946 = BgL_res2263z00_1958; } 
if(BgL_testz00_3946)
{ 

goto BgL_zc3anonymousza31463ze3z83_310;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_309; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_311)==((long)85)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_315 = BgL_inputzd2portzd2_308; 
BgL_lastzd2matchzd2_316 = BgL_lastzd2matchzd2_309; 
BgL_zc3anonymousza31468ze3z83_317:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_318;
{ /* Llib/sparql.scm 111 */
int BgL_res2265z00_1963;
BgL_res2265z00_1963 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_315); 
BgL_currentzd2charzd2_318 = BgL_res2265z00_1963; } 
if(
(
(long)(BgL_currentzd2charzd2_318)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3957;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2269z00_1973;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1967;
BgL_inputzd2portzd2_1967 = BgL_inputzd2portzd2_315; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3958;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2267z00_1970;
BgL_res2267z00_1970 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1967); 
BgL_testz00_3958 = BgL_res2267z00_1970; } 
if(BgL_testz00_3958)
{ /* Llib/sparql.scm 111 */
BgL_res2269z00_1973 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1967); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2269z00_1973 = ((bool_t)0); } } } 
BgL_testz00_3957 = BgL_res2269z00_1973; } 
if(BgL_testz00_3957)
{ 

goto BgL_zc3anonymousza31468ze3z83_317;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_316; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_318)==((long)82)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_523 = BgL_inputzd2portzd2_315; 
BgL_lastzd2matchzd2_524 = BgL_lastzd2matchzd2_316; 
BgL_zc3anonymousza31594ze3z83_525:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_526;
{ /* Llib/sparql.scm 111 */
int BgL_res2428z00_2387;
BgL_res2428z00_2387 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_523); 
BgL_currentzd2charzd2_526 = BgL_res2428z00_2387; } 
if(
(
(long)(BgL_currentzd2charzd2_526)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3968;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2432z00_2397;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2391;
BgL_inputzd2portzd2_2391 = BgL_inputzd2portzd2_523; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3969;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2430z00_2394;
BgL_res2430z00_2394 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2391); 
BgL_testz00_3969 = BgL_res2430z00_2394; } 
if(BgL_testz00_3969)
{ /* Llib/sparql.scm 111 */
BgL_res2432z00_2397 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2391); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2432z00_2397 = ((bool_t)0); } } } 
BgL_testz00_3968 = BgL_res2432z00_2397; } 
if(BgL_testz00_3968)
{ 

goto BgL_zc3anonymousza31594ze3z83_525;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_524; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_526)==((long)84)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_322 = BgL_inputzd2portzd2_523; 
BgL_lastzd2matchzd2_323 = BgL_lastzd2matchzd2_524; 
BgL_zc3anonymousza31472ze3z83_324:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_325;
{ /* Llib/sparql.scm 111 */
int BgL_res2271z00_1978;
BgL_res2271z00_1978 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_322); 
BgL_currentzd2charzd2_325 = BgL_res2271z00_1978; } 
if(
(
(long)(BgL_currentzd2charzd2_325)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3979;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2275z00_1988;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1982;
BgL_inputzd2portzd2_1982 = BgL_inputzd2portzd2_322; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3980;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2273z00_1985;
BgL_res2273z00_1985 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1982); 
BgL_testz00_3980 = BgL_res2273z00_1985; } 
if(BgL_testz00_3980)
{ /* Llib/sparql.scm 111 */
BgL_res2275z00_1988 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1982); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2275z00_1988 = ((bool_t)0); } } } 
BgL_testz00_3979 = BgL_res2275z00_1988; } 
if(BgL_testz00_3979)
{ 

goto BgL_zc3anonymousza31472ze3z83_324;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_323; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_325)==((long)76)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_530 = BgL_inputzd2portzd2_322; 
BgL_lastzd2matchzd2_531 = BgL_lastzd2matchzd2_323; 
BgL_zc3anonymousza31599ze3z83_532:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_533;
{ /* Llib/sparql.scm 111 */
int BgL_res2434z00_2402;
BgL_res2434z00_2402 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_530); 
BgL_currentzd2charzd2_533 = BgL_res2434z00_2402; } 
if(
(
(long)(BgL_currentzd2charzd2_533)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3990;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2438z00_2412;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2406;
BgL_inputzd2portzd2_2406 = BgL_inputzd2portzd2_530; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_3991;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2436z00_2409;
BgL_res2436z00_2409 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2406); 
BgL_testz00_3991 = BgL_res2436z00_2409; } 
if(BgL_testz00_3991)
{ /* Llib/sparql.scm 111 */
BgL_res2438z00_2412 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2406); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2438z00_2412 = ((bool_t)0); } } } 
BgL_testz00_3990 = BgL_res2438z00_2412; } 
if(BgL_testz00_3990)
{ 

goto BgL_zc3anonymousza31599ze3z83_532;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_531; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_533)==((long)69)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2418;
{ /* Llib/sparql.scm 111 */
long BgL_res2440z00_2420;
BgL_res2440z00_2420 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_530); BgL_res2440z00_2420; } 
BgL_newzd2matchzd2_2418 = ((long)7); 
BgL_matchz00_671 = BgL_newzd2matchzd2_2418; }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_531; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_323; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_524; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_316; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_309; } } } break;case ((long)78) : 

BgL_inputzd2portzd2_301 = BgL_inputzd2portzd2_293; 
BgL_lastzd2matchzd2_302 = BgL_lastzd2matchzd2_294; 
BgL_zc3anonymousza31459ze3z83_303:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_304;
{ /* Llib/sparql.scm 111 */
int BgL_res2252z00_1928;
BgL_res2252z00_1928 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_301); 
BgL_currentzd2charzd2_304 = BgL_res2252z00_1928; } 
if(
(
(long)(BgL_currentzd2charzd2_304)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4002;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2256z00_1938;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1932;
BgL_inputzd2portzd2_1932 = BgL_inputzd2portzd2_301; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4003;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2254z00_1935;
BgL_res2254z00_1935 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1932); 
BgL_testz00_4003 = BgL_res2254z00_1935; } 
if(BgL_testz00_4003)
{ /* Llib/sparql.scm 111 */
BgL_res2256z00_1938 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1932); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2256z00_1938 = ((bool_t)0); } } } 
BgL_testz00_4002 = BgL_res2256z00_1938; } 
if(BgL_testz00_4002)
{ 

goto BgL_zc3anonymousza31459ze3z83_303;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_302; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_304)==((long)84)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_1944;
{ /* Llib/sparql.scm 111 */
long BgL_res2258z00_1946;
BgL_res2258z00_1946 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_301); BgL_res2258z00_1946; } 
BgL_newzd2matchzd2_1944 = ((long)6); 
BgL_matchz00_671 = BgL_newzd2matchzd2_1944; }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_302; } } } break;
default: 
BgL_matchz00_671 = BgL_lastzd2matchzd2_294; } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_517; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_287; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_510; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_503; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_496; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_280; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_245; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)34)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_368 = BgL_inputzd2portzd2_348; 
BgL_lastzd2matchzd2_369 = BgL_lastzd2matchzd2_349; 
BgL_zc3anonymousza31508ze3z83_370:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_371;
{ /* Llib/sparql.scm 111 */
long BgL_res2314z00_2099;
BgL_res2314z00_2099 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_368); BgL_res2314z00_2099; } 
BgL_newzd2matchzd2_371 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_372;
{ /* Llib/sparql.scm 111 */
int BgL_res2315z00_2101;
BgL_res2315z00_2101 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_368); 
BgL_currentzd2charzd2_372 = BgL_res2315z00_2101; } 
switch( 
(long)(BgL_currentzd2charzd2_372)) { case ((long)0) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4017;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2316z00_2103;
BgL_res2316z00_2103 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_368); 
BgL_testz00_4017 = BgL_res2316z00_2103; } 
if(BgL_testz00_4017)
{ /* Llib/sparql.scm 111 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_368))
{ 

goto BgL_zc3anonymousza31508ze3z83_370;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_371; } }  else 
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_386 = BgL_inputzd2portzd2_368; 
BgL_lastzd2matchzd2_387 = BgL_newzd2matchzd2_371; 
BgL_zc3anonymousza31518ze3z83_388:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_389;
{ /* Llib/sparql.scm 111 */
int BgL_res2324z00_2124;
BgL_res2324z00_2124 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_386); 
BgL_currentzd2charzd2_389 = BgL_res2324z00_2124; } 
switch( 
(long)(BgL_currentzd2charzd2_389)) { case ((long)0) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4022;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2325z00_2126;
BgL_res2325z00_2126 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_386); 
BgL_testz00_4022 = BgL_res2325z00_2126; } 
if(BgL_testz00_4022)
{ /* Llib/sparql.scm 111 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_386))
{ 

goto BgL_zc3anonymousza31518ze3z83_388;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_387; } }  else 
{ 

goto BgL_zc3anonymousza31518ze3z83_388;} } break;case ((long)92) : 

BgL_inputzd2portzd2_559 = BgL_inputzd2portzd2_386; 
BgL_lastzd2matchzd2_560 = BgL_lastzd2matchzd2_387; 
BgL_zc3anonymousza31614ze3z83_561:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_562;
{ /* Llib/sparql.scm 111 */
int BgL_res2455z00_2458;
BgL_res2455z00_2458 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_559); 
BgL_currentzd2charzd2_562 = BgL_res2455z00_2458; } 
if(
(
(long)(BgL_currentzd2charzd2_562)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4030;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2457z00_2463;
BgL_res2457z00_2463 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_559); 
BgL_testz00_4030 = BgL_res2457z00_2463; } 
if(BgL_testz00_4030)
{ /* Llib/sparql.scm 111 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_559))
{ 

goto BgL_zc3anonymousza31614ze3z83_561;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_560; } }  else 
{ 
long BgL_lastzd2matchzd2_4035;obj_t BgL_inputzd2portzd2_4034;
BgL_inputzd2portzd2_4034 = BgL_inputzd2portzd2_559; 
BgL_lastzd2matchzd2_4035 = BgL_lastzd2matchzd2_560; 
BgL_lastzd2matchzd2_387 = BgL_lastzd2matchzd2_4035; 
BgL_inputzd2portzd2_386 = BgL_inputzd2portzd2_4034; 
goto BgL_zc3anonymousza31518ze3z83_388;} }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_562)==((long)10)))
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_560; }  else 
{ 
long BgL_lastzd2matchzd2_4040;obj_t BgL_inputzd2portzd2_4039;
BgL_inputzd2portzd2_4039 = BgL_inputzd2portzd2_559; 
BgL_lastzd2matchzd2_4040 = BgL_lastzd2matchzd2_560; 
BgL_lastzd2matchzd2_387 = BgL_lastzd2matchzd2_4040; 
BgL_inputzd2portzd2_386 = BgL_inputzd2portzd2_4039; 
goto BgL_zc3anonymousza31518ze3z83_388;} } } break;case ((long)34) : 

BgL_inputzd2portzd2_413 = BgL_inputzd2portzd2_386; 
BgL_lastzd2matchzd2_414 = BgL_lastzd2matchzd2_387; 
BgL_zc3anonymousza31534ze3z83_415:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_416;
{ /* Llib/sparql.scm 111 */
long BgL_res2343z00_2171;
BgL_res2343z00_2171 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_413); BgL_res2343z00_2171; } 
BgL_newzd2matchzd2_416 = ((long)4); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_417;
{ /* Llib/sparql.scm 111 */
int BgL_res2344z00_2173;
BgL_res2344z00_2173 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_413); 
BgL_currentzd2charzd2_417 = BgL_res2344z00_2173; } 
switch( 
(long)(BgL_currentzd2charzd2_417)) { case ((long)0) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4043;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2347z00_2180;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2174;
BgL_inputzd2portzd2_2174 = BgL_inputzd2portzd2_413; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4044;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2345z00_2177;
BgL_res2345z00_2177 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2174); 
BgL_testz00_4044 = BgL_res2345z00_2177; } 
if(BgL_testz00_4044)
{ /* Llib/sparql.scm 111 */
BgL_res2347z00_2180 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2174); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2347z00_2180 = ((bool_t)0); } } } 
BgL_testz00_4043 = BgL_res2347z00_2180; } 
if(BgL_testz00_4043)
{ 

goto BgL_zc3anonymousza31534ze3z83_415;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_416; } } break;case ((long)94) : 

BgL_inputzd2portzd2_545 = BgL_inputzd2portzd2_413; 
BgL_lastzd2matchzd2_546 = BgL_newzd2matchzd2_416; 
BgL_zc3anonymousza31605ze3z83_547:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_548;
{ /* Llib/sparql.scm 111 */
int BgL_res2443z00_2428;
BgL_res2443z00_2428 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_545); 
BgL_currentzd2charzd2_548 = BgL_res2443z00_2428; } 
if(
(
(long)(BgL_currentzd2charzd2_548)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4051;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2447z00_2438;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2432;
BgL_inputzd2portzd2_2432 = BgL_inputzd2portzd2_545; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4052;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2445z00_2435;
BgL_res2445z00_2435 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2432); 
BgL_testz00_4052 = BgL_res2445z00_2435; } 
if(BgL_testz00_4052)
{ /* Llib/sparql.scm 111 */
BgL_res2447z00_2438 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2432); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2447z00_2438 = ((bool_t)0); } } } 
BgL_testz00_4051 = BgL_res2447z00_2438; } 
if(BgL_testz00_4051)
{ 

goto BgL_zc3anonymousza31605ze3z83_547;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_546; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_548)==((long)94)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_552 = BgL_inputzd2portzd2_545; 
BgL_lastzd2matchzd2_553 = BgL_lastzd2matchzd2_546; 
BgL_zc3anonymousza31609ze3z83_554:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_555;
{ /* Llib/sparql.scm 111 */
int BgL_res2449z00_2443;
BgL_res2449z00_2443 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_552); 
BgL_currentzd2charzd2_555 = BgL_res2449z00_2443; } 
if(
(
(long)(BgL_currentzd2charzd2_555)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4062;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2453z00_2453;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2447;
BgL_inputzd2portzd2_2447 = BgL_inputzd2portzd2_552; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4063;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2451z00_2450;
BgL_res2451z00_2450 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2447); 
BgL_testz00_4063 = BgL_res2451z00_2450; } 
if(BgL_testz00_4063)
{ /* Llib/sparql.scm 111 */
BgL_res2453z00_2453 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2447); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2453z00_2453 = ((bool_t)0); } } } 
BgL_testz00_4062 = BgL_res2453z00_2453; } 
if(BgL_testz00_4062)
{ 

goto BgL_zc3anonymousza31609ze3z83_554;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_553; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_555)==((long)60)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_378 = BgL_inputzd2portzd2_552; 
BgL_lastzd2matchzd2_379 = BgL_lastzd2matchzd2_553; 
BgL_zc3anonymousza31512ze3z83_380:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_381;
{ /* Llib/sparql.scm 111 */
int BgL_res2318z00_2107;
BgL_res2318z00_2107 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_378); 
BgL_currentzd2charzd2_381 = BgL_res2318z00_2107; } 
if(
(
(long)(BgL_currentzd2charzd2_381)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4073;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2320z00_2112;
BgL_res2320z00_2112 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_378); 
BgL_testz00_4073 = BgL_res2320z00_2112; } 
if(BgL_testz00_4073)
{ /* Llib/sparql.scm 111 */
if(
rgc_fill_buffer(BgL_inputzd2portzd2_378))
{ 

goto BgL_zc3anonymousza31512ze3z83_380;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_379; } }  else 
{ 

goto BgL_zc3anonymousza31512ze3z83_380;} }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_381)==((long)62)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2120;
{ /* Llib/sparql.scm 111 */
long BgL_res2323z00_2122;
BgL_res2323z00_2122 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_378); BgL_res2323z00_2122; } 
BgL_newzd2matchzd2_2120 = ((long)4); 
BgL_matchz00_671 = BgL_newzd2matchzd2_2120; }  else 
{ 

goto BgL_zc3anonymousza31512ze3z83_380;} } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_553; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_lastzd2matchzd2_546; } } } break;case ((long)64) : 

BgL_inputzd2portzd2_422 = BgL_inputzd2portzd2_413; 
BgL_lastzd2matchzd2_423 = BgL_newzd2matchzd2_416; 
BgL_zc3anonymousza31537ze3z83_424:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_425;
{ /* Llib/sparql.scm 111 */
long BgL_res2348z00_2182;
BgL_res2348z00_2182 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_422); BgL_res2348z00_2182; } 
BgL_newzd2matchzd2_425 = ((long)4); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_426;
{ /* Llib/sparql.scm 111 */
int BgL_res2349z00_2184;
BgL_res2349z00_2184 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_422); 
BgL_currentzd2charzd2_426 = BgL_res2349z00_2184; } 
if(
(
(long)(BgL_currentzd2charzd2_426)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4086;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2353z00_2194;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2188;
BgL_inputzd2portzd2_2188 = BgL_inputzd2portzd2_422; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4087;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2351z00_2191;
BgL_res2351z00_2191 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2188); 
BgL_testz00_4087 = BgL_res2351z00_2191; } 
if(BgL_testz00_4087)
{ /* Llib/sparql.scm 111 */
BgL_res2353z00_2194 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2188); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2353z00_2194 = ((bool_t)0); } } } 
BgL_testz00_4086 = BgL_res2353z00_2194; } 
if(BgL_testz00_4086)
{ 

goto BgL_zc3anonymousza31537ze3z83_424;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_425; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4090;
if(
(
(long)(BgL_currentzd2charzd2_426)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4090 = 
(
(long)(BgL_currentzd2charzd2_426)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4090 = ((bool_t)0)
; } 
if(BgL_testz00_4090)
{ 
long BgL_lastzd2matchzd2_4096;
BgL_lastzd2matchzd2_4096 = BgL_newzd2matchzd2_425; 
BgL_lastzd2matchzd2_423 = BgL_lastzd2matchzd2_4096; 
goto BgL_zc3anonymousza31537ze3z83_424;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_425; } } } } break;
default: 
BgL_matchz00_671 = BgL_newzd2matchzd2_416; } } } break;
default: 
{ 

goto BgL_zc3anonymousza31518ze3z83_388;} } } } } break;case ((long)92) : 

{ 
long BgL_lastzd2matchzd2_4102;obj_t BgL_inputzd2portzd2_4101;
BgL_inputzd2portzd2_4101 = BgL_inputzd2portzd2_368; 
BgL_lastzd2matchzd2_4102 = BgL_newzd2matchzd2_371; 
BgL_lastzd2matchzd2_560 = BgL_lastzd2matchzd2_4102; 
BgL_inputzd2portzd2_559 = BgL_inputzd2portzd2_4101; 
goto BgL_zc3anonymousza31614ze3z83_561;} break;case ((long)34) : 

{ 
long BgL_lastzd2matchzd2_4104;obj_t BgL_inputzd2portzd2_4103;
BgL_inputzd2portzd2_4103 = BgL_inputzd2portzd2_368; 
BgL_lastzd2matchzd2_4104 = BgL_newzd2matchzd2_371; 
BgL_lastzd2matchzd2_414 = BgL_lastzd2matchzd2_4104; 
BgL_inputzd2portzd2_413 = BgL_inputzd2portzd2_4103; 
goto BgL_zc3anonymousza31534ze3z83_415;} break;
default: 
{ 
long BgL_lastzd2matchzd2_4106;obj_t BgL_inputzd2portzd2_4105;
BgL_inputzd2portzd2_4105 = BgL_inputzd2portzd2_368; 
BgL_lastzd2matchzd2_4106 = BgL_newzd2matchzd2_371; 
BgL_lastzd2matchzd2_387 = BgL_lastzd2matchzd2_4106; 
BgL_inputzd2portzd2_386 = BgL_inputzd2portzd2_4105; 
goto BgL_zc3anonymousza31518ze3z83_388;} } } } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4109;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4110;
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)10)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4110 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4110 = 
(
(long)(BgL_currentzd2charzd2_351)==((long)9))
; } 
if(BgL_testz00_4110)
{ /* Llib/sparql.scm 111 */
BgL_testz00_4109 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_351)==((long)13)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4109 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4109 = 
(
(long)(BgL_currentzd2charzd2_351)==((long)32))
; } } } 
if(BgL_testz00_4109)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_329 = BgL_inputzd2portzd2_348; 
BgL_lastzd2matchzd2_330 = BgL_lastzd2matchzd2_349; 
BgL_zc3anonymousza31477ze3z83_331:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_332;
{ /* Llib/sparql.scm 111 */
long BgL_res2277z00_1993;
BgL_res2277z00_1993 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_329); BgL_res2277z00_1993; } 
BgL_newzd2matchzd2_332 = ((long)0); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_333;
{ /* Llib/sparql.scm 111 */
int BgL_res2278z00_1995;
BgL_res2278z00_1995 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_329); 
BgL_currentzd2charzd2_333 = BgL_res2278z00_1995; } 
if(
(
(long)(BgL_currentzd2charzd2_333)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4126;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2282z00_2005;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1999;
BgL_inputzd2portzd2_1999 = BgL_inputzd2portzd2_329; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4127;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2280z00_2002;
BgL_res2280z00_2002 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1999); 
BgL_testz00_4127 = BgL_res2280z00_2002; } 
if(BgL_testz00_4127)
{ /* Llib/sparql.scm 111 */
BgL_res2282z00_2005 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1999); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2282z00_2005 = ((bool_t)0); } } } 
BgL_testz00_4126 = BgL_res2282z00_2005; } 
if(BgL_testz00_4126)
{ 

goto BgL_zc3anonymousza31477ze3z83_331;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_332; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4130;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4131;
if(
(
(long)(BgL_currentzd2charzd2_333)==((long)10)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4131 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4131 = 
(
(long)(BgL_currentzd2charzd2_333)==((long)9))
; } 
if(BgL_testz00_4131)
{ /* Llib/sparql.scm 111 */
BgL_testz00_4130 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_333)==((long)13)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4130 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4130 = 
(
(long)(BgL_currentzd2charzd2_333)==((long)32))
; } } } 
if(BgL_testz00_4130)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_575 = BgL_inputzd2portzd2_329; 
BgL_lastzd2matchzd2_576 = BgL_newzd2matchzd2_332; 
BgL_zc3anonymousza31624ze3z83_577:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_578;
{ /* Llib/sparql.scm 111 */
long BgL_res2466z00_2487;
BgL_res2466z00_2487 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_575); BgL_res2466z00_2487; } 
BgL_newzd2matchzd2_578 = ((long)0); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_579;
{ /* Llib/sparql.scm 111 */
int BgL_res2467z00_2489;
BgL_res2467z00_2489 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_575); 
BgL_currentzd2charzd2_579 = BgL_res2467z00_2489; } 
if(
(
(long)(BgL_currentzd2charzd2_579)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4147;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2471z00_2499;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2493;
BgL_inputzd2portzd2_2493 = BgL_inputzd2portzd2_575; 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4148;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2469z00_2496;
BgL_res2469z00_2496 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2493); 
BgL_testz00_4148 = BgL_res2469z00_2496; } 
if(BgL_testz00_4148)
{ /* Llib/sparql.scm 111 */
BgL_res2471z00_2499 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2493); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2471z00_2499 = ((bool_t)0); } } } 
BgL_testz00_4147 = BgL_res2471z00_2499; } 
if(BgL_testz00_4147)
{ 

goto BgL_zc3anonymousza31624ze3z83_577;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_578; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4151;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4152;
if(
(
(long)(BgL_currentzd2charzd2_579)==((long)10)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4152 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4152 = 
(
(long)(BgL_currentzd2charzd2_579)==((long)9))
; } 
if(BgL_testz00_4152)
{ /* Llib/sparql.scm 111 */
BgL_testz00_4151 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_579)==((long)13)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4151 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4151 = 
(
(long)(BgL_currentzd2charzd2_579)==((long)32))
; } } } 
if(BgL_testz00_4151)
{ 
long BgL_lastzd2matchzd2_4163;
BgL_lastzd2matchzd2_4163 = BgL_newzd2matchzd2_578; 
BgL_lastzd2matchzd2_576 = BgL_lastzd2matchzd2_4163; 
goto BgL_zc3anonymousza31624ze3z83_577;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_578; } } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_671 = BgL_newzd2matchzd2_332; } } } } }  else 
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2095;
{ /* Llib/sparql.scm 111 */
long BgL_res2313z00_2097;
BgL_res2313z00_2097 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_348); BgL_res2313z00_2097; } 
BgL_newzd2matchzd2_2095 = ((long)9); 
BgL_matchz00_671 = BgL_newzd2matchzd2_2095; } } } } } } } } } } } 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_160); 
switch( BgL_matchz00_671) { case ((long)9) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4166;
{ /* Llib/sparql.scm 111 */
long BgL_arg1731z00_661;
{ /* Llib/sparql.scm 111 */
long BgL_res2491z00_2554;
BgL_res2491z00_2554 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_160); 
BgL_arg1731z00_661 = BgL_res2491z00_2554; } 
BgL_testz00_4166 = 
(BgL_arg1731z00_661==((long)0)); } 
if(BgL_testz00_4166)
{ /* Llib/sparql.scm 111 */
return BCNST(256);}  else 
{ /* Llib/sparql.scm 111 */
unsigned char BgL_res2493z00_2559;
BgL_res2493z00_2559 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_160); 
return 
BCHAR(BgL_res2493z00_2559);} } break;case ((long)8) : 

{ /* Llib/sparql.scm 124 */
obj_t BgL_arg1739z00_675;
{ /* Llib/sparql.scm 124 */
obj_t BgL_res2497z00_2570;
{ /* Llib/sparql.scm 124 */
long BgL_arg1652z00_2563;
{ /* Llib/sparql.scm 124 */
long BgL_res2495z00_2565;
BgL_res2495z00_2565 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_160); 
BgL_arg1652z00_2563 = BgL_res2495z00_2565; } 
BgL_res2497z00_2570 = 
rgc_buffer_substring(BgL_inputzd2portzd2_160, ((long)0), BgL_arg1652z00_2563); } 
BgL_arg1739z00_675 = BgL_res2497z00_2570; } 
return 
MAKE_PAIR(BGl_symbol2637z00zzsparqlz00, BgL_arg1739z00_675);} break;case ((long)7) : 

return BGl_symbol2634z00zzsparqlz00;break;case ((long)6) : 

return BGl_symbol2634z00zzsparqlz00;break;case ((long)5) : 

return BGl_symbol2649z00zzsparqlz00;break;case ((long)4) : 

{ /* Llib/sparql.scm 120 */
obj_t BgL_arg1740z00_676;
{ /* Llib/sparql.scm 120 */
obj_t BgL_res2500z00_2578;
{ /* Llib/sparql.scm 120 */
long BgL_arg1652z00_2571;
{ /* Llib/sparql.scm 120 */
long BgL_res2498z00_2573;
BgL_res2498z00_2573 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_160); 
BgL_arg1652z00_2571 = BgL_res2498z00_2573; } 
BgL_res2500z00_2578 = 
rgc_buffer_substring(BgL_inputzd2portzd2_160, ((long)0), BgL_arg1652z00_2571); } 
BgL_arg1740z00_676 = BgL_res2500z00_2578; } 
return 
MAKE_PAIR(BGl_symbol2660z00zzsparqlz00, BgL_arg1740z00_676);} break;case ((long)3) : 

{ /* Llib/sparql.scm 115 */
obj_t BgL_arg1741z00_677;
{ /* Llib/sparql.scm 115 */
obj_t BgL_res2503z00_2586;
{ /* Llib/sparql.scm 115 */
long BgL_arg1652z00_2579;
{ /* Llib/sparql.scm 115 */
long BgL_res2501z00_2581;
BgL_res2501z00_2581 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_160); 
BgL_arg1652z00_2579 = BgL_res2501z00_2581; } 
BgL_res2503z00_2586 = 
rgc_buffer_substring(BgL_inputzd2portzd2_160, ((long)0), BgL_arg1652z00_2579); } 
BgL_arg1741z00_677 = BgL_res2503z00_2586; } 
return 
MAKE_PAIR(BGl_symbol2637z00zzsparqlz00, BgL_arg1741z00_677);} break;case ((long)2) : 

{ /* Llib/sparql.scm 114 */
obj_t BgL_arg1743z00_678;
{ /* Llib/sparql.scm 114 */
obj_t BgL_res2506z00_2594;
{ /* Llib/sparql.scm 114 */
long BgL_arg1652z00_2587;
{ /* Llib/sparql.scm 114 */
long BgL_res2504z00_2589;
BgL_res2504z00_2589 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_160); 
BgL_arg1652z00_2587 = BgL_res2504z00_2589; } 
BgL_res2506z00_2594 = 
rgc_buffer_substring(BgL_inputzd2portzd2_160, ((long)0), BgL_arg1652z00_2587); } 
BgL_arg1743z00_678 = BgL_res2506z00_2594; } 
return 
MAKE_PAIR(BGl_symbol2637z00zzsparqlz00, BgL_arg1743z00_678);} break;case ((long)1) : 

{ /* Llib/sparql.scm 113 */
obj_t BgL_arg1744z00_679;
{ /* Llib/sparql.scm 113 */
obj_t BgL_res2509z00_2602;
{ /* Llib/sparql.scm 113 */
long BgL_arg1652z00_2595;
{ /* Llib/sparql.scm 113 */
long BgL_res2507z00_2597;
BgL_res2507z00_2597 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_160); 
BgL_arg1652z00_2595 = BgL_res2507z00_2597; } 
BgL_res2509z00_2602 = 
rgc_buffer_substring(BgL_inputzd2portzd2_160, ((long)0), BgL_arg1652z00_2595); } 
BgL_arg1744z00_679 = BgL_res2509z00_2602; } 
return 
MAKE_PAIR(BGl_symbol2631z00zzsparqlz00, BgL_arg1744z00_679);} break;case ((long)0) : 

goto BgL_zc3anonymousza31737ze3z83_670;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string2703z00zzsparqlz00, BGl_string2704z00zzsparqlz00, 
BINT(BgL_matchz00_671));} } } } } 
}



/* &__reduce */
obj_t BGl_z62__reducez62zzsparqlz00(obj_t BgL_envz00_3283, obj_t BgL_nz00_3285, obj_t BgL___stackz00_3286, obj_t BgL___spz00_3287)
{ AN_OBJECT;
{ /* Llib/sparql.scm 91 */
{ /* Llib/sparql.scm 91 */
obj_t BgL___gotozd2tablezd2_3284;
BgL___gotozd2tablezd2_3284 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3283, 
(int)(((long)0)))); 
{ 
obj_t BgL_nz00_79;obj_t BgL___stackz00_80;obj_t BgL___spz00_81;
BgL_nz00_79 = BgL_nz00_3285; 
BgL___stackz00_80 = BgL___stackz00_3286; 
BgL___spz00_81 = BgL___spz00_3287; 
if(
INTEGERP(BgL_nz00_79))
{ /* Llib/sparql.scm 91 */
switch( 
(long)CINT(BgL_nz00_79)) { case ((long)1) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_tripletsz00_86;
{ /* Llib/sparql.scm 91 */
long BgL_arg1173z00_88;
BgL_arg1173z00_88 = 
(
(long)CINT(BgL___spz00_81)-((long)3)); 
BgL_tripletsz00_86 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1173z00_88)); } 
return BgL_tripletsz00_86;} break;case ((long)2) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_tripletz00_90;obj_t BgL_tripletsz00_92;
{ /* Llib/sparql.scm 91 */
long BgL_arg1194z00_95;
BgL_arg1194z00_95 = 
(
(long)CINT(BgL___spz00_81)-((long)5)); 
BgL_tripletz00_90 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1194z00_95)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1198z00_97;
BgL_arg1198z00_97 = 
(
(long)CINT(BgL___spz00_81)-((long)1)); 
BgL_tripletsz00_92 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1198z00_97)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1177z00_93;obj_t BgL_arg1191z00_94;
BgL_arg1177z00_93 = 
(
(long)CINT(BgL___spz00_81)-((long)6)); 
{ /* Llib/sparql.scm 91 */

BgL_arg1191z00_94 = 
MAKE_PAIR(BgL_tripletz00_90, BgL_tripletsz00_92); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1427;
BgL_newzd2catzd2_1427 = BGl_symbol2684z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1430;
BgL_statez00_1430 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1177z00_93)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1431;
BgL_newzd2statezd2_1431 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1427, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1430)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1434;
BgL_newzd2spzd2_1434 = 
(BgL_arg1177z00_93+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1434),BgL_newzd2statezd2_1431); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1435;
BgL_arg1412z00_1435 = 
(BgL_newzd2spzd2_1434-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1435),BgL_arg1191z00_94); } 
return 
BINT(BgL_newzd2spzd2_1434);} } } } } } } break;case ((long)3) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_tripletz00_98;
{ /* Llib/sparql.scm 91 */
long BgL_arg1203z00_103;
BgL_arg1203z00_103 = 
(
(long)CINT(BgL___spz00_81)-((long)3)); 
BgL_tripletz00_98 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1203z00_103)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1200z00_100;obj_t BgL_arg1201z00_101;
BgL_arg1200z00_100 = 
(
(long)CINT(BgL___spz00_81)-((long)4)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 95 */
obj_t BgL_list1202z00_102;
BgL_list1202z00_102 = 
MAKE_PAIR(BgL_tripletz00_98, BNIL); 
BgL_arg1201z00_101 = BgL_list1202z00_102; } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1470;
BgL_newzd2catzd2_1470 = BGl_symbol2684z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1473;
BgL_statez00_1473 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1200z00_100)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1474;
BgL_newzd2statezd2_1474 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1470, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1473)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1477;
BgL_newzd2spzd2_1477 = 
(BgL_arg1200z00_100+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1477),BgL_newzd2statezd2_1474); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1478;
BgL_arg1412z00_1478 = 
(BgL_newzd2spzd2_1477-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1478),BgL_arg1201z00_101); } 
return 
BINT(BgL_newzd2spzd2_1477);} } } } } } } break;case ((long)4) : 

{ /* Llib/sparql.scm 91 */
long BgL_arg1205z00_106;obj_t BgL_arg1206z00_107;
BgL_arg1205z00_106 = 
(
(long)CINT(BgL___spz00_81)-((long)2)); 
{ /* Llib/sparql.scm 91 */

BgL_arg1206z00_107 = BNIL; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1508;
BgL_newzd2catzd2_1508 = BGl_symbol2684z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1511;
BgL_statez00_1511 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1205z00_106)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1512;
BgL_newzd2statezd2_1512 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1508, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1511)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1515;
BgL_newzd2spzd2_1515 = 
(BgL_arg1205z00_106+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1515),BgL_newzd2statezd2_1512); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1516;
BgL_arg1412z00_1516 = 
(BgL_newzd2spzd2_1515-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1516),BgL_arg1206z00_107); } 
return 
BINT(BgL_newzd2spzd2_1515);} } } } } } break;case ((long)5) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_subjectz00_110;obj_t BgL_predicatz00_111;obj_t BgL_objectz00_112;
{ /* Llib/sparql.scm 91 */
long BgL_arg1240z00_118;
BgL_arg1240z00_118 = 
(
(long)CINT(BgL___spz00_81)-((long)5)); 
BgL_subjectz00_110 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1240z00_118)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1241z00_119;
BgL_arg1241z00_119 = 
(
(long)CINT(BgL___spz00_81)-((long)3)); 
BgL_predicatz00_111 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1241z00_119)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1243z00_120;
BgL_arg1243z00_120 = 
(
(long)CINT(BgL___spz00_81)-((long)1)); 
BgL_objectz00_112 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1243z00_120)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1209z00_113;obj_t BgL_arg1210z00_114;
BgL_arg1209z00_113 = 
(
(long)CINT(BgL___spz00_81)-((long)6)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 98 */
obj_t BgL_list1211z00_115;
{ /* Llib/sparql.scm 98 */
obj_t BgL_arg1213z00_116;
{ /* Llib/sparql.scm 98 */
obj_t BgL_arg1214z00_117;
BgL_arg1214z00_117 = 
MAKE_PAIR(BgL_objectz00_112, BNIL); 
BgL_arg1213z00_116 = 
MAKE_PAIR(BgL_predicatz00_111, BgL_arg1214z00_117); } 
BgL_list1211z00_115 = 
MAKE_PAIR(BgL_subjectz00_110, BgL_arg1213z00_116); } 
BgL_arg1210z00_114 = BgL_list1211z00_115; } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1556;
BgL_newzd2catzd2_1556 = BGl_symbol2687z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1559;
BgL_statez00_1559 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1209z00_113)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1560;
BgL_newzd2statezd2_1560 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1556, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1559)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1563;
BgL_newzd2spzd2_1563 = 
(BgL_arg1209z00_113+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1563),BgL_newzd2statezd2_1560); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1564;
BgL_arg1412z00_1564 = 
(BgL_newzd2spzd2_1563-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1564),BgL_arg1210z00_114); } 
return 
BINT(BgL_newzd2spzd2_1563);} } } } } } } break;case ((long)6) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_uriz00_121;
{ /* Llib/sparql.scm 91 */
long BgL_arg1270z00_124;
BgL_arg1270z00_124 = 
(
(long)CINT(BgL___spz00_81)-((long)1)); 
BgL_uriz00_121 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1270z00_124)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1250z00_122;obj_t BgL_arg1252z00_123;
BgL_arg1250z00_122 = 
(
(long)CINT(BgL___spz00_81)-((long)2)); 
{ /* Llib/sparql.scm 91 */

BgL_arg1252z00_123 = BgL_uriz00_121; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1592;
BgL_newzd2catzd2_1592 = BGl_symbol2690z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1595;
BgL_statez00_1595 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1250z00_122)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1596;
BgL_newzd2statezd2_1596 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1592, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1595)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1599;
BgL_newzd2spzd2_1599 = 
(BgL_arg1250z00_122+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1599),BgL_newzd2statezd2_1596); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1600;
BgL_arg1412z00_1600 = 
(BgL_newzd2spzd2_1599-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1600),BgL_arg1252z00_123); } 
return 
BINT(BgL_newzd2spzd2_1599);} } } } } } } break;case ((long)7) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_namednodez00_125;
{ /* Llib/sparql.scm 91 */
long BgL_arg1275z00_128;
BgL_arg1275z00_128 = 
(
(long)CINT(BgL___spz00_81)-((long)1)); 
BgL_namednodez00_125 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1275z00_128)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1271z00_126;obj_t BgL_arg1273z00_127;
BgL_arg1271z00_126 = 
(
(long)CINT(BgL___spz00_81)-((long)2)); 
{ /* Llib/sparql.scm 91 */

BgL_arg1273z00_127 = BgL_namednodez00_125; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1628;
BgL_newzd2catzd2_1628 = BGl_symbol2690z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1631;
BgL_statez00_1631 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1271z00_126)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1632;
BgL_newzd2statezd2_1632 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1628, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1631)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1635;
BgL_newzd2spzd2_1635 = 
(BgL_arg1271z00_126+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1635),BgL_newzd2statezd2_1632); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1636;
BgL_arg1412z00_1636 = 
(BgL_newzd2spzd2_1635-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1636),BgL_arg1273z00_127); } 
return 
BINT(BgL_newzd2spzd2_1635);} } } } } } } break;case ((long)8) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_uriz00_129;
{ /* Llib/sparql.scm 91 */
long BgL_arg1280z00_132;
BgL_arg1280z00_132 = 
(
(long)CINT(BgL___spz00_81)-((long)1)); 
BgL_uriz00_129 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1280z00_132)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1276z00_130;obj_t BgL_arg1278z00_131;
BgL_arg1276z00_130 = 
(
(long)CINT(BgL___spz00_81)-((long)2)); 
{ /* Llib/sparql.scm 91 */

BgL_arg1278z00_131 = BgL_uriz00_129; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1664;
BgL_newzd2catzd2_1664 = BGl_symbol2694z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1667;
BgL_statez00_1667 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1276z00_130)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1668;
BgL_newzd2statezd2_1668 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1664, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1667)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1671;
BgL_newzd2spzd2_1671 = 
(BgL_arg1276z00_130+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1671),BgL_newzd2statezd2_1668); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1672;
BgL_arg1412z00_1672 = 
(BgL_newzd2spzd2_1671-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1672),BgL_arg1278z00_131); } 
return 
BINT(BgL_newzd2spzd2_1671);} } } } } } } break;case ((long)9) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_uriz00_133;
{ /* Llib/sparql.scm 91 */
long BgL_arg1386z00_136;
BgL_arg1386z00_136 = 
(
(long)CINT(BgL___spz00_81)-((long)1)); 
BgL_uriz00_133 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1386z00_136)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1281z00_134;obj_t BgL_arg1378z00_135;
BgL_arg1281z00_134 = 
(
(long)CINT(BgL___spz00_81)-((long)2)); 
{ /* Llib/sparql.scm 91 */

BgL_arg1378z00_135 = BgL_uriz00_133; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1700;
BgL_newzd2catzd2_1700 = BGl_symbol2698z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1703;
BgL_statez00_1703 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1281z00_134)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1704;
BgL_newzd2statezd2_1704 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1700, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1703)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1707;
BgL_newzd2spzd2_1707 = 
(BgL_arg1281z00_134+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1707),BgL_newzd2statezd2_1704); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1708;
BgL_arg1412z00_1708 = 
(BgL_newzd2spzd2_1707-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1708),BgL_arg1378z00_135); } 
return 
BINT(BgL_newzd2spzd2_1707);} } } } } } } break;case ((long)10) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_namednodez00_137;
{ /* Llib/sparql.scm 91 */
long BgL_arg1397z00_140;
BgL_arg1397z00_140 = 
(
(long)CINT(BgL___spz00_81)-((long)1)); 
BgL_namednodez00_137 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1397z00_140)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1388z00_138;obj_t BgL_arg1391z00_139;
BgL_arg1388z00_138 = 
(
(long)CINT(BgL___spz00_81)-((long)2)); 
{ /* Llib/sparql.scm 91 */

BgL_arg1391z00_139 = BgL_namednodez00_137; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1736;
BgL_newzd2catzd2_1736 = BGl_symbol2698z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1739;
BgL_statez00_1739 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1388z00_138)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1740;
BgL_newzd2statezd2_1740 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1736, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1739)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1743;
BgL_newzd2spzd2_1743 = 
(BgL_arg1388z00_138+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1743),BgL_newzd2statezd2_1740); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1744;
BgL_arg1412z00_1744 = 
(BgL_newzd2spzd2_1743-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1744),BgL_arg1391z00_139); } 
return 
BINT(BgL_newzd2spzd2_1743);} } } } } } } break;case ((long)11) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_litteralz00_141;
{ /* Llib/sparql.scm 91 */
long BgL_arg1409z00_144;
BgL_arg1409z00_144 = 
(
(long)CINT(BgL___spz00_81)-((long)1)); 
BgL_litteralz00_141 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1409z00_144)); } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1400z00_142;obj_t BgL_arg1403z00_143;
BgL_arg1400z00_142 = 
(
(long)CINT(BgL___spz00_81)-((long)2)); 
{ /* Llib/sparql.scm 91 */

BgL_arg1403z00_143 = BgL_litteralz00_141; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1772;
BgL_newzd2catzd2_1772 = BGl_symbol2698z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1775;
BgL_statez00_1775 = 
VECTOR_REF(BgL___stackz00_80,
(int)(BgL_arg1400z00_142)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1776;
BgL_newzd2statezd2_1776 = 
CDR(
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1772, 
VECTOR_REF(BgL___gotozd2tablezd2_3284,
CINT(BgL_statez00_1775)))); 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1779;
BgL_newzd2spzd2_1779 = 
(BgL_arg1400z00_142+((long)2)); 
{ /* Llib/sparql.scm 91 */

VECTOR_SET(BgL___stackz00_80,
(int)(BgL_newzd2spzd2_1779),BgL_newzd2statezd2_1776); 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1780;
BgL_arg1412z00_1780 = 
(BgL_newzd2spzd2_1779-((long)1)); 
VECTOR_SET(BgL___stackz00_80,
(int)(BgL_arg1412z00_1780),BgL_arg1403z00_143); } 
return 
BINT(BgL_newzd2spzd2_1779);} } } } } } } break;
default: 
return BUNSPEC;} }  else 
{ /* Llib/sparql.scm 91 */
return BUNSPEC;} } } } 
}



/* append-21010 */
obj_t BGl_appendzd221010zd2zzsparqlz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
{ AN_OBJECT;
{ 
{ 
obj_t BgL_headz00_752;
BgL_headz00_752 = 
MAKE_PAIR(BNIL, BgL_l2z00_2); 
{ 
obj_t BgL_prevz00_753;obj_t BgL_tailz00_754;
BgL_prevz00_753 = BgL_headz00_752; 
BgL_tailz00_754 = BgL_l1z00_1; 
BgL_loopz00_755:
if(
PAIRP(BgL_tailz00_754))
{ 
obj_t BgL_newzd2prevzd2_757;
BgL_newzd2prevzd2_757 = 
MAKE_PAIR(
CAR(BgL_tailz00_754), BgL_l2z00_2); 
SET_CDR(BgL_prevz00_753, BgL_newzd2prevzd2_757); 
{ 
obj_t BgL_tailz00_4410;obj_t BgL_prevz00_4409;
BgL_prevz00_4409 = BgL_newzd2prevzd2_757; 
BgL_tailz00_4410 = 
CDR(BgL_tailz00_754); 
BgL_tailz00_754 = BgL_tailz00_4410; 
BgL_prevz00_753 = BgL_prevz00_4409; 
goto BgL_loopz00_755;} }  else 
{ BNIL; } 
return 
CDR(BgL_headz00_752);} } } 
}



/* mlist */
BGL_EXPORTED_DEF obj_t BGl_mlistz00zzsparqlz00(obj_t BgL_listsz00_3)
{ AN_OBJECT;
{ /* Llib/sparql.scm 40 */
if(
PAIRP(BgL_listsz00_3))
{ /* Llib/sparql.scm 42 */
obj_t BgL_l1084z00_761;
{ /* Llib/sparql.scm 43 */
obj_t BgL_l1079z00_774;
BgL_l1079z00_774 = 
CAR(BgL_listsz00_3); 
if(
NULLP(BgL_l1079z00_774))
{ /* Llib/sparql.scm 43 */
BgL_l1084z00_761 = BNIL; }  else 
{ /* Llib/sparql.scm 43 */
obj_t BgL_head1081z00_776;
{ /* Llib/sparql.scm 43 */
obj_t BgL_res2513z00_2617;
BgL_res2513z00_2617 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1081z00_776 = BgL_res2513z00_2617; } 
{ 
obj_t BgL_l1079z00_778;obj_t BgL_tail1082z00_779;
BgL_l1079z00_778 = BgL_l1079z00_774; 
BgL_tail1082z00_779 = BgL_head1081z00_776; 
BgL_zc3anonymousza31769ze3z83_780:
if(
NULLP(BgL_l1079z00_778))
{ /* Llib/sparql.scm 43 */
BgL_l1084z00_761 = 
CDR(BgL_head1081z00_776); }  else 
{ /* Llib/sparql.scm 43 */
obj_t BgL_newtail1083z00_782;
{ /* Llib/sparql.scm 43 */
obj_t BgL_arg1787z00_784;
{ /* Llib/sparql.scm 43 */
obj_t BgL_vz00_785;
BgL_vz00_785 = 
CAR(BgL_l1079z00_778); 
{ /* Llib/sparql.scm 44 */
obj_t BgL_l1074z00_786;
BgL_l1074z00_786 = 
BGl_mlistz00zzsparqlz00(
CDR(BgL_listsz00_3)); 
if(
NULLP(BgL_l1074z00_786))
{ /* Llib/sparql.scm 44 */
BgL_arg1787z00_784 = BNIL; }  else 
{ /* Llib/sparql.scm 44 */
obj_t BgL_head1076z00_788;
{ /* Llib/sparql.scm 44 */
obj_t BgL_res2516z00_2627;
BgL_res2516z00_2627 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1076z00_788 = BgL_res2516z00_2627; } 
{ 
obj_t BgL_l1074z00_790;obj_t BgL_tail1077z00_791;
BgL_l1074z00_790 = BgL_l1074z00_786; 
BgL_tail1077z00_791 = BgL_head1076z00_788; 
BgL_zc3anonymousza31791ze3z83_792:
if(
NULLP(BgL_l1074z00_790))
{ /* Llib/sparql.scm 44 */
BgL_arg1787z00_784 = 
CDR(BgL_head1076z00_788); }  else 
{ /* Llib/sparql.scm 44 */
obj_t BgL_newtail1078z00_794;
{ /* Llib/sparql.scm 44 */
obj_t BgL_arg1794z00_796;
BgL_arg1794z00_796 = 
MAKE_PAIR(BgL_vz00_785, 
CAR(BgL_l1074z00_790)); 
{ /* Llib/sparql.scm 44 */
obj_t BgL_res2518z00_2634;
BgL_res2518z00_2634 = 
MAKE_PAIR(BgL_arg1794z00_796, BNIL); 
BgL_newtail1078z00_794 = BgL_res2518z00_2634; } } 
SET_CDR(BgL_tail1077z00_791, BgL_newtail1078z00_794); 
{ 
obj_t BgL_tail1077z00_4437;obj_t BgL_l1074z00_4435;
BgL_l1074z00_4435 = 
CDR(BgL_l1074z00_790); 
BgL_tail1077z00_4437 = BgL_newtail1078z00_794; 
BgL_tail1077z00_791 = BgL_tail1077z00_4437; 
BgL_l1074z00_790 = BgL_l1074z00_4435; 
goto BgL_zc3anonymousza31791ze3z83_792;} } } } } } 
{ /* Llib/sparql.scm 43 */
obj_t BgL_res2519z00_2640;
BgL_res2519z00_2640 = 
MAKE_PAIR(BgL_arg1787z00_784, BNIL); 
BgL_newtail1083z00_782 = BgL_res2519z00_2640; } } 
SET_CDR(BgL_tail1082z00_779, BgL_newtail1083z00_782); 
{ 
obj_t BgL_tail1082z00_4442;obj_t BgL_l1079z00_4440;
BgL_l1079z00_4440 = 
CDR(BgL_l1079z00_778); 
BgL_tail1082z00_4442 = BgL_newtail1083z00_782; 
BgL_tail1082z00_779 = BgL_tail1082z00_4442; 
BgL_l1079z00_778 = BgL_l1079z00_4440; 
goto BgL_zc3anonymousza31769ze3z83_780;} } } } } 
if(
NULLP(BgL_l1084z00_761))
{ /* Llib/sparql.scm 42 */
return BNIL;}  else 
{ /* Llib/sparql.scm 42 */
obj_t BgL_g1087z00_763;obj_t BgL_g1088z00_764;
BgL_g1087z00_763 = 
CDR(BgL_l1084z00_761); 
BgL_g1088z00_764 = 
CAR(BgL_l1084z00_761); 
{ 
obj_t BgL_l1084z00_2667;obj_t BgL_ans1085z00_2668;
BgL_l1084z00_2667 = BgL_g1087z00_763; 
BgL_ans1085z00_2668 = BgL_g1088z00_764; 
BgL_zc3anonymousza31755ze3z83_2666:
if(
PAIRP(BgL_l1084z00_2667))
{ 
obj_t BgL_ans1085z00_4451;obj_t BgL_l1084z00_4449;
BgL_l1084z00_4449 = 
CDR(BgL_l1084z00_2667); 
BgL_ans1085z00_4451 = 
BGl_appendzd221010zd2zzsparqlz00(
CAR(BgL_l1084z00_2667), BgL_ans1085z00_2668); 
BgL_ans1085z00_2668 = BgL_ans1085z00_4451; 
BgL_l1084z00_2667 = BgL_l1084z00_4449; 
goto BgL_zc3anonymousza31755ze3z83_2666;}  else 
{ /* Llib/sparql.scm 42 */
return BgL_ans1085z00_2668;} } } }  else 
{ /* Llib/sparql.scm 41 */
return BGl_list2705z00zzsparqlz00;} } 
}



/* &mlist */
obj_t BGl_z62mlistz62zzsparqlz00(obj_t BgL_envz00_3288, obj_t BgL_listsz00_3289)
{ AN_OBJECT;
{ /* Llib/sparql.scm 40 */
return 
BGl_mlistz00zzsparqlz00(BgL_listsz00_3289);} 
}



/* _tee */
obj_t BGl__teez00zzsparqlz00(obj_t BgL_envz00_8, obj_t BgL_optz00_7)
{ AN_OBJECT;
{ /* Llib/sparql.scm 51 */
{ /* Llib/sparql.scm 51 */
obj_t BgL_inputz00_801;obj_t BgL_outputz00_802;
BgL_inputz00_801 = 
VECTOR_REF(BgL_optz00_7,
(int)(((long)0))); 
BgL_outputz00_802 = 
VECTOR_REF(BgL_optz00_7,
(int)(((long)1))); 
{ /* Llib/sparql.scm 51 */
int BgL_aux1162z00_804;
BgL_aux1162z00_804 = 
VECTOR_LENGTH(BgL_optz00_7); 
switch( 
(long)(BgL_aux1162z00_804)) { case ((long)2) : 

{ /* Llib/sparql.scm 51 */

return 
BGl_teez00zzsparqlz00(
VECTOR_REF(BgL_optz00_7,
(int)(((long)0))), 
VECTOR_REF(BgL_optz00_7,
(int)(((long)1))), BTRUE);} break;case ((long)3) : 

{ /* Llib/sparql.scm 51 */
obj_t BgL_activez00_809;
BgL_activez00_809 = 
VECTOR_REF(BgL_optz00_7,
(int)(((long)2))); 
{ /* Llib/sparql.scm 51 */

return 
BGl_teez00zzsparqlz00(
VECTOR_REF(BgL_optz00_7,
(int)(((long)0))), 
VECTOR_REF(BgL_optz00_7,
(int)(((long)1))), BgL_activez00_809);} } break;
default: 
return BUNSPEC;} } } } 
}



/* tee */
BGL_EXPORTED_DEF obj_t BGl_teez00zzsparqlz00(obj_t BgL_inputz00_4, obj_t BgL_outputz00_5, obj_t BgL_activez00_6)
{ AN_OBJECT;
{ /* Llib/sparql.scm 51 */
{ /* Llib/sparql.scm 54 */
obj_t BgL_zc3anonymousza31802ze3z83_3290;
BgL_zc3anonymousza31802ze3z83_3290 = 
MAKE_FX_PROCEDURE(BGl_z62zc3anonymousza31802ze3ze1zzsparqlz00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3anonymousza31802ze3z83_3290, 
(int)(((long)0)), BgL_inputz00_4); 
PROCEDURE_SET(BgL_zc3anonymousza31802ze3z83_3290, 
(int)(((long)1)), BgL_outputz00_5); 
PROCEDURE_SET(BgL_zc3anonymousza31802ze3z83_3290, 
(int)(((long)2)), BgL_activez00_6); 
{ /* Llib/sparql.scm 52 */

return 
BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_zc3anonymousza31802ze3z83_3290, BTRUE);} } } 
}



/* &<anonymous:1802> */
obj_t BGl_z62zc3anonymousza31802ze3ze1zzsparqlz00(obj_t BgL_envz00_3291)
{ AN_OBJECT;
{ /* Llib/sparql.scm 53 */
{ /* Llib/sparql.scm 54 */
obj_t BgL_inputz00_3292;obj_t BgL_outputz00_3293;obj_t BgL_activez00_3294;
BgL_inputz00_3292 = 
PROCEDURE_REF(BgL_envz00_3291, 
(int)(((long)0))); 
BgL_outputz00_3293 = 
PROCEDURE_REF(BgL_envz00_3291, 
(int)(((long)1))); 
BgL_activez00_3294 = 
PROCEDURE_REF(BgL_envz00_3291, 
(int)(((long)2))); 
{ 

{ /* Llib/sparql.scm 54 */
obj_t BgL_cz00_816;
BgL_cz00_816 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_inputz00_3292); 
{ /* Llib/sparql.scm 55 */
bool_t BgL_testz00_4491;
{ /* Llib/sparql.scm 55 */
bool_t BgL_res2524z00_2682;
BgL_res2524z00_2682 = 
EOF_OBJECTP(BgL_cz00_816); 
BgL_testz00_4491 = BgL_res2524z00_2682; } 
if(BgL_testz00_4491)
{ /* Llib/sparql.scm 55 */
{ /* Llib/sparql.scm 62 */
obj_t BgL_port1090z00_818;
{ /* Llib/sparql.scm 62 */
obj_t BgL_res2525z00_2684;
{ /* Llib/sparql.scm 62 */
obj_t BgL_auxz00_4493;
BgL_auxz00_4493 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2525z00_2684 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4493); } 
BgL_port1090z00_818 = BgL_res2525z00_2684; } 
BGL_DISPLAY_STRING(BGl_string2706z00zzsparqlz00, BgL_port1090z00_818); 
bgl_display_char(((unsigned char)'\n'), BgL_port1090z00_818); } 
return BFALSE;}  else 
{ /* Llib/sparql.scm 55 */
if(
CBOOL(BgL_activez00_3294))
{ /* Llib/sparql.scm 57 */
{ /* Llib/sparql.scm 59 */
unsigned char BgL_auxz00_4500;
BgL_auxz00_4500 = 
CCHAR(BgL_cz00_816); 
bgl_display_char(BgL_auxz00_4500, BgL_outputz00_3293); } 
FLUSH_OUTPUT_PORT(BgL_outputz00_3293); }  else 
{ /* Llib/sparql.scm 57 */BFALSE; } 
{ /* Llib/sparql.scm 61 */
obj_t BgL_list1804z00_819;
BgL_list1804z00_819 = 
MAKE_PAIR(BgL_cz00_816, BNIL); 
return 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list1804z00_819);} } } } } } } 
}



/* pipe */
BGL_EXPORTED_DEF obj_t BGl_pipez00zzsparqlz00(obj_t BgL_xz00_9, obj_t BgL_fsz00_10)
{ AN_OBJECT;
{ /* Llib/sparql.scm 65 */
{ 
obj_t BgL_xz00_2712;obj_t BgL_fsz00_2713;
BgL_xz00_2712 = BgL_xz00_9; 
BgL_fsz00_2713 = BgL_fsz00_10; 
BgL_pipezd2auxzd2_2711:
if(
PAIRP(BgL_fsz00_2713))
{ /* Llib/sparql.scm 70 */
obj_t BgL_arg1807z00_2719;obj_t BgL_arg1808z00_2720;
{ /* Llib/sparql.scm 70 */
obj_t BgL_fun1809z00_2721;
BgL_fun1809z00_2721 = 
CAR(BgL_fsz00_2713); 
BgL_arg1807z00_2719 = 
PROCEDURE_ENTRY(BgL_fun1809z00_2721)(BgL_fun1809z00_2721, BgL_xz00_2712, BEOA); } 
BgL_arg1808z00_2720 = 
CDR(BgL_fsz00_2713); 
{ 
obj_t BgL_fsz00_4515;obj_t BgL_xz00_4514;
BgL_xz00_4514 = BgL_arg1807z00_2719; 
BgL_fsz00_4515 = BgL_arg1808z00_2720; 
BgL_fsz00_2713 = BgL_fsz00_4515; 
BgL_xz00_2712 = BgL_xz00_4514; 
goto BgL_pipezd2auxzd2_2711;} }  else 
{ /* Llib/sparql.scm 70 */
return BgL_xz00_2712;} } } 
}



/* &pipe */
obj_t BGl_z62pipez62zzsparqlz00(obj_t BgL_envz00_3295, obj_t BgL_xz00_3296, obj_t BgL_fsz00_3297)
{ AN_OBJECT;
{ /* Llib/sparql.scm 65 */
return 
BGl_pipez00zzsparqlz00(BgL_xz00_3296, BgL_fsz00_3297);} 
}



/* pipe-map */
BGL_EXPORTED_DEF obj_t BGl_pipezd2mapzd2zzsparqlz00(obj_t BgL_xz00_11, obj_t BgL_fsz00_12)
{ AN_OBJECT;
{ /* Llib/sparql.scm 72 */
{ 
obj_t BgL_xz00_831;obj_t BgL_fsz00_832;
BgL_xz00_831 = BgL_xz00_11; 
BgL_fsz00_832 = BgL_fsz00_12; 
BgL_zc3anonymousza31810ze3z83_833:
if(
PAIRP(BgL_fsz00_832))
{ /* Llib/sparql.scm 75 */
obj_t BgL_arg1812z00_835;obj_t BgL_arg1813z00_836;
{ /* Llib/sparql.scm 75 */
obj_t BgL_fun1096z00_837;
BgL_fun1096z00_837 = 
CAR(BgL_fsz00_832); 
if(
NULLP(BgL_xz00_831))
{ /* Llib/sparql.scm 75 */
BgL_arg1812z00_835 = BNIL; }  else 
{ /* Llib/sparql.scm 75 */
obj_t BgL_head1093z00_840;
{ /* Llib/sparql.scm 75 */
obj_t BgL_res2532z00_2733;
BgL_res2532z00_2733 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1093z00_840 = BgL_res2532z00_2733; } 
{ 
obj_t BgL_l1091z00_842;obj_t BgL_tail1094z00_843;
BgL_l1091z00_842 = BgL_xz00_831; 
BgL_tail1094z00_843 = BgL_head1093z00_840; 
BgL_zc3anonymousza31815ze3z83_844:
if(
NULLP(BgL_l1091z00_842))
{ /* Llib/sparql.scm 75 */
BgL_arg1812z00_835 = 
CDR(BgL_head1093z00_840); }  else 
{ /* Llib/sparql.scm 75 */
obj_t BgL_newtail1095z00_846;
{ /* Llib/sparql.scm 75 */
obj_t BgL_arg1818z00_848;
{ /* Llib/sparql.scm 75 */
obj_t BgL_arg1819z00_849;
BgL_arg1819z00_849 = 
CAR(BgL_l1091z00_842); 
BgL_arg1818z00_848 = 
PROCEDURE_ENTRY(BgL_fun1096z00_837)(BgL_fun1096z00_837, BgL_arg1819z00_849, BEOA); } 
{ /* Llib/sparql.scm 75 */
obj_t BgL_res2534z00_2740;
BgL_res2534z00_2740 = 
MAKE_PAIR(BgL_arg1818z00_848, BNIL); 
BgL_newtail1095z00_846 = BgL_res2534z00_2740; } } 
SET_CDR(BgL_tail1094z00_843, BgL_newtail1095z00_846); 
{ 
obj_t BgL_tail1094z00_4535;obj_t BgL_l1091z00_4533;
BgL_l1091z00_4533 = 
CDR(BgL_l1091z00_842); 
BgL_tail1094z00_4535 = BgL_newtail1095z00_846; 
BgL_tail1094z00_843 = BgL_tail1094z00_4535; 
BgL_l1091z00_842 = BgL_l1091z00_4533; 
goto BgL_zc3anonymousza31815ze3z83_844;} } } } } 
BgL_arg1813z00_836 = 
CDR(BgL_fsz00_832); 
{ 
obj_t BgL_fsz00_4538;obj_t BgL_xz00_4537;
BgL_xz00_4537 = BgL_arg1812z00_835; 
BgL_fsz00_4538 = BgL_arg1813z00_836; 
BgL_fsz00_832 = BgL_fsz00_4538; 
BgL_xz00_831 = BgL_xz00_4537; 
goto BgL_zc3anonymousza31810ze3z83_833;} }  else 
{ /* Llib/sparql.scm 74 */
return BgL_xz00_831;} } } 
}



/* &pipe-map */
obj_t BGl_z62pipezd2mapzb0zzsparqlz00(obj_t BgL_envz00_3298, obj_t BgL_xz00_3299, obj_t BgL_fsz00_3300)
{ AN_OBJECT;
{ /* Llib/sparql.scm 72 */
return 
BGl_pipezd2mapzd2zzsparqlz00(BgL_xz00_3299, BgL_fsz00_3300);} 
}



/* fold */
BGL_EXPORTED_DEF obj_t BGl_foldz00zzsparqlz00(obj_t BgL_fonctz00_13, obj_t BgL_accuz00_14, obj_t BgL_listz00_15)
{ AN_OBJECT;
{ /* Llib/sparql.scm 80 */
BGl_foldz00zzsparqlz00:
if(
PAIRP(BgL_listz00_15))
{ /* Llib/sparql.scm 81 */
obj_t BgL_arg1821z00_2746;obj_t BgL_arg1822z00_2747;
{ /* Llib/sparql.scm 81 */
obj_t BgL_arg1823z00_2748;
BgL_arg1823z00_2748 = 
CAR(BgL_listz00_15); 
BgL_arg1821z00_2746 = 
PROCEDURE_ENTRY(BgL_fonctz00_13)(BgL_fonctz00_13, BgL_accuz00_14, BgL_arg1823z00_2748, BEOA); } 
BgL_arg1822z00_2747 = 
CDR(BgL_listz00_15); 
if(
PAIRP(BgL_arg1822z00_2747))
{ /* Llib/sparql.scm 81 */
obj_t BgL_arg1821z00_2757;obj_t BgL_arg1822z00_2758;
{ /* Llib/sparql.scm 81 */
obj_t BgL_arg1823z00_2759;
BgL_arg1823z00_2759 = 
CAR(BgL_arg1822z00_2747); 
BgL_arg1821z00_2757 = 
PROCEDURE_ENTRY(BgL_fonctz00_13)(BgL_fonctz00_13, BgL_arg1821z00_2746, BgL_arg1823z00_2759, BEOA); } 
BgL_arg1822z00_2758 = 
CDR(BgL_arg1822z00_2747); 
{ 
obj_t BgL_listz00_4559;obj_t BgL_accuz00_4558;
BgL_accuz00_4558 = BgL_arg1821z00_2757; 
BgL_listz00_4559 = BgL_arg1822z00_2758; 
BgL_listz00_15 = BgL_listz00_4559; 
BgL_accuz00_14 = BgL_accuz00_4558; 
goto BGl_foldz00zzsparqlz00;} }  else 
{ /* Llib/sparql.scm 81 */
return BgL_arg1821z00_2746;} }  else 
{ /* Llib/sparql.scm 81 */
return BgL_accuz00_14;} } 
}



/* &fold */
obj_t BGl_z62foldz62zzsparqlz00(obj_t BgL_envz00_3301, obj_t BgL_fonctz00_3302, obj_t BgL_accuz00_3303, obj_t BgL_listz00_3304)
{ AN_OBJECT;
{ /* Llib/sparql.scm 80 */
return 
BGl_foldz00zzsparqlz00(BgL_fonctz00_3302, BgL_accuz00_3303, BgL_listz00_3304);} 
}



/* sparql-query */
BGL_EXPORTED_DEF obj_t BGl_sparqlzd2queryzd2zzsparqlz00(obj_t BgL_urlz00_16, obj_t BgL_mimez00_17, obj_t BgL_queryz00_18)
{ AN_OBJECT;
{ /* Llib/sparql.scm 127 */
{ /* Llib/sparql.scm 139 */
obj_t BgL_protocolz00_857;
BgL_protocolz00_857 = 
BGl_urlzd2parsezd2zz__urlz00(BgL_urlz00_16); 
{ /* Llib/sparql.scm 141 */
obj_t BgL_loginz00_858;obj_t BgL_hostz00_859;obj_t BgL_portz00_860;obj_t BgL_abspathz00_861;
{ /* Llib/sparql.scm 141 */
int BgL_auxz00_4562;
BgL_auxz00_4562 = 
(int)(((long)1)); 
BgL_loginz00_858 = 
BGL_MVALUES_VAL(BgL_auxz00_4562); } 
{ /* Llib/sparql.scm 141 */
int BgL_auxz00_4565;
BgL_auxz00_4565 = 
(int)(((long)2)); 
BgL_hostz00_859 = 
BGL_MVALUES_VAL(BgL_auxz00_4565); } 
{ /* Llib/sparql.scm 141 */
int BgL_auxz00_4568;
BgL_auxz00_4568 = 
(int)(((long)3)); 
BgL_portz00_860 = 
BGL_MVALUES_VAL(BgL_auxz00_4568); } 
{ /* Llib/sparql.scm 141 */
int BgL_auxz00_4571;
BgL_auxz00_4571 = 
(int)(((long)4)); 
BgL_abspathz00_861 = 
BGL_MVALUES_VAL(BgL_auxz00_4571); } 
{ /* Llib/sparql.scm 141 */
obj_t BgL_socketz00_862;
{ /* Llib/sparql.scm 144 */
obj_t BgL_arg1824z00_866;obj_t BgL_arg1825z00_867;
{ /* Llib/sparql.scm 144 */
obj_t BgL_arg1826z00_888;obj_t BgL_arg1827z00_889;
{ /* Llib/sparql.scm 144 */
obj_t BgL_arg1828z00_890;
BgL_arg1828z00_890 = 
MAKE_PAIR(BgL_hostz00_859, BNIL); 
BgL_arg1826z00_888 = 
MAKE_PAIR(BGl_keyword2708z00zzsparqlz00, BgL_arg1828z00_890); } 
{ /* Llib/sparql.scm 145 */
obj_t BgL_arg1829z00_891;obj_t BgL_arg1830z00_892;
{ /* Llib/sparql.scm 145 */
obj_t BgL_arg1831z00_893;
BgL_arg1831z00_893 = 
MAKE_PAIR(BgL_mimez00_17, BNIL); 
BgL_arg1829z00_891 = 
MAKE_PAIR(BGl_keyword2710z00zzsparqlz00, BgL_arg1831z00_893); } 
{ /* Llib/sparql.scm 146 */
obj_t BgL_arg1832z00_894;
{ /* Llib/sparql.scm 146 */
obj_t BgL_arg1833z00_895;
BgL_arg1833z00_895 = 
MAKE_PAIR(BGl_string2712z00zzsparqlz00, BNIL); 
BgL_arg1832z00_894 = 
MAKE_PAIR(BGl_keyword2713z00zzsparqlz00, BgL_arg1833z00_895); } 
BgL_arg1830z00_892 = 
MAKE_PAIR(BgL_arg1832z00_894, BNIL); } 
BgL_arg1827z00_889 = 
MAKE_PAIR(BgL_arg1829z00_891, BgL_arg1830z00_892); } 
BgL_arg1824z00_866 = 
MAKE_PAIR(BgL_arg1826z00_888, BgL_arg1827z00_889); } 
BgL_arg1825z00_867 = 
string_append_3(BgL_abspathz00_861, BGl_string2715z00zzsparqlz00, 
BGl_urlzd2pathzd2encodez00zz__urlz00(BgL_queryz00_18)); 
{ /* Llib/sparql.scm 141 */
obj_t BgL_methodz00_878;
BgL_methodz00_878 = BGl_symbol2716z00zzsparqlz00; 
BgL_socketz00_862 = 
BGl_httpz00zz__httpz00(BNIL, BFALSE, BFALSE, BUNSPEC, BFALSE, BgL_arg1824z00_866, BgL_hostz00_859, BGl_string2720z00zzsparqlz00, BFALSE, BFALSE, BgL_methodz00_878, BFALSE, BFALSE, BgL_arg1825z00_867, BgL_portz00_860, BGl_symbol2718z00zzsparqlz00, BFALSE, BFALSE, 
BINT(((long)0)), BFALSE); } } 
{ /* Llib/sparql.scm 141 */
obj_t BgL_inz00_863;
BgL_inz00_863 = 
SOCKET_INPUT(BgL_socketz00_862); 
{ /* Llib/sparql.scm 149 */
obj_t BgL_outz00_864;
BgL_outz00_864 = 
SOCKET_OUTPUT(BgL_socketz00_862); 
{ /* Llib/sparql.scm 150 */
obj_t BgL_responsez00_865;
BgL_responsez00_865 = 
BGl_httpzd2parsezd2responsez00zz__httpz00(BgL_inz00_863, BgL_outz00_864, BGl_proc2707z00zzsparqlz00); 
{ /* Llib/sparql.scm 151 */

socket_close(BgL_socketz00_862); 
return BgL_responsez00_865;} } } } } } } } 
}



/* &sparql-query */
obj_t BGl_z62sparqlzd2queryzb0zzsparqlz00(obj_t BgL_envz00_3306, obj_t BgL_urlz00_3307, obj_t BgL_mimez00_3308, obj_t BgL_queryz00_3309)
{ AN_OBJECT;
{ /* Llib/sparql.scm 127 */
return 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_3307, BgL_mimez00_3308, BgL_queryz00_3309);} 
}



/* &parser */
obj_t BGl_z62parserz62zzsparqlz00(obj_t BgL_envz00_3310, obj_t BgL_inz00_3311, obj_t BgL_statusz00_3312, obj_t BgL_headerz00_3313, obj_t BgL_contentzd2lengthzd2_3314, obj_t BgL_encodingz00_3315)
{ AN_OBJECT;
{ /* Llib/sparql.scm 138 */
{ 
obj_t BgL_inz00_897;obj_t BgL_statusz00_898;obj_t BgL_headerz00_899;obj_t BgL_contentzd2lengthzd2_900;obj_t BgL_encodingz00_901;
BgL_inz00_897 = BgL_inz00_3311; 
BgL_statusz00_898 = BgL_statusz00_3312; 
BgL_headerz00_899 = BgL_headerz00_3313; 
BgL_contentzd2lengthzd2_900 = BgL_contentzd2lengthzd2_3314; 
BgL_encodingz00_901 = BgL_encodingz00_3315; 
if(
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_statusz00_898, 
BINT(((long)200))))
{ /* Llib/sparql.scm 129 */
obj_t BgL_formatz00_2765;
BgL_formatz00_2765 = 
CDR(
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BGl_keyword2721z00zzsparqlz00, BgL_headerz00_899)); 
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_formatz00_2765, BGl_string2722z00zzsparqlz00))
{ /* Llib/sparql.scm 129 */
return 
BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(BGl_sparqlzd2grammarzd2rulesz00zzsparqlz00, BGl_sparqlzd2grammarzd2tokensz00zzsparqlz00, BgL_inz00_897, BNIL);}  else 
{ /* Llib/sparql.scm 129 */
return 
BGl_errorz00zz__errorz00(BGl_string2723z00zzsparqlz00, BGl_string2724z00zzsparqlz00, BgL_formatz00_2765);} }  else 
{ /* Llib/sparql.scm 129 */
return 
BGl_errorz00zz__errorz00(BGl_string2723z00zzsparqlz00, BGl_string2725z00zzsparqlz00, BgL_statusz00_898);} } } 
}



/* from */
BGL_EXPORTED_DEF obj_t BGl_fromz00zzsparqlz00(obj_t BgL_listsz00_19, obj_t BgL_procz00_20)
{ AN_OBJECT;
{ /* Llib/sparql.scm 158 */
{ /* Llib/sparql.scm 159 */
obj_t BgL_g1107z00_909;
{ /* Llib/sparql.scm 160 */
obj_t BgL_l1097z00_922;
BgL_l1097z00_922 = 
BGl_mlistz00zzsparqlz00(BgL_listsz00_19); 
if(
NULLP(BgL_l1097z00_922))
{ /* Llib/sparql.scm 160 */
BgL_g1107z00_909 = BNIL; }  else 
{ /* Llib/sparql.scm 160 */
obj_t BgL_head1099z00_924;
{ /* Llib/sparql.scm 160 */
obj_t BgL_res2540z00_2783;
BgL_res2540z00_2783 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1099z00_924 = BgL_res2540z00_2783; } 
{ 
obj_t BgL_l1097z00_926;obj_t BgL_tail1100z00_927;
BgL_l1097z00_926 = BgL_l1097z00_922; 
BgL_tail1100z00_927 = BgL_head1099z00_924; 
BgL_zc3anonymousza31846ze3z83_928:
if(
NULLP(BgL_l1097z00_926))
{ /* Llib/sparql.scm 160 */
BgL_g1107z00_909 = 
CDR(BgL_head1099z00_924); }  else 
{ /* Llib/sparql.scm 160 */
obj_t BgL_newtail1101z00_930;
{ /* Llib/sparql.scm 160 */
obj_t BgL_arg1849z00_932;
{ /* Llib/sparql.scm 160 */
obj_t BgL_argsz00_933;
BgL_argsz00_933 = 
CAR(BgL_l1097z00_926); 
BgL_arg1849z00_932 = 
apply(BgL_procz00_20, BgL_argsz00_933); } 
{ /* Llib/sparql.scm 160 */
obj_t BgL_res2542z00_2790;
BgL_res2542z00_2790 = 
MAKE_PAIR(BgL_arg1849z00_932, BNIL); 
BgL_newtail1101z00_930 = BgL_res2542z00_2790; } } 
SET_CDR(BgL_tail1100z00_927, BgL_newtail1101z00_930); 
{ 
obj_t BgL_tail1100z00_4616;obj_t BgL_l1097z00_4614;
BgL_l1097z00_4614 = 
CDR(BgL_l1097z00_926); 
BgL_tail1100z00_4616 = BgL_newtail1101z00_930; 
BgL_tail1100z00_927 = BgL_tail1100z00_4616; 
BgL_l1097z00_926 = BgL_l1097z00_4614; 
goto BgL_zc3anonymousza31846ze3z83_928;} } } } } 
return 
BGl_zc3anonymousza31840ze3z83zzsparqlz00(BgL_g1107z00_909);} } 
}



/* <anonymous:1840> */
obj_t BGl_zc3anonymousza31840ze3z83zzsparqlz00(obj_t BgL_lis1103z00_911)
{ AN_OBJECT;
{ /* Llib/sparql.scm 160 */
BGl_zc3anonymousza31840ze3z83zzsparqlz00:
if(
NULLP(BgL_lis1103z00_911))
{ /* Llib/sparql.scm 160 */
return BgL_lis1103z00_911;}  else 
{ /* Llib/sparql.scm 160 */
obj_t BgL_head1104z00_914;obj_t BgL_tail1105z00_915;
BgL_head1104z00_914 = 
CAR(BgL_lis1103z00_911); 
BgL_tail1105z00_915 = 
CDR(BgL_lis1103z00_911); 
{ /* Llib/sparql.scm 160 */
bool_t BgL_testz00_4622;
if(
(BgL_head1104z00_914==BFALSE))
{ /* Llib/sparql.scm 159 */
BgL_testz00_4622 = ((bool_t)0)
; }  else 
{ /* Llib/sparql.scm 159 */
BgL_testz00_4622 = ((bool_t)1)
; } 
if(BgL_testz00_4622)
{ /* Llib/sparql.scm 160 */
obj_t BgL_newzd2tail1106zd2_917;
BgL_newzd2tail1106zd2_917 = 
BGl_zc3anonymousza31840ze3z83zzsparqlz00(BgL_tail1105z00_915); 
if(
(BgL_tail1105z00_915==BgL_newzd2tail1106zd2_917))
{ /* Llib/sparql.scm 160 */
return BgL_lis1103z00_911;}  else 
{ /* Llib/sparql.scm 160 */
obj_t BgL_res2545z00_2803;
BgL_res2545z00_2803 = 
MAKE_PAIR(BgL_head1104z00_914, BgL_newzd2tail1106zd2_917); 
return BgL_res2545z00_2803;} }  else 
{ 
obj_t BgL_lis1103z00_4629;
BgL_lis1103z00_4629 = BgL_tail1105z00_915; 
BgL_lis1103z00_911 = BgL_lis1103z00_4629; 
goto BGl_zc3anonymousza31840ze3z83zzsparqlz00;} } } } 
}



/* &from */
obj_t BGl_z62fromz62zzsparqlz00(obj_t BgL_envz00_3316, obj_t BgL_listsz00_3317, obj_t BgL_procz00_3318)
{ AN_OBJECT;
{ /* Llib/sparql.scm 158 */
return 
BGl_fromz00zzsparqlz00(BgL_listsz00_3317, BgL_procz00_3318);} 
}



/* construct-string */
obj_t BGl_constructzd2stringzd2zzsparqlz00(obj_t BgL_prefixsz00_21, obj_t BgL_cz00_22, obj_t BgL_wz00_23, obj_t BgL_optionsz00_24)
{ AN_OBJECT;
{ /* Llib/sparql.scm 163 */
{ /* Llib/sparql.scm 167 */
obj_t BgL_arg1850z00_935;obj_t BgL_arg1851z00_936;obj_t BgL_arg1852z00_937;obj_t BgL_arg1853z00_938;obj_t BgL_arg1854z00_939;obj_t BgL_arg1855z00_940;
{ 
obj_t BgL_accuz00_953;obj_t BgL_prefixz00_954;
{ 
obj_t BgL_accuz00_2810;obj_t BgL_listz00_2811;
BgL_accuz00_2810 = BGl_string2728z00zzsparqlz00; 
BgL_listz00_2811 = BgL_prefixsz00_21; 
BgL_foldz00_2809:
if(
PAIRP(BgL_listz00_2811))
{ 
obj_t BgL_listz00_4645;obj_t BgL_accuz00_4633;
BgL_accuz00_953 = BgL_accuz00_2810; 
BgL_prefixz00_954 = 
CAR(BgL_listz00_2811); 
{ /* Llib/sparql.scm 167 */
obj_t BgL_arg1869z00_956;obj_t BgL_arg1870z00_957;
BgL_arg1869z00_956 = 
CAR(BgL_prefixz00_954); 
{ /* Llib/sparql.scm 167 */
obj_t BgL_pairz00_2805;
BgL_pairz00_2805 = BgL_prefixz00_954; 
BgL_arg1870z00_957 = 
CAR(
CDR(BgL_pairz00_2805)); } 
{ /* Llib/sparql.scm 166 */
obj_t BgL_list1871z00_958;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1872z00_959;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1873z00_960;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1874z00_961;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1875z00_962;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1876z00_963;
BgL_arg1876z00_963 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BNIL); 
BgL_arg1875z00_962 = 
MAKE_PAIR(BgL_arg1870z00_957, BgL_arg1876z00_963); } 
BgL_arg1874z00_961 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1875z00_962); } 
BgL_arg1873z00_960 = 
MAKE_PAIR(BgL_arg1869z00_956, BgL_arg1874z00_961); } 
BgL_arg1872z00_959 = 
MAKE_PAIR(BGl_string2727z00zzsparqlz00, BgL_arg1873z00_960); } 
BgL_list1871z00_958 = 
MAKE_PAIR(BgL_accuz00_953, BgL_arg1872z00_959); } 
BgL_accuz00_4633 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1871z00_958); } } 
BgL_listz00_4645 = 
CDR(BgL_listz00_2811); 
BgL_listz00_2811 = BgL_listz00_4645; 
BgL_accuz00_2810 = BgL_accuz00_4633; 
goto BgL_foldz00_2809;}  else 
{ /* Llib/sparql.scm 165 */
BgL_arg1850z00_935 = BgL_accuz00_2810; } } } 
BgL_arg1851z00_936 = 
CAR(BgL_cz00_22); 
{ /* Llib/sparql.scm 169 */
obj_t BgL_pairz00_2825;
BgL_pairz00_2825 = BgL_cz00_22; 
BgL_arg1852z00_937 = 
CAR(
CDR(BgL_pairz00_2825)); } 
{ /* Llib/sparql.scm 169 */
obj_t BgL_pairz00_2829;
BgL_pairz00_2829 = BgL_cz00_22; 
BgL_arg1853z00_938 = 
CAR(
CDR(
CDR(BgL_pairz00_2829))); } 
{ 
obj_t BgL_accuz00_966;obj_t BgL_tz00_967;
{ 
obj_t BgL_accuz00_2847;obj_t BgL_listz00_2848;
BgL_accuz00_2847 = BGl_string2728z00zzsparqlz00; 
BgL_listz00_2848 = BgL_wz00_23; 
BgL_foldz00_2846:
if(
PAIRP(BgL_listz00_2848))
{ 
obj_t BgL_listz00_4671;obj_t BgL_accuz00_4655;
BgL_accuz00_966 = BgL_accuz00_2847; 
BgL_tz00_967 = 
CAR(BgL_listz00_2848); 
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1879z00_969;obj_t BgL_arg1880z00_970;obj_t BgL_arg1881z00_971;
BgL_arg1879z00_969 = 
CAR(BgL_tz00_967); 
{ /* Llib/sparql.scm 171 */
obj_t BgL_pairz00_2836;
BgL_pairz00_2836 = BgL_tz00_967; 
BgL_arg1880z00_970 = 
CAR(
CDR(BgL_pairz00_2836)); } 
{ /* Llib/sparql.scm 171 */
obj_t BgL_pairz00_2840;
BgL_pairz00_2840 = BgL_tz00_967; 
BgL_arg1881z00_971 = 
CAR(
CDR(
CDR(BgL_pairz00_2840))); } 
{ /* Llib/sparql.scm 171 */
obj_t BgL_list1882z00_972;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1883z00_973;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1884z00_974;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1885z00_975;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1886z00_976;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1887z00_977;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1888z00_978;
BgL_arg1888z00_978 = 
MAKE_PAIR(BGl_string2729z00zzsparqlz00, BNIL); 
BgL_arg1887z00_977 = 
MAKE_PAIR(BgL_arg1881z00_971, BgL_arg1888z00_978); } 
BgL_arg1886z00_976 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1887z00_977); } 
BgL_arg1885z00_975 = 
MAKE_PAIR(BgL_arg1880z00_970, BgL_arg1886z00_976); } 
BgL_arg1884z00_974 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1885z00_975); } 
BgL_arg1883z00_973 = 
MAKE_PAIR(BgL_arg1879z00_969, BgL_arg1884z00_974); } 
BgL_list1882z00_972 = 
MAKE_PAIR(BgL_accuz00_966, BgL_arg1883z00_973); } 
BgL_accuz00_4655 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1882z00_972); } } 
BgL_listz00_4671 = 
CDR(BgL_listz00_2848); 
BgL_listz00_2848 = BgL_listz00_4671; 
BgL_accuz00_2847 = BgL_accuz00_4655; 
goto BgL_foldz00_2846;}  else 
{ /* Llib/sparql.scm 170 */
BgL_arg1854z00_939 = BgL_accuz00_2847; } } } 
{ 
obj_t BgL_accuz00_981;obj_t BgL_optionz00_982;
{ 
obj_t BgL_accuz00_2870;obj_t BgL_listz00_2871;
BgL_accuz00_2870 = BGl_string2728z00zzsparqlz00; 
BgL_listz00_2871 = BgL_optionsz00_24; 
BgL_foldz00_2869:
if(
PAIRP(BgL_listz00_2871))
{ 
obj_t BgL_listz00_4691;obj_t BgL_accuz00_4675;
BgL_accuz00_981 = BgL_accuz00_2870; 
BgL_optionz00_982 = 
CAR(BgL_listz00_2871); 
{ /* Llib/sparql.scm 176 */
obj_t BgL_arg1891z00_984;obj_t BgL_arg1892z00_985;
{ /* Llib/sparql.scm 176 */
obj_t BgL_arg1898z00_991;
BgL_arg1898z00_991 = 
CAR(BgL_optionz00_982); 
{ /* Llib/sparql.scm 176 */
obj_t BgL_res2548z00_2864;
{ /* Llib/sparql.scm 176 */
obj_t BgL_symbolz00_2862;
BgL_symbolz00_2862 = BgL_arg1898z00_991; 
{ /* Llib/sparql.scm 176 */
obj_t BgL_arg1283z00_2863;
BgL_arg1283z00_2863 = 
SYMBOL_TO_STRING(BgL_symbolz00_2862); 
BgL_res2548z00_2864 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1283z00_2863); } } 
BgL_arg1891z00_984 = BgL_res2548z00_2864; } } 
{ /* Llib/sparql.scm 178 */

{ /* Llib/sparql.scm 178 */
long BgL_auxz00_4679;
{ /* Llib/sparql.scm 178 */
obj_t BgL_pairz00_2865;
BgL_pairz00_2865 = BgL_optionz00_982; 
{ /* Llib/sparql.scm 178 */
obj_t BgL_pairz00_2868;
BgL_pairz00_2868 = 
CDR(BgL_pairz00_2865); 
BgL_auxz00_4679 = 
(long)CINT(
CAR(BgL_pairz00_2868)); } } 
BgL_arg1892z00_985 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4679, ((long)10)); } } 
{ /* Llib/sparql.scm 175 */
obj_t BgL_list1893z00_986;
{ /* Llib/sparql.scm 175 */
obj_t BgL_arg1894z00_987;
{ /* Llib/sparql.scm 175 */
obj_t BgL_arg1895z00_988;
{ /* Llib/sparql.scm 175 */
obj_t BgL_arg1896z00_989;
{ /* Llib/sparql.scm 175 */
obj_t BgL_arg1897z00_990;
BgL_arg1897z00_990 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BNIL); 
BgL_arg1896z00_989 = 
MAKE_PAIR(BgL_arg1892z00_985, BgL_arg1897z00_990); } 
BgL_arg1895z00_988 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1896z00_989); } 
BgL_arg1894z00_987 = 
MAKE_PAIR(BgL_arg1891z00_984, BgL_arg1895z00_988); } 
BgL_list1893z00_986 = 
MAKE_PAIR(BgL_accuz00_981, BgL_arg1894z00_987); } 
BgL_accuz00_4675 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1893z00_986); } } 
BgL_listz00_4691 = 
CDR(BgL_listz00_2871); 
BgL_listz00_2871 = BgL_listz00_4691; 
BgL_accuz00_2870 = BgL_accuz00_4675; 
goto BgL_foldz00_2869;}  else 
{ /* Llib/sparql.scm 174 */
BgL_arg1855z00_940 = BgL_accuz00_2870; } } } 
{ /* Llib/sparql.scm 164 */
obj_t BgL_list1856z00_941;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1857z00_942;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1858z00_943;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1859z00_944;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1860z00_945;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1861z00_946;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1862z00_947;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1863z00_948;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1864z00_949;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1865z00_950;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1866z00_951;
BgL_arg1866z00_951 = 
MAKE_PAIR(BgL_arg1855z00_940, BNIL); 
BgL_arg1865z00_950 = 
MAKE_PAIR(BGl_string2730z00zzsparqlz00, BgL_arg1866z00_951); } 
BgL_arg1864z00_949 = 
MAKE_PAIR(BgL_arg1854z00_939, BgL_arg1865z00_950); } 
BgL_arg1863z00_948 = 
MAKE_PAIR(BGl_string2731z00zzsparqlz00, BgL_arg1864z00_949); } 
BgL_arg1862z00_947 = 
MAKE_PAIR(BgL_arg1853z00_938, BgL_arg1863z00_948); } 
BgL_arg1861z00_946 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1862z00_947); } 
BgL_arg1860z00_945 = 
MAKE_PAIR(BgL_arg1852z00_937, BgL_arg1861z00_946); } 
BgL_arg1859z00_944 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1860z00_945); } 
BgL_arg1858z00_943 = 
MAKE_PAIR(BgL_arg1851z00_936, BgL_arg1859z00_944); } 
BgL_arg1857z00_942 = 
MAKE_PAIR(BGl_string2732z00zzsparqlz00, BgL_arg1858z00_943); } 
BgL_list1856z00_941 = 
MAKE_PAIR(BgL_arg1850z00_935, BgL_arg1857z00_942); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1856z00_941);} } } 
}



/* select-string */
obj_t BGl_selectzd2stringzd2zzsparqlz00(obj_t BgL_distinctz00_25, obj_t BgL_prefixsz00_26, obj_t BgL_sz00_27, obj_t BgL_wz00_28, obj_t BgL_optionsz00_29)
{ AN_OBJECT;
{ /* Llib/sparql.scm 183 */
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1900z00_996;obj_t BgL_arg1901z00_997;obj_t BgL_arg1902z00_998;obj_t BgL_arg1903z00_999;
{ 
obj_t BgL_accuz00_1009;obj_t BgL_prefixz00_1010;
{ 
obj_t BgL_accuz00_2890;obj_t BgL_listz00_2891;
BgL_accuz00_2890 = BGl_string2728z00zzsparqlz00; 
BgL_listz00_2891 = BgL_prefixsz00_26; 
BgL_foldz00_2889:
if(
PAIRP(BgL_listz00_2891))
{ 
obj_t BgL_listz00_4718;obj_t BgL_accuz00_4707;
BgL_accuz00_1009 = BgL_accuz00_2890; 
BgL_prefixz00_1010 = 
CAR(BgL_listz00_2891); 
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1914z00_1012;obj_t BgL_arg1915z00_1013;
BgL_arg1914z00_1012 = 
CAR(BgL_prefixz00_1010); 
{ /* Llib/sparql.scm 186 */
obj_t BgL_pairz00_2885;
BgL_pairz00_2885 = BgL_prefixz00_1010; 
BgL_arg1915z00_1013 = 
CAR(
CDR(BgL_pairz00_2885)); } 
{ /* Llib/sparql.scm 186 */
obj_t BgL_list1916z00_1014;
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1917z00_1015;
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1918z00_1016;
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1919z00_1017;
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1920z00_1018;
BgL_arg1920z00_1018 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BNIL); 
BgL_arg1919z00_1017 = 
MAKE_PAIR(BgL_arg1915z00_1013, BgL_arg1920z00_1018); } 
BgL_arg1918z00_1016 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1919z00_1017); } 
BgL_arg1917z00_1015 = 
MAKE_PAIR(BgL_arg1914z00_1012, BgL_arg1918z00_1016); } 
BgL_list1916z00_1014 = 
MAKE_PAIR(BGl_string2727z00zzsparqlz00, BgL_arg1917z00_1015); } 
BgL_accuz00_4707 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1916z00_1014); } } 
BgL_listz00_4718 = 
CDR(BgL_listz00_2891); 
BgL_listz00_2891 = BgL_listz00_4718; 
BgL_accuz00_2890 = BgL_accuz00_4707; 
goto BgL_foldz00_2889;}  else 
{ /* Llib/sparql.scm 185 */
BgL_arg1900z00_996 = BgL_accuz00_2890; } } } 
if(
CBOOL(BgL_distinctz00_25))
{ /* Llib/sparql.scm 188 */
BgL_arg1901z00_997 = BGl_string2733z00zzsparqlz00; }  else 
{ /* Llib/sparql.scm 188 */
BgL_arg1901z00_997 = BGl_string2728z00zzsparqlz00; } 
{ 
obj_t BgL_accuz00_1021;obj_t BgL_tz00_1022;
{ 
obj_t BgL_accuz00_2916;obj_t BgL_listz00_2917;
BgL_accuz00_2916 = BGl_string2728z00zzsparqlz00; 
BgL_listz00_2917 = BgL_wz00_28; 
BgL_foldz00_2915:
if(
PAIRP(BgL_listz00_2917))
{ 
obj_t BgL_listz00_4740;obj_t BgL_accuz00_4724;
BgL_accuz00_1021 = BgL_accuz00_2916; 
BgL_tz00_1022 = 
CAR(BgL_listz00_2917); 
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1923z00_1024;obj_t BgL_arg1924z00_1025;obj_t BgL_arg1925z00_1026;
BgL_arg1923z00_1024 = 
CAR(BgL_tz00_1022); 
{ /* Llib/sparql.scm 190 */
obj_t BgL_pairz00_2905;
BgL_pairz00_2905 = BgL_tz00_1022; 
BgL_arg1924z00_1025 = 
CAR(
CDR(BgL_pairz00_2905)); } 
{ /* Llib/sparql.scm 190 */
obj_t BgL_pairz00_2909;
BgL_pairz00_2909 = BgL_tz00_1022; 
BgL_arg1925z00_1026 = 
CAR(
CDR(
CDR(BgL_pairz00_2909))); } 
{ /* Llib/sparql.scm 190 */
obj_t BgL_list1926z00_1027;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1927z00_1028;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1928z00_1029;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1929z00_1030;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1930z00_1031;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1931z00_1032;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1932z00_1033;
BgL_arg1932z00_1033 = 
MAKE_PAIR(BGl_string2729z00zzsparqlz00, BNIL); 
BgL_arg1931z00_1032 = 
MAKE_PAIR(BgL_arg1925z00_1026, BgL_arg1932z00_1033); } 
BgL_arg1930z00_1031 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1931z00_1032); } 
BgL_arg1929z00_1030 = 
MAKE_PAIR(BgL_arg1924z00_1025, BgL_arg1930z00_1031); } 
BgL_arg1928z00_1029 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1929z00_1030); } 
BgL_arg1927z00_1028 = 
MAKE_PAIR(BgL_arg1923z00_1024, BgL_arg1928z00_1029); } 
BgL_list1926z00_1027 = 
MAKE_PAIR(BgL_accuz00_1021, BgL_arg1927z00_1028); } 
BgL_accuz00_4724 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1926z00_1027); } } 
BgL_listz00_4740 = 
CDR(BgL_listz00_2917); 
BgL_listz00_2917 = BgL_listz00_4740; 
BgL_accuz00_2916 = BgL_accuz00_4724; 
goto BgL_foldz00_2915;}  else 
{ /* Llib/sparql.scm 189 */
BgL_arg1902z00_998 = BgL_accuz00_2916; } } } 
{ 
obj_t BgL_accuz00_1036;obj_t BgL_optionz00_1037;
{ 
obj_t BgL_accuz00_2939;obj_t BgL_listz00_2940;
BgL_accuz00_2939 = BGl_string2728z00zzsparqlz00; 
BgL_listz00_2940 = BgL_optionsz00_29; 
BgL_foldz00_2938:
if(
PAIRP(BgL_listz00_2940))
{ 
obj_t BgL_listz00_4760;obj_t BgL_accuz00_4744;
BgL_accuz00_1036 = BgL_accuz00_2939; 
BgL_optionz00_1037 = 
CAR(BgL_listz00_2940); 
{ /* Llib/sparql.scm 195 */
obj_t BgL_arg1935z00_1039;obj_t BgL_arg1936z00_1040;
{ /* Llib/sparql.scm 195 */
obj_t BgL_arg1942z00_1046;
BgL_arg1942z00_1046 = 
CAR(BgL_optionz00_1037); 
{ /* Llib/sparql.scm 195 */
obj_t BgL_res2552z00_2933;
{ /* Llib/sparql.scm 195 */
obj_t BgL_symbolz00_2931;
BgL_symbolz00_2931 = BgL_arg1942z00_1046; 
{ /* Llib/sparql.scm 195 */
obj_t BgL_arg1283z00_2932;
BgL_arg1283z00_2932 = 
SYMBOL_TO_STRING(BgL_symbolz00_2931); 
BgL_res2552z00_2933 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1283z00_2932); } } 
BgL_arg1935z00_1039 = BgL_res2552z00_2933; } } 
{ /* Llib/sparql.scm 197 */

{ /* Llib/sparql.scm 197 */
long BgL_auxz00_4748;
{ /* Llib/sparql.scm 197 */
obj_t BgL_pairz00_2934;
BgL_pairz00_2934 = BgL_optionz00_1037; 
{ /* Llib/sparql.scm 197 */
obj_t BgL_pairz00_2937;
BgL_pairz00_2937 = 
CDR(BgL_pairz00_2934); 
BgL_auxz00_4748 = 
(long)CINT(
CAR(BgL_pairz00_2937)); } } 
BgL_arg1936z00_1040 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4748, ((long)10)); } } 
{ /* Llib/sparql.scm 194 */
obj_t BgL_list1937z00_1041;
{ /* Llib/sparql.scm 194 */
obj_t BgL_arg1938z00_1042;
{ /* Llib/sparql.scm 194 */
obj_t BgL_arg1939z00_1043;
{ /* Llib/sparql.scm 194 */
obj_t BgL_arg1940z00_1044;
{ /* Llib/sparql.scm 194 */
obj_t BgL_arg1941z00_1045;
BgL_arg1941z00_1045 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BNIL); 
BgL_arg1940z00_1044 = 
MAKE_PAIR(BgL_arg1936z00_1040, BgL_arg1941z00_1045); } 
BgL_arg1939z00_1043 = 
MAKE_PAIR(BGl_string2726z00zzsparqlz00, BgL_arg1940z00_1044); } 
BgL_arg1938z00_1042 = 
MAKE_PAIR(BgL_arg1935z00_1039, BgL_arg1939z00_1043); } 
BgL_list1937z00_1041 = 
MAKE_PAIR(BgL_accuz00_1036, BgL_arg1938z00_1042); } 
BgL_accuz00_4744 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1937z00_1041); } } 
BgL_listz00_4760 = 
CDR(BgL_listz00_2940); 
BgL_listz00_2940 = BgL_listz00_4760; 
BgL_accuz00_2939 = BgL_accuz00_4744; 
goto BgL_foldz00_2938;}  else 
{ /* Llib/sparql.scm 193 */
BgL_arg1903z00_999 = BgL_accuz00_2939; } } } 
{ /* Llib/sparql.scm 184 */
obj_t BgL_list1904z00_1000;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1905z00_1001;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1906z00_1002;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1907z00_1003;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1908z00_1004;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1909z00_1005;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1910z00_1006;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1911z00_1007;
BgL_arg1911z00_1007 = 
MAKE_PAIR(BgL_arg1903z00_999, BNIL); 
BgL_arg1910z00_1006 = 
MAKE_PAIR(BGl_string2730z00zzsparqlz00, BgL_arg1911z00_1007); } 
BgL_arg1909z00_1005 = 
MAKE_PAIR(BgL_arg1902z00_998, BgL_arg1910z00_1006); } 
BgL_arg1908z00_1004 = 
MAKE_PAIR(BGl_string2734z00zzsparqlz00, BgL_arg1909z00_1005); } 
BgL_arg1907z00_1003 = 
MAKE_PAIR(BgL_sz00_27, BgL_arg1908z00_1004); } 
BgL_arg1906z00_1002 = 
MAKE_PAIR(BgL_arg1901z00_997, BgL_arg1907z00_1003); } 
BgL_arg1905z00_1001 = 
MAKE_PAIR(BGl_string2735z00zzsparqlz00, BgL_arg1906z00_1002); } 
BgL_list1904z00_1000 = 
MAKE_PAIR(BgL_arg1900z00_996, BgL_arg1905z00_1001); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1904z00_1000);} } } 
}



/* construct */
BGL_EXPORTED_DEF obj_t BGl_constructz00zzsparqlz00(obj_t BgL_urlz00_30, obj_t BgL_mimez00_31, obj_t BgL_prefixsz00_32, obj_t BgL_cz00_33, obj_t BgL_wz00_34, obj_t BgL_optionsz00_35)
{ AN_OBJECT;
{ /* Llib/sparql.scm 202 */
return 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_30, BgL_mimez00_31, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_prefixsz00_32, BgL_cz00_33, BgL_wz00_34, BgL_optionsz00_35));} 
}



/* &construct */
obj_t BGl_z62constructz62zzsparqlz00(obj_t BgL_envz00_3319, obj_t BgL_urlz00_3320, obj_t BgL_mimez00_3321, obj_t BgL_prefixsz00_3322, obj_t BgL_cz00_3323, obj_t BgL_wz00_3324, obj_t BgL_optionsz00_3325)
{ AN_OBJECT;
{ /* Llib/sparql.scm 202 */
return 
BGl_constructz00zzsparqlz00(BgL_urlz00_3320, BgL_mimez00_3321, BgL_prefixsz00_3322, BgL_cz00_3323, BgL_wz00_3324, BgL_optionsz00_3325);} 
}



/* select */
BGL_EXPORTED_DEF obj_t BGl_selectz00zzsparqlz00(obj_t BgL_urlz00_36, obj_t BgL_mimez00_37, obj_t BgL_distinctz00_38, obj_t BgL_prefixsz00_39, obj_t BgL_sz00_40, obj_t BgL_wz00_41, obj_t BgL_optionsz00_42)
{ AN_OBJECT;
{ /* Llib/sparql.scm 206 */
return 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_36, BgL_mimez00_37, 
BGl_selectzd2stringzd2zzsparqlz00(BgL_distinctz00_38, BgL_prefixsz00_39, BgL_sz00_40, BgL_wz00_41, BgL_optionsz00_42));} 
}



/* &select */
obj_t BGl_z62selectz62zzsparqlz00(obj_t BgL_envz00_3326, obj_t BgL_urlz00_3327, obj_t BgL_mimez00_3328, obj_t BgL_distinctz00_3329, obj_t BgL_prefixsz00_3330, obj_t BgL_sz00_3331, obj_t BgL_wz00_3332, obj_t BgL_optionsz00_3333)
{ AN_OBJECT;
{ /* Llib/sparql.scm 206 */
return 
BGl_selectz00zzsparqlz00(BgL_urlz00_3327, BgL_mimez00_3328, BgL_distinctz00_3329, BgL_prefixsz00_3330, BgL_sz00_3331, BgL_wz00_3332, BgL_optionsz00_3333);} 
}



/* construct-nt */
BGL_EXPORTED_DEF obj_t BGl_constructzd2ntzd2zzsparqlz00(obj_t BgL_urlz00_43, obj_t BgL_optionsz00_44, obj_t BgL_cz00_45, obj_t BgL_wz00_46)
{ AN_OBJECT;
{ /* Llib/sparql.scm 210 */
{ /* Llib/sparql.scm 211 */
obj_t BgL_prefixsz00_2957;
BgL_prefixsz00_2957 = BGl_prefixsz00zzsparqlz00; 
return 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_43, BGl_string2722z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_prefixsz00_2957, BgL_cz00_45, BgL_wz00_46, BgL_optionsz00_44));} } 
}



/* &construct-nt */
obj_t BGl_z62constructzd2ntzb0zzsparqlz00(obj_t BgL_envz00_3334, obj_t BgL_urlz00_3335, obj_t BgL_optionsz00_3336, obj_t BgL_cz00_3337, obj_t BgL_wz00_3338)
{ AN_OBJECT;
{ /* Llib/sparql.scm 210 */
return 
BGl_constructzd2ntzd2zzsparqlz00(BgL_urlz00_3335, BgL_optionsz00_3336, BgL_cz00_3337, BgL_wz00_3338);} 
}



/* select-nt */
BGL_EXPORTED_DEF obj_t BGl_selectzd2ntzd2zzsparqlz00(obj_t BgL_urlz00_47, obj_t BgL_optionsz00_48, obj_t BgL_sz00_49, obj_t BgL_wz00_50)
{ AN_OBJECT;
{ /* Llib/sparql.scm 213 */
{ /* Llib/sparql.scm 214 */
obj_t BgL_prefixsz00_2965;
BgL_prefixsz00_2965 = BGl_prefixsz00zzsparqlz00; 
return 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_47, BGl_string2722z00zzsparqlz00, 
BGl_selectzd2stringzd2zzsparqlz00(BTRUE, BgL_prefixsz00_2965, BgL_sz00_49, BgL_wz00_50, BgL_optionsz00_48));} } 
}



/* &select-nt */
obj_t BGl_z62selectzd2ntzb0zzsparqlz00(obj_t BgL_envz00_3339, obj_t BgL_urlz00_3340, obj_t BgL_optionsz00_3341, obj_t BgL_sz00_3342, obj_t BgL_wz00_3343)
{ AN_OBJECT;
{ /* Llib/sparql.scm 213 */
return 
BGl_selectzd2ntzd2zzsparqlz00(BgL_urlz00_3340, BgL_optionsz00_3341, BgL_sz00_3342, BgL_wz00_3343);} 
}



/* construct-dbpedia */
BGL_EXPORTED_DEF obj_t BGl_constructzd2dbpediazd2zzsparqlz00(obj_t BgL_optionsz00_51, obj_t BgL_cz00_52, obj_t BgL_wz00_53)
{ AN_OBJECT;
{ /* Llib/sparql.scm 216 */
{ /* Llib/sparql.scm 219 */
obj_t BgL_arg1946z00_1053;
{ /* Llib/sparql.scm 219 */
obj_t BgL_arg1947z00_1054;obj_t BgL_arg1948z00_1055;
{ /* Llib/sparql.scm 219 */
obj_t BgL_list1951z00_1058;
{ /* Llib/sparql.scm 219 */
obj_t BgL_arg1952z00_1059;
BgL_arg1952z00_1059 = 
MAKE_PAIR(BGl_string2610z00zzsparqlz00, BNIL); 
BgL_list1951z00_1058 = 
MAKE_PAIR(BGl_string2609z00zzsparqlz00, BgL_arg1952z00_1059); } 
BgL_arg1947z00_1054 = BgL_list1951z00_1058; } 
{ /* Llib/sparql.scm 220 */
obj_t BgL_list1953z00_1060;
{ /* Llib/sparql.scm 220 */
obj_t BgL_arg1954z00_1061;
BgL_arg1954z00_1061 = 
MAKE_PAIR(BGl_string2613z00zzsparqlz00, BNIL); 
BgL_list1953z00_1060 = 
MAKE_PAIR(BGl_string2612z00zzsparqlz00, BgL_arg1954z00_1061); } 
BgL_arg1948z00_1055 = BgL_list1953z00_1060; } 
{ /* Llib/sparql.scm 218 */
obj_t BgL_list1949z00_1056;
{ /* Llib/sparql.scm 218 */
obj_t BgL_arg1950z00_1057;
BgL_arg1950z00_1057 = 
MAKE_PAIR(BgL_arg1948z00_1055, BNIL); 
BgL_list1949z00_1056 = 
MAKE_PAIR(BgL_arg1947z00_1054, BgL_arg1950z00_1057); } 
BgL_arg1946z00_1053 = BgL_list1949z00_1056; } } 
return 
BGl_sparqlzd2queryzd2zzsparqlz00(BGl_string2736z00zzsparqlz00, BGl_string2722z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_arg1946z00_1053, BgL_cz00_52, BgL_wz00_53, BgL_optionsz00_51));} } 
}



/* &construct-dbpedia */
obj_t BGl_z62constructzd2dbpediazb0zzsparqlz00(obj_t BgL_envz00_3344, obj_t BgL_optionsz00_3345, obj_t BgL_cz00_3346, obj_t BgL_wz00_3347)
{ AN_OBJECT;
{ /* Llib/sparql.scm 216 */
return 
BGl_constructzd2dbpediazd2zzsparqlz00(BgL_optionsz00_3345, BgL_cz00_3346, BgL_wz00_3347);} 
}



/* children-select */
BGL_EXPORTED_DEF obj_t BGl_childrenzd2selectzd2zzsparqlz00(obj_t BgL_urlz00_54, obj_t BgL_optionsz00_55, obj_t BgL_rootz00_56)
{ AN_OBJECT;
{ /* Llib/sparql.scm 223 */
{ /* Llib/sparql.scm 227 */
obj_t BgL_arg1955z00_1062;
{ /* Llib/sparql.scm 227 */
obj_t BgL_arg1960z00_1067;
{ /* Llib/sparql.scm 227 */
obj_t BgL_list1962z00_1069;
{ /* Llib/sparql.scm 227 */
obj_t BgL_arg1963z00_1070;
{ /* Llib/sparql.scm 227 */
obj_t BgL_arg1964z00_1071;
BgL_arg1964z00_1071 = 
MAKE_PAIR(BgL_rootz00_56, BNIL); 
BgL_arg1963z00_1070 = 
MAKE_PAIR(BGl_string2737z00zzsparqlz00, BgL_arg1964z00_1071); } 
BgL_list1962z00_1069 = 
MAKE_PAIR(BGl_string2738z00zzsparqlz00, BgL_arg1963z00_1070); } 
BgL_arg1960z00_1067 = BgL_list1962z00_1069; } 
{ /* Llib/sparql.scm 225 */
obj_t BgL_list1961z00_1068;
BgL_list1961z00_1068 = 
MAKE_PAIR(BgL_arg1960z00_1067, BNIL); 
{ /* Llib/sparql.scm 225 */
obj_t BgL_prefixsz00_2992;
BgL_prefixsz00_2992 = BGl_prefixsz00zzsparqlz00; 
BgL_arg1955z00_1062 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_54, BGl_string2722z00zzsparqlz00, 
BGl_selectzd2stringzd2zzsparqlz00(BTRUE, BgL_prefixsz00_2992, BGl_string2738z00zzsparqlz00, BgL_list1961z00_1068, BgL_optionsz00_55)); } } } 
{ /* Llib/sparql.scm 224 */
obj_t BgL_list1958z00_1065;
{ /* Llib/sparql.scm 224 */
obj_t BgL_arg1959z00_1066;
BgL_arg1959z00_1066 = 
MAKE_PAIR(BGl_proc2739z00zzsparqlz00, BNIL); 
BgL_list1958z00_1065 = 
MAKE_PAIR(BGl_proc2740z00zzsparqlz00, BgL_arg1959z00_1066); } 
return 
BGl_pipez00zzsparqlz00(BgL_arg1955z00_1062, BgL_list1958z00_1065);} } } 
}



/* &children-select */
obj_t BGl_z62childrenzd2selectzb0zzsparqlz00(obj_t BgL_envz00_3350, obj_t BgL_urlz00_3351, obj_t BgL_optionsz00_3352, obj_t BgL_rootz00_3353)
{ AN_OBJECT;
{ /* Llib/sparql.scm 223 */
return 
BGl_childrenzd2selectzd2zzsparqlz00(BgL_urlz00_3351, BgL_optionsz00_3352, BgL_rootz00_3353);} 
}



/* &<anonymous:1965> */
obj_t BGl_z62zc3anonymousza31965ze3ze1zzsparqlz00(obj_t BgL_envz00_3354, obj_t BgL_lz00_3355)
{ AN_OBJECT;
{ /* Llib/sparql.scm 228 */
return 
BGl_zc3anonymousza31966ze3z83zzsparqlz00(BgL_lz00_3355);} 
}



/* <anonymous:1966> */
obj_t BGl_zc3anonymousza31966ze3z83zzsparqlz00(obj_t BgL_lis1109z00_1075)
{ AN_OBJECT;
{ /* Llib/sparql.scm 228 */
BGl_zc3anonymousza31966ze3z83zzsparqlz00:
if(
NULLP(BgL_lis1109z00_1075))
{ /* Llib/sparql.scm 228 */
return BgL_lis1109z00_1075;}  else 
{ /* Llib/sparql.scm 228 */
obj_t BgL_head1110z00_1078;obj_t BgL_tail1111z00_1079;
BgL_head1110z00_1078 = 
CAR(BgL_lis1109z00_1075); 
BgL_tail1111z00_1079 = 
CDR(BgL_lis1109z00_1075); 
{ /* Llib/sparql.scm 228 */
bool_t BgL_testz00_4807;
{ /* Llib/sparql.scm 230 */
obj_t BgL_auxz00_4808;
{ /* Llib/sparql.scm 230 */
obj_t BgL_pairz00_3001;
BgL_pairz00_3001 = BgL_head1110z00_1078; 
BgL_auxz00_4808 = 
CAR(
CDR(BgL_pairz00_3001)); } 
BgL_testz00_4807 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_4808, BGl_string2741z00zzsparqlz00); } 
if(BgL_testz00_4807)
{ /* Llib/sparql.scm 228 */
obj_t BgL_newzd2tail1112zd2_1081;
BgL_newzd2tail1112zd2_1081 = 
BGl_zc3anonymousza31966ze3z83zzsparqlz00(BgL_tail1111z00_1079); 
if(
(BgL_tail1111z00_1079==BgL_newzd2tail1112zd2_1081))
{ /* Llib/sparql.scm 228 */
return BgL_lis1109z00_1075;}  else 
{ /* Llib/sparql.scm 228 */
obj_t BgL_res2560z00_3010;
BgL_res2560z00_3010 = 
MAKE_PAIR(BgL_head1110z00_1078, BgL_newzd2tail1112zd2_1081); 
return BgL_res2560z00_3010;} }  else 
{ 
obj_t BgL_lis1109z00_4816;
BgL_lis1109z00_4816 = BgL_tail1111z00_1079; 
BgL_lis1109z00_1075 = BgL_lis1109z00_4816; 
goto BGl_zc3anonymousza31966ze3z83zzsparqlz00;} } } } 
}



/* &<anonymous:1971> */
obj_t BGl_z62zc3anonymousza31971ze3ze1zzsparqlz00(obj_t BgL_envz00_3356, obj_t BgL_lz00_3357)
{ AN_OBJECT;
{ /* Llib/sparql.scm 233 */
{ 
obj_t BgL_lz00_1086;
BgL_lz00_1086 = BgL_lz00_3357; 
if(
NULLP(BgL_lz00_1086))
{ /* Llib/sparql.scm 233 */
return BNIL;}  else 
{ /* Llib/sparql.scm 233 */
obj_t BgL_head1115z00_1090;
{ /* Llib/sparql.scm 233 */
obj_t BgL_arg1978z00_1102;
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3014;
BgL_pairz00_3014 = 
CAR(BgL_lz00_1086); 
BgL_arg1978z00_1102 = 
CAR(
CDR(
CDR(BgL_pairz00_3014))); } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_res2562z00_3022;
BgL_res2562z00_3022 = 
MAKE_PAIR(BgL_arg1978z00_1102, BNIL); 
BgL_head1115z00_1090 = BgL_res2562z00_3022; } } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_g1119z00_1091;
BgL_g1119z00_1091 = 
CDR(BgL_lz00_1086); 
{ 
obj_t BgL_l1113z00_1093;obj_t BgL_tail1116z00_1094;
BgL_l1113z00_1093 = BgL_g1119z00_1091; 
BgL_tail1116z00_1094 = BgL_head1115z00_1090; 
BgL_zc3anonymousza31973ze3z83_1095:
if(
NULLP(BgL_l1113z00_1093))
{ /* Llib/sparql.scm 233 */
return BgL_head1115z00_1090;}  else 
{ /* Llib/sparql.scm 233 */
obj_t BgL_newtail1117z00_1097;
{ /* Llib/sparql.scm 233 */
obj_t BgL_arg1976z00_1099;
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3027;
BgL_pairz00_3027 = 
CAR(BgL_l1113z00_1093); 
BgL_arg1976z00_1099 = 
CAR(
CDR(
CDR(BgL_pairz00_3027))); } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_res2564z00_3035;
BgL_res2564z00_3035 = 
MAKE_PAIR(BgL_arg1976z00_1099, BNIL); 
BgL_newtail1117z00_1097 = BgL_res2564z00_3035; } } 
SET_CDR(BgL_tail1116z00_1094, BgL_newtail1117z00_1097); 
{ 
obj_t BgL_tail1116z00_4835;obj_t BgL_l1113z00_4833;
BgL_l1113z00_4833 = 
CDR(BgL_l1113z00_1093); 
BgL_tail1116z00_4835 = BgL_newtail1117z00_1097; 
BgL_tail1116z00_1094 = BgL_tail1116z00_4835; 
BgL_l1113z00_1093 = BgL_l1113z00_4833; 
goto BgL_zc3anonymousza31973ze3z83_1095;} } } } } } } 
}



/* children-construct */
BGL_EXPORTED_DEF obj_t BGl_childrenzd2constructzd2zzsparqlz00(obj_t BgL_urlz00_57, obj_t BgL_optionsz00_58, obj_t BgL_rootz00_59)
{ AN_OBJECT;
{ /* Llib/sparql.scm 235 */
{ /* Llib/sparql.scm 239 */
obj_t BgL_arg1980z00_1106;
{ /* Llib/sparql.scm 239 */
obj_t BgL_arg1983z00_1109;
{ /* Llib/sparql.scm 239 */
obj_t BgL_list1985z00_1111;
{ /* Llib/sparql.scm 239 */
obj_t BgL_arg1986z00_1112;
{ /* Llib/sparql.scm 239 */
obj_t BgL_arg1987z00_1113;
BgL_arg1987z00_1113 = 
MAKE_PAIR(BgL_rootz00_59, BNIL); 
BgL_arg1986z00_1112 = 
MAKE_PAIR(BGl_string2737z00zzsparqlz00, BgL_arg1987z00_1113); } 
BgL_list1985z00_1111 = 
MAKE_PAIR(BGl_string2738z00zzsparqlz00, BgL_arg1986z00_1112); } 
BgL_arg1983z00_1109 = BgL_list1985z00_1111; } 
{ /* Llib/sparql.scm 237 */
obj_t BgL_list1984z00_1110;
BgL_list1984z00_1110 = 
MAKE_PAIR(BgL_arg1983z00_1109, BNIL); 
{ /* Llib/sparql.scm 237 */
obj_t BgL_cz00_3043;
BgL_cz00_3043 = BGl_list2742z00zzsparqlz00; 
{ /* Llib/sparql.scm 237 */
obj_t BgL_prefixsz00_3047;
BgL_prefixsz00_3047 = BGl_prefixsz00zzsparqlz00; 
BgL_arg1980z00_1106 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_57, BGl_string2722z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_prefixsz00_3047, BgL_cz00_3043, BgL_list1984z00_1110, BgL_optionsz00_58)); } } } } 
{ /* Llib/sparql.scm 236 */
obj_t BgL_list1982z00_1108;
BgL_list1982z00_1108 = 
MAKE_PAIR(BGl_proc2744z00zzsparqlz00, BNIL); 
return 
BGl_pipez00zzsparqlz00(BgL_arg1980z00_1106, BgL_list1982z00_1108);} } } 
}



/* &children-construct */
obj_t BGl_z62childrenzd2constructzb0zzsparqlz00(obj_t BgL_envz00_3359, obj_t BgL_urlz00_3360, obj_t BgL_optionsz00_3361, obj_t BgL_rootz00_3362)
{ AN_OBJECT;
{ /* Llib/sparql.scm 235 */
return 
BGl_childrenzd2constructzd2zzsparqlz00(BgL_urlz00_3360, BgL_optionsz00_3361, BgL_rootz00_3362);} 
}



/* &<anonymous:1988> */
obj_t BGl_z62zc3anonymousza31988ze3ze1zzsparqlz00(obj_t BgL_envz00_3363, obj_t BgL_lz00_3364)
{ AN_OBJECT;
{ /* Llib/sparql.scm 240 */
{ 
obj_t BgL_lz00_1114;
BgL_lz00_1114 = BgL_lz00_3364; 
if(
NULLP(BgL_lz00_1114))
{ /* Llib/sparql.scm 240 */
return BNIL;}  else 
{ /* Llib/sparql.scm 240 */
obj_t BgL_head1122z00_1118;
{ /* Llib/sparql.scm 240 */
obj_t BgL_res2567z00_3056;
BgL_res2567z00_3056 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1122z00_1118 = BgL_res2567z00_3056; } 
{ 
obj_t BgL_l1120z00_1120;obj_t BgL_tail1123z00_1121;
BgL_l1120z00_1120 = BgL_lz00_1114; 
BgL_tail1123z00_1121 = BgL_head1122z00_1118; 
BgL_zc3anonymousza31990ze3z83_1122:
if(
NULLP(BgL_l1120z00_1120))
{ /* Llib/sparql.scm 240 */
return 
CDR(BgL_head1122z00_1118);}  else 
{ /* Llib/sparql.scm 240 */
obj_t BgL_newtail1124z00_1124;
{ /* Llib/sparql.scm 240 */
obj_t BgL_arg1993z00_1126;
BgL_arg1993z00_1126 = 
CAR(
CAR(BgL_l1120z00_1120)); 
{ /* Llib/sparql.scm 240 */
obj_t BgL_res2569z00_3064;
BgL_res2569z00_3064 = 
MAKE_PAIR(BgL_arg1993z00_1126, BNIL); 
BgL_newtail1124z00_1124 = BgL_res2569z00_3064; } } 
SET_CDR(BgL_tail1123z00_1121, BgL_newtail1124z00_1124); 
{ 
obj_t BgL_tail1123z00_4857;obj_t BgL_l1120z00_4855;
BgL_l1120z00_4855 = 
CDR(BgL_l1120z00_1120); 
BgL_tail1123z00_4857 = BgL_newtail1124z00_1124; 
BgL_tail1123z00_1121 = BgL_tail1123z00_4857; 
BgL_l1120z00_1120 = BgL_l1120z00_4855; 
goto BgL_zc3anonymousza31990ze3z83_1122;} } } } } } 
}



/* generate-ontology */
BGL_EXPORTED_DEF obj_t BGl_generatezd2ontologyzd2zzsparqlz00(obj_t BgL_urlz00_60, obj_t BgL_rootz00_61)
{ AN_OBJECT;
{ /* Llib/sparql.scm 242 */
{ /* Llib/sparql.scm 246 */
obj_t BgL_arg1994z00_1130;
{ /* Llib/sparql.scm 246 */
obj_t BgL_arg2001z00_1137;
{ /* Llib/sparql.scm 246 */
obj_t BgL_list2003z00_1139;
{ /* Llib/sparql.scm 246 */
obj_t BgL_arg2004z00_1140;
{ /* Llib/sparql.scm 246 */
obj_t BgL_arg2005z00_1141;
BgL_arg2005z00_1141 = 
MAKE_PAIR(BgL_rootz00_61, BNIL); 
BgL_arg2004z00_1140 = 
MAKE_PAIR(BGl_string2737z00zzsparqlz00, BgL_arg2005z00_1141); } 
BgL_list2003z00_1139 = 
MAKE_PAIR(BGl_string2738z00zzsparqlz00, BgL_arg2004z00_1140); } 
BgL_arg2001z00_1137 = BgL_list2003z00_1139; } 
{ /* Llib/sparql.scm 244 */
obj_t BgL_list2002z00_1138;
BgL_list2002z00_1138 = 
MAKE_PAIR(BgL_arg2001z00_1137, BNIL); 
{ /* Llib/sparql.scm 244 */
obj_t BgL_prefixsz00_3077;
BgL_prefixsz00_3077 = BGl_prefixsz00zzsparqlz00; 
BgL_arg1994z00_1130 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_60, BGl_string2722z00zzsparqlz00, 
BGl_selectzd2stringzd2zzsparqlz00(BTRUE, BgL_prefixsz00_3077, BGl_string2738z00zzsparqlz00, BgL_list2002z00_1138, BNIL)); } } } 
{ /* Llib/sparql.scm 247 */
obj_t BgL_zc3anonymousza32021ze3z83_3367;
BgL_zc3anonymousza32021ze3z83_3367 = 
MAKE_FX_PROCEDURE(BGl_z62zc3anonymousza32021ze3ze1zzsparqlz00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza32021ze3z83_3367, 
(int)(((long)0)), BgL_urlz00_60); 
PROCEDURE_SET(BgL_zc3anonymousza32021ze3z83_3367, 
(int)(((long)1)), BgL_rootz00_61); 
{ /* Llib/sparql.scm 243 */
obj_t BgL_list1998z00_1134;
{ /* Llib/sparql.scm 243 */
obj_t BgL_arg1999z00_1135;
{ /* Llib/sparql.scm 243 */
obj_t BgL_arg2000z00_1136;
BgL_arg2000z00_1136 = 
MAKE_PAIR(BgL_zc3anonymousza32021ze3z83_3367, BNIL); 
BgL_arg1999z00_1135 = 
MAKE_PAIR(BGl_proc2745z00zzsparqlz00, BgL_arg2000z00_1136); } 
BgL_list1998z00_1134 = 
MAKE_PAIR(BGl_proc2746z00zzsparqlz00, BgL_arg1999z00_1135); } 
return 
BGl_pipez00zzsparqlz00(BgL_arg1994z00_1130, BgL_list1998z00_1134);} } } } 
}



/* &generate-ontology */
obj_t BGl_z62generatezd2ontologyzb0zzsparqlz00(obj_t BgL_envz00_3368, obj_t BgL_urlz00_3369, obj_t BgL_rootz00_3370)
{ AN_OBJECT;
{ /* Llib/sparql.scm 242 */
return 
BGl_generatezd2ontologyzd2zzsparqlz00(BgL_urlz00_3369, BgL_rootz00_3370);} 
}



/* &<anonymous:2006> */
obj_t BGl_z62zc3anonymousza32006ze3ze1zzsparqlz00(obj_t BgL_envz00_3371, obj_t BgL_lz00_3372)
{ AN_OBJECT;
{ /* Llib/sparql.scm 247 */
return 
BGl_zc3anonymousza32007ze3z83zzsparqlz00(BgL_lz00_3372);} 
}



/* <anonymous:2007> */
obj_t BGl_zc3anonymousza32007ze3z83zzsparqlz00(obj_t BgL_lis1126z00_1145)
{ AN_OBJECT;
{ /* Llib/sparql.scm 247 */
BGl_zc3anonymousza32007ze3z83zzsparqlz00:
if(
NULLP(BgL_lis1126z00_1145))
{ /* Llib/sparql.scm 247 */
return BgL_lis1126z00_1145;}  else 
{ /* Llib/sparql.scm 247 */
obj_t BgL_head1127z00_1148;obj_t BgL_tail1128z00_1149;
BgL_head1127z00_1148 = 
CAR(BgL_lis1126z00_1145); 
BgL_tail1128z00_1149 = 
CDR(BgL_lis1126z00_1145); 
{ /* Llib/sparql.scm 247 */
bool_t BgL_testz00_4881;
{ /* Llib/sparql.scm 249 */
obj_t BgL_auxz00_4882;
{ /* Llib/sparql.scm 249 */
obj_t BgL_pairz00_3086;
BgL_pairz00_3086 = BgL_head1127z00_1148; 
BgL_auxz00_4882 = 
CAR(
CDR(BgL_pairz00_3086)); } 
BgL_testz00_4881 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_4882, BGl_string2741z00zzsparqlz00); } 
if(BgL_testz00_4881)
{ /* Llib/sparql.scm 247 */
obj_t BgL_newzd2tail1129zd2_1151;
BgL_newzd2tail1129zd2_1151 = 
BGl_zc3anonymousza32007ze3z83zzsparqlz00(BgL_tail1128z00_1149); 
if(
(BgL_tail1128z00_1149==BgL_newzd2tail1129zd2_1151))
{ /* Llib/sparql.scm 247 */
return BgL_lis1126z00_1145;}  else 
{ /* Llib/sparql.scm 247 */
obj_t BgL_res2573z00_3095;
BgL_res2573z00_3095 = 
MAKE_PAIR(BgL_head1127z00_1148, BgL_newzd2tail1129zd2_1151); 
return BgL_res2573z00_3095;} }  else 
{ 
obj_t BgL_lis1126z00_4890;
BgL_lis1126z00_4890 = BgL_tail1128z00_1149; 
BgL_lis1126z00_1145 = BgL_lis1126z00_4890; 
goto BGl_zc3anonymousza32007ze3z83zzsparqlz00;} } } } 
}



/* &<anonymous:2012> */
obj_t BGl_z62zc3anonymousza32012ze3ze1zzsparqlz00(obj_t BgL_envz00_3373, obj_t BgL_lz00_3374)
{ AN_OBJECT;
{ /* Llib/sparql.scm 252 */
{ 
obj_t BgL_lz00_1156;
BgL_lz00_1156 = BgL_lz00_3374; 
if(
NULLP(BgL_lz00_1156))
{ /* Llib/sparql.scm 252 */
return BNIL;}  else 
{ /* Llib/sparql.scm 252 */
obj_t BgL_head1132z00_1160;
{ /* Llib/sparql.scm 252 */
obj_t BgL_arg2019z00_1172;
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3099;
BgL_pairz00_3099 = 
CAR(BgL_lz00_1156); 
BgL_arg2019z00_1172 = 
CAR(
CDR(
CDR(BgL_pairz00_3099))); } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_res2575z00_3107;
BgL_res2575z00_3107 = 
MAKE_PAIR(BgL_arg2019z00_1172, BNIL); 
BgL_head1132z00_1160 = BgL_res2575z00_3107; } } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_g1135z00_1161;
BgL_g1135z00_1161 = 
CDR(BgL_lz00_1156); 
{ 
obj_t BgL_l1130z00_1163;obj_t BgL_tail1133z00_1164;
BgL_l1130z00_1163 = BgL_g1135z00_1161; 
BgL_tail1133z00_1164 = BgL_head1132z00_1160; 
BgL_zc3anonymousza32014ze3z83_1165:
if(
NULLP(BgL_l1130z00_1163))
{ /* Llib/sparql.scm 252 */
return BgL_head1132z00_1160;}  else 
{ /* Llib/sparql.scm 252 */
obj_t BgL_newtail1134z00_1167;
{ /* Llib/sparql.scm 252 */
obj_t BgL_arg2017z00_1169;
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3112;
BgL_pairz00_3112 = 
CAR(BgL_l1130z00_1163); 
BgL_arg2017z00_1169 = 
CAR(
CDR(
CDR(BgL_pairz00_3112))); } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_res2577z00_3120;
BgL_res2577z00_3120 = 
MAKE_PAIR(BgL_arg2017z00_1169, BNIL); 
BgL_newtail1134z00_1167 = BgL_res2577z00_3120; } } 
SET_CDR(BgL_tail1133z00_1164, BgL_newtail1134z00_1167); 
{ 
obj_t BgL_tail1133z00_4909;obj_t BgL_l1130z00_4907;
BgL_l1130z00_4907 = 
CDR(BgL_l1130z00_1163); 
BgL_tail1133z00_4909 = BgL_newtail1134z00_1167; 
BgL_tail1133z00_1164 = BgL_tail1133z00_4909; 
BgL_l1130z00_1163 = BgL_l1130z00_4907; 
goto BgL_zc3anonymousza32014ze3z83_1165;} } } } } } } 
}



/* &<anonymous:2021> */
obj_t BGl_z62zc3anonymousza32021ze3ze1zzsparqlz00(obj_t BgL_envz00_3375, obj_t BgL_lz00_3378)
{ AN_OBJECT;
{ /* Llib/sparql.scm 253 */
{ /* Llib/sparql.scm 253 */
obj_t BgL_urlz00_3376;obj_t BgL_rootz00_3377;
BgL_urlz00_3376 = 
PROCEDURE_REF(BgL_envz00_3375, 
(int)(((long)0))); 
BgL_rootz00_3377 = 
PROCEDURE_REF(BgL_envz00_3375, 
(int)(((long)1))); 
{ 
obj_t BgL_lz00_1174;
BgL_lz00_1174 = BgL_lz00_3378; 
{ /* Llib/sparql.scm 253 */
obj_t BgL_arg2022z00_1176;
if(
NULLP(BgL_lz00_1174))
{ /* Llib/sparql.scm 253 */
BgL_arg2022z00_1176 = BNIL; }  else 
{ /* Llib/sparql.scm 253 */
obj_t BgL_head1138z00_1181;
{ /* Llib/sparql.scm 253 */
obj_t BgL_res2579z00_3128;
BgL_res2579z00_3128 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1138z00_1181 = BgL_res2579z00_3128; } 
{ 
obj_t BgL_l1136z00_1183;obj_t BgL_tail1139z00_1184;
BgL_l1136z00_1183 = BgL_lz00_1174; 
BgL_tail1139z00_1184 = BgL_head1138z00_1181; 
BgL_zc3anonymousza32026ze3z83_1185:
if(
NULLP(BgL_l1136z00_1183))
{ /* Llib/sparql.scm 253 */
BgL_arg2022z00_1176 = 
CDR(BgL_head1138z00_1181); }  else 
{ /* Llib/sparql.scm 253 */
obj_t BgL_newtail1140z00_1187;
{ /* Llib/sparql.scm 253 */
obj_t BgL_arg2029z00_1189;
BgL_arg2029z00_1189 = 
BGl_generatezd2ontologyzd2zzsparqlz00(BgL_urlz00_3376, 
CAR(BgL_l1136z00_1183)); 
{ /* Llib/sparql.scm 253 */
obj_t BgL_res2581z00_3135;
BgL_res2581z00_3135 = 
MAKE_PAIR(BgL_arg2029z00_1189, BNIL); 
BgL_newtail1140z00_1187 = BgL_res2581z00_3135; } } 
SET_CDR(BgL_tail1139z00_1184, BgL_newtail1140z00_1187); 
{ 
obj_t BgL_tail1139z00_4926;obj_t BgL_l1136z00_4924;
BgL_l1136z00_4924 = 
CDR(BgL_l1136z00_1183); 
BgL_tail1139z00_4926 = BgL_newtail1140z00_1187; 
BgL_tail1139z00_1184 = BgL_tail1139z00_4926; 
BgL_l1136z00_1183 = BgL_l1136z00_4924; 
goto BgL_zc3anonymousza32026ze3z83_1185;} } } } 
{ /* Llib/sparql.scm 253 */
obj_t BgL_list2023z00_1177;
{ /* Llib/sparql.scm 253 */
obj_t BgL_arg2024z00_1178;
BgL_arg2024z00_1178 = 
MAKE_PAIR(BgL_arg2022z00_1176, BNIL); 
BgL_list2023z00_1177 = 
MAKE_PAIR(BgL_rootz00_3377, BgL_arg2024z00_1178); } 
return BgL_list2023z00_1177;} } } } } 
}



/* tree->string */
BGL_EXPORTED_DEF obj_t BGl_treezd2ze3stringz31zzsparqlz00(obj_t BgL_treez00_62)
{ AN_OBJECT;
{ /* Llib/sparql.scm 257 */
return 
BGl_z62treezd2ze3stringzd2levelz81zzsparqlz00(BgL_treez00_62, 
BINT(((long)0)));} 
}



/* &tree->string */
obj_t BGl_z62treezd2ze3stringz53zzsparqlz00(obj_t BgL_envz00_3381, obj_t BgL_treez00_3382)
{ AN_OBJECT;
{ /* Llib/sparql.scm 257 */
return 
BGl_treezd2ze3stringz31zzsparqlz00(BgL_treez00_3382);} 
}



/* &tree->string-level */
obj_t BGl_z62treezd2ze3stringzd2levelz81zzsparqlz00(obj_t BgL_treez00_1216, obj_t BgL_levelz00_1217)
{ AN_OBJECT;
{ /* Llib/sparql.scm 270 */
{ 
obj_t BgL_nz00_1198;
{ /* Llib/sparql.scm 268 */
obj_t BgL_arg2040z00_1219;obj_t BgL_arg2041z00_1220;obj_t BgL_arg2042z00_1221;
BgL_nz00_1198 = BgL_levelz00_1217; 
{ /* Llib/sparql.scm 260 */
obj_t BgL_arg2032z00_1201;
BgL_arg2032z00_1201 = 
BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(
CINT(BgL_nz00_1198), BNIL); 
{ 
obj_t BgL_accuz00_3142;obj_t BgL_listz00_3143;
BgL_accuz00_3142 = BGl_string2728z00zzsparqlz00; 
BgL_listz00_3143 = BgL_arg2032z00_1201; 
BgL_foldz00_3141:
if(
PAIRP(BgL_listz00_3143))
{ 
obj_t BgL_listz00_4938;obj_t BgL_accuz00_4936;
BgL_accuz00_4936 = 
string_append(BGl_string2747z00zzsparqlz00, BgL_accuz00_3142); 
BgL_listz00_4938 = 
CDR(BgL_listz00_3143); 
BgL_listz00_3143 = BgL_listz00_4938; 
BgL_accuz00_3142 = BgL_accuz00_4936; 
goto BgL_foldz00_3141;}  else 
{ /* Llib/sparql.scm 259 */
BgL_arg2040z00_1219 = BgL_accuz00_3142; } } } 
BgL_arg2041z00_1220 = 
CAR(BgL_treez00_1216); 
{ /* Llib/sparql.scm 270 */
obj_t BgL_arg2047z00_1226;obj_t BgL_arg2048z00_1227;
{ /* Llib/sparql.scm 270 */
obj_t BgL_pairz00_3182;
BgL_pairz00_3182 = BgL_treez00_1216; 
BgL_arg2047z00_1226 = 
CAR(
CDR(BgL_pairz00_3182)); } 
if(
INTEGERP(BgL_levelz00_1217))
{ /* Llib/sparql.scm 270 */
long BgL_auxz00_4945;
BgL_auxz00_4945 = 
(long)CINT(BgL_levelz00_1217); 
BgL_arg2048z00_1227 = 
BGL_SAFE_PLUS_FX(((long)1), BgL_auxz00_4945); }  else 
{ /* Llib/sparql.scm 270 */
BgL_arg2048z00_1227 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(
BINT(((long)1)), BgL_levelz00_1217); } 
{ /* Llib/sparql.scm 270 */
obj_t BgL_zc3anonymousza32037ze3z83_3379;
BgL_zc3anonymousza32037ze3z83_3379 = 
MAKE_FX_PROCEDURE(BGl_z62zc3anonymousza32037ze3ze1zzsparqlz00, 
(int)(((long)2)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32037ze3z83_3379, 
(int)(((long)0)), BgL_arg2048z00_1227); 
BgL_arg2042z00_1221 = 
BGl_foldz00zzsparqlz00(BgL_zc3anonymousza32037ze3z83_3379, BGl_string2728z00zzsparqlz00, BgL_arg2047z00_1226); } } 
{ /* Llib/sparql.scm 267 */
obj_t BgL_list2043z00_1222;
{ /* Llib/sparql.scm 267 */
obj_t BgL_arg2044z00_1223;
{ /* Llib/sparql.scm 267 */
obj_t BgL_arg2045z00_1224;
{ /* Llib/sparql.scm 267 */
obj_t BgL_arg2046z00_1225;
BgL_arg2046z00_1225 = 
MAKE_PAIR(BgL_arg2042z00_1221, BNIL); 
BgL_arg2045z00_1224 = 
MAKE_PAIR(BGl_string2748z00zzsparqlz00, BgL_arg2046z00_1225); } 
BgL_arg2044z00_1223 = 
MAKE_PAIR(BgL_arg2041z00_1220, BgL_arg2045z00_1224); } 
BgL_list2043z00_1222 = 
MAKE_PAIR(BgL_arg2040z00_1219, BgL_arg2044z00_1223); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2043z00_1222);} } } } 
}



/* &<anonymous:2037> */
obj_t BGl_z62zc3anonymousza32037ze3ze1zzsparqlz00(obj_t BgL_envz00_3383, obj_t BgL_accuz00_3385, obj_t BgL_childz00_3386)
{ AN_OBJECT;
{ /* Llib/sparql.scm 263 */
{ /* Llib/sparql.scm 270 */
obj_t BgL_levelz00_3384;
BgL_levelz00_3384 = 
PROCEDURE_REF(BgL_envz00_3383, 
(int)(((long)0))); 
{ 
obj_t BgL_accuz00_3191;obj_t BgL_childz00_3192;
BgL_accuz00_3191 = BgL_accuz00_3385; 
BgL_childz00_3192 = BgL_childz00_3386; 
return 
string_append(BgL_accuz00_3191, 
BGl_z62treezd2ze3stringzd2levelz81zzsparqlz00(BgL_childz00_3192, BgL_levelz00_3384));} } } 
}



/* instance-ontology */
BGL_EXPORTED_DEF obj_t BGl_instancezd2ontologyzd2zzsparqlz00(obj_t BgL_urlz00_63, obj_t BgL_typez00_64, obj_t BgL_optionsz00_65)
{ AN_OBJECT;
{ /* Llib/sparql.scm 273 */
{ /* Llib/sparql.scm 276 */
obj_t BgL_arg2050z00_1232;
{ /* Llib/sparql.scm 276 */
obj_t BgL_arg2053z00_1235;obj_t BgL_arg2054z00_1236;
{ /* Llib/sparql.scm 276 */
obj_t BgL_list2056z00_1238;
{ /* Llib/sparql.scm 276 */
obj_t BgL_arg2057z00_1239;
{ /* Llib/sparql.scm 276 */
obj_t BgL_arg2058z00_1240;
BgL_arg2058z00_1240 = 
MAKE_PAIR(BgL_typez00_64, BNIL); 
BgL_arg2057z00_1239 = 
MAKE_PAIR(BGl_string2749z00zzsparqlz00, BgL_arg2058z00_1240); } 
BgL_list2056z00_1238 = 
MAKE_PAIR(BGl_string2750z00zzsparqlz00, BgL_arg2057z00_1239); } 
BgL_arg2053z00_1235 = BgL_list2056z00_1238; } 
{ /* Llib/sparql.scm 277 */
obj_t BgL_list2059z00_1241;
{ /* Llib/sparql.scm 277 */
obj_t BgL_arg2060z00_1242;
{ /* Llib/sparql.scm 277 */
obj_t BgL_arg2061z00_1243;
BgL_arg2061z00_1243 = 
MAKE_PAIR(BgL_typez00_64, BNIL); 
BgL_arg2060z00_1242 = 
MAKE_PAIR(BGl_string2749z00zzsparqlz00, BgL_arg2061z00_1243); } 
BgL_list2059z00_1241 = 
MAKE_PAIR(BGl_string2750z00zzsparqlz00, BgL_arg2060z00_1242); } 
BgL_arg2054z00_1236 = BgL_list2059z00_1241; } 
{ /* Llib/sparql.scm 275 */
obj_t BgL_list2055z00_1237;
BgL_list2055z00_1237 = 
MAKE_PAIR(BgL_arg2054z00_1236, BNIL); 
{ /* Llib/sparql.scm 275 */
obj_t BgL_prefixsz00_3205;
BgL_prefixsz00_3205 = BGl_prefixsz00zzsparqlz00; 
BgL_arg2050z00_1232 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_63, BGl_string2722z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_prefixsz00_3205, BgL_arg2053z00_1235, BgL_list2055z00_1237, BgL_optionsz00_65)); } } } 
{ /* Llib/sparql.scm 274 */
obj_t BgL_list2052z00_1234;
BgL_list2052z00_1234 = 
MAKE_PAIR(BGl_proc2751z00zzsparqlz00, BNIL); 
return 
BGl_pipez00zzsparqlz00(BgL_arg2050z00_1232, BgL_list2052z00_1234);} } } 
}



/* &instance-ontology */
obj_t BGl_z62instancezd2ontologyzb0zzsparqlz00(obj_t BgL_envz00_3388, obj_t BgL_urlz00_3389, obj_t BgL_typez00_3390, obj_t BgL_optionsz00_3391)
{ AN_OBJECT;
{ /* Llib/sparql.scm 273 */
return 
BGl_instancezd2ontologyzd2zzsparqlz00(BgL_urlz00_3389, BgL_typez00_3390, BgL_optionsz00_3391);} 
}



/* &<anonymous:2062> */
obj_t BGl_z62zc3anonymousza32062ze3ze1zzsparqlz00(obj_t BgL_envz00_3392, obj_t BgL_lz00_3393)
{ AN_OBJECT;
{ /* Llib/sparql.scm 278 */
{ 
obj_t BgL_lz00_1244;
BgL_lz00_1244 = BgL_lz00_3393; 
if(
NULLP(BgL_lz00_1244))
{ /* Llib/sparql.scm 278 */
return BNIL;}  else 
{ /* Llib/sparql.scm 278 */
obj_t BgL_head1143z00_1248;
{ /* Llib/sparql.scm 278 */
obj_t BgL_res2589z00_3214;
BgL_res2589z00_3214 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1143z00_1248 = BgL_res2589z00_3214; } 
{ 
obj_t BgL_l1141z00_1250;obj_t BgL_tail1144z00_1251;
BgL_l1141z00_1250 = BgL_lz00_1244; 
BgL_tail1144z00_1251 = BgL_head1143z00_1248; 
BgL_zc3anonymousza32064ze3z83_1252:
if(
NULLP(BgL_l1141z00_1250))
{ /* Llib/sparql.scm 278 */
return 
CDR(BgL_head1143z00_1248);}  else 
{ /* Llib/sparql.scm 278 */
obj_t BgL_newtail1145z00_1254;
{ /* Llib/sparql.scm 278 */
obj_t BgL_arg2067z00_1256;
BgL_arg2067z00_1256 = 
CAR(
CAR(BgL_l1141z00_1250)); 
{ /* Llib/sparql.scm 278 */
obj_t BgL_res2591z00_3222;
BgL_res2591z00_3222 = 
MAKE_PAIR(BgL_arg2067z00_1256, BNIL); 
BgL_newtail1145z00_1254 = BgL_res2591z00_3222; } } 
SET_CDR(BgL_tail1144z00_1251, BgL_newtail1145z00_1254); 
{ 
obj_t BgL_tail1144z00_4989;obj_t BgL_l1141z00_4987;
BgL_l1141z00_4987 = 
CDR(BgL_l1141z00_1250); 
BgL_tail1144z00_4989 = BgL_newtail1145z00_1254; 
BgL_tail1144z00_1251 = BgL_tail1144z00_4989; 
BgL_l1141z00_1250 = BgL_l1141z00_4987; 
goto BgL_zc3anonymousza32064ze3z83_1252;} } } } } } 
}



/* predicat-object */
BGL_EXPORTED_DEF obj_t BGl_predicatzd2objectzd2zzsparqlz00(obj_t BgL_urlz00_68, obj_t BgL_uriz00_69, obj_t BgL_optionsz00_70)
{ AN_OBJECT;
{ /* Llib/sparql.scm 295 */
{ /* Llib/sparql.scm 299 */
obj_t BgL_arg2109z00_1324;obj_t BgL_arg2110z00_1325;
{ /* Llib/sparql.scm 300 */
obj_t BgL_list2112z00_1327;
{ /* Llib/sparql.scm 300 */
obj_t BgL_arg2113z00_1328;
{ /* Llib/sparql.scm 300 */
obj_t BgL_arg2114z00_1329;
BgL_arg2114z00_1329 = 
MAKE_PAIR(BGl_string2752z00zzsparqlz00, BNIL); 
BgL_arg2113z00_1328 = 
MAKE_PAIR(BGl_string2753z00zzsparqlz00, BgL_arg2114z00_1329); } 
BgL_list2112z00_1327 = 
MAKE_PAIR(BgL_uriz00_69, BgL_arg2113z00_1328); } 
BgL_arg2109z00_1324 = BgL_list2112z00_1327; } 
{ /* Llib/sparql.scm 301 */
obj_t BgL_arg2115z00_1330;
{ /* Llib/sparql.scm 301 */
obj_t BgL_list2117z00_1332;
{ /* Llib/sparql.scm 301 */
obj_t BgL_arg2118z00_1333;
{ /* Llib/sparql.scm 301 */
obj_t BgL_arg2119z00_1334;
BgL_arg2119z00_1334 = 
MAKE_PAIR(BGl_string2752z00zzsparqlz00, BNIL); 
BgL_arg2118z00_1333 = 
MAKE_PAIR(BGl_string2753z00zzsparqlz00, BgL_arg2119z00_1334); } 
BgL_list2117z00_1332 = 
MAKE_PAIR(BgL_uriz00_69, BgL_arg2118z00_1333); } 
BgL_arg2115z00_1330 = BgL_list2117z00_1332; } 
{ /* Llib/sparql.scm 301 */
obj_t BgL_list2116z00_1331;
BgL_list2116z00_1331 = 
MAKE_PAIR(BgL_arg2115z00_1330, BNIL); 
BgL_arg2110z00_1325 = BgL_list2116z00_1331; } } 
return 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_68, BGl_string2722z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BNIL, BgL_arg2109z00_1324, BgL_arg2110z00_1325, BgL_optionsz00_70));} } 
}



/* &predicat-object */
obj_t BGl_z62predicatzd2objectzb0zzsparqlz00(obj_t BgL_envz00_3394, obj_t BgL_urlz00_3395, obj_t BgL_uriz00_3396, obj_t BgL_optionsz00_3397)
{ AN_OBJECT;
{ /* Llib/sparql.scm 295 */
return 
BGl_predicatzd2objectzd2zzsparqlz00(BgL_urlz00_3395, BgL_uriz00_3396, BgL_optionsz00_3397);} 
}



/* subject-predicat */
BGL_EXPORTED_DEF obj_t BGl_subjectzd2predicatzd2zzsparqlz00(obj_t BgL_urlz00_71, obj_t BgL_objectz00_72, obj_t BgL_optionsz00_73)
{ AN_OBJECT;
{ /* Llib/sparql.scm 315 */
{ /* Llib/sparql.scm 320 */
obj_t BgL_arg2120z00_1335;
{ /* Llib/sparql.scm 320 */
obj_t BgL_arg2124z00_1339;obj_t BgL_arg2125z00_1340;
{ /* Llib/sparql.scm 321 */
obj_t BgL_list2127z00_1342;
{ /* Llib/sparql.scm 321 */
obj_t BgL_arg2128z00_1343;
{ /* Llib/sparql.scm 321 */
obj_t BgL_arg2129z00_1344;
BgL_arg2129z00_1344 = 
MAKE_PAIR(BgL_objectz00_72, BNIL); 
BgL_arg2128z00_1343 = 
MAKE_PAIR(BGl_string2753z00zzsparqlz00, BgL_arg2129z00_1344); } 
BgL_list2127z00_1342 = 
MAKE_PAIR(BGl_string2738z00zzsparqlz00, BgL_arg2128z00_1343); } 
BgL_arg2124z00_1339 = BgL_list2127z00_1342; } 
{ /* Llib/sparql.scm 322 */
obj_t BgL_arg2130z00_1345;
{ /* Llib/sparql.scm 322 */
obj_t BgL_list2132z00_1347;
{ /* Llib/sparql.scm 322 */
obj_t BgL_arg2133z00_1348;
{ /* Llib/sparql.scm 322 */
obj_t BgL_arg2134z00_1349;
BgL_arg2134z00_1349 = 
MAKE_PAIR(BgL_objectz00_72, BNIL); 
BgL_arg2133z00_1348 = 
MAKE_PAIR(BGl_string2753z00zzsparqlz00, BgL_arg2134z00_1349); } 
BgL_list2132z00_1347 = 
MAKE_PAIR(BGl_string2738z00zzsparqlz00, BgL_arg2133z00_1348); } 
BgL_arg2130z00_1345 = BgL_list2132z00_1347; } 
{ /* Llib/sparql.scm 322 */
obj_t BgL_list2131z00_1346;
BgL_list2131z00_1346 = 
MAKE_PAIR(BgL_arg2130z00_1345, BNIL); 
BgL_arg2125z00_1340 = BgL_list2131z00_1346; } } 
BgL_arg2120z00_1335 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_71, BGl_string2722z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BNIL, BgL_arg2124z00_1339, BgL_arg2125z00_1340, BgL_optionsz00_73)); } 
{ /* Llib/sparql.scm 316 */
obj_t BgL_list2122z00_1337;
BgL_list2122z00_1337 = 
MAKE_PAIR(BGl_proc2754z00zzsparqlz00, BNIL); 
return 
BGl_pipez00zzsparqlz00(BgL_arg2120z00_1335, BgL_list2122z00_1337);} } } 
}



/* &subject-predicat */
obj_t BGl_z62subjectzd2predicatzb0zzsparqlz00(obj_t BgL_envz00_3399, obj_t BgL_urlz00_3400, obj_t BgL_objectz00_3401, obj_t BgL_optionsz00_3402)
{ AN_OBJECT;
{ /* Llib/sparql.scm 315 */
return 
BGl_subjectzd2predicatzd2zzsparqlz00(BgL_urlz00_3400, BgL_objectz00_3401, BgL_optionsz00_3402);} 
}



/* &<anonymous:2135> */
obj_t BGl_z62zc3anonymousza32135ze3ze1zzsparqlz00(obj_t BgL_envz00_3403, obj_t BgL_lz00_3404)
{ AN_OBJECT;
{ /* Llib/sparql.scm 324 */
{ 
obj_t BgL_lz00_1350;
BgL_lz00_1350 = BgL_lz00_3404; 
if(
NULLP(BgL_lz00_1350))
{ /* Llib/sparql.scm 324 */
return BNIL;}  else 
{ /* Llib/sparql.scm 324 */
obj_t BgL_head1158z00_1354;
{ /* Llib/sparql.scm 324 */
obj_t BgL_res2601z00_3260;
BgL_res2601z00_3260 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1158z00_1354 = BgL_res2601z00_3260; } 
{ 
obj_t BgL_l1156z00_1356;obj_t BgL_tail1159z00_1357;
BgL_l1156z00_1356 = BgL_lz00_1350; 
BgL_tail1159z00_1357 = BgL_head1158z00_1354; 
BgL_zc3anonymousza32137ze3z83_1358:
if(
NULLP(BgL_l1156z00_1356))
{ /* Llib/sparql.scm 324 */
return 
CDR(BgL_head1158z00_1354);}  else 
{ /* Llib/sparql.scm 324 */
obj_t BgL_newtail1160z00_1360;
{ /* Llib/sparql.scm 324 */
obj_t BgL_arg2140z00_1362;
{ /* Llib/sparql.scm 324 */
obj_t BgL_tz00_1363;
BgL_tz00_1363 = 
CAR(BgL_l1156z00_1356); 
{ /* Llib/sparql.scm 324 */
obj_t BgL_arg2141z00_1364;obj_t BgL_arg2142z00_1365;
BgL_arg2141z00_1364 = 
CAR(BgL_tz00_1363); 
{ /* Llib/sparql.scm 324 */
obj_t BgL_pairz00_3266;
BgL_pairz00_3266 = BgL_tz00_1363; 
BgL_arg2142z00_1365 = 
CAR(
CDR(BgL_pairz00_3266)); } 
{ /* Llib/sparql.scm 324 */
obj_t BgL_list2143z00_1366;
{ /* Llib/sparql.scm 324 */
obj_t BgL_arg2144z00_1367;
BgL_arg2144z00_1367 = 
MAKE_PAIR(BgL_arg2142z00_1365, BNIL); 
BgL_list2143z00_1366 = 
MAKE_PAIR(BgL_arg2141z00_1364, BgL_arg2144z00_1367); } 
BgL_arg2140z00_1362 = BgL_list2143z00_1366; } } } 
{ /* Llib/sparql.scm 324 */
obj_t BgL_res2604z00_3274;
BgL_res2604z00_3274 = 
MAKE_PAIR(BgL_arg2140z00_1362, BNIL); 
BgL_newtail1160z00_1360 = BgL_res2604z00_3274; } } 
SET_CDR(BgL_tail1159z00_1357, BgL_newtail1160z00_1360); 
{ 
obj_t BgL_tail1159z00_5028;obj_t BgL_l1156z00_5026;
BgL_l1156z00_5026 = 
CDR(BgL_l1156z00_1356); 
BgL_tail1159z00_5028 = BgL_newtail1160z00_1360; 
BgL_tail1159z00_1357 = BgL_tail1159z00_5028; 
BgL_l1156z00_1356 = BgL_l1156z00_5026; 
goto BgL_zc3anonymousza32137ze3z83_1358;} } } } } } 
}



/* entity */
BGL_EXPORTED_DEF obj_t BGl_entityz00zzsparqlz00(obj_t BgL_uriz00_74)
{ AN_OBJECT;
{ /* Llib/sparql.scm 326 */
{ /* Llib/sparql.scm 327 */
obj_t BgL_arg2145z00_1370;
{ /* Llib/sparql.scm 327 */
obj_t BgL_arg2146z00_1371;
{ /* Llib/sparql.scm 327 */
obj_t BgL_arg2147z00_1372;
{ /* Llib/sparql.scm 327 */
obj_t BgL_list2148z00_1373;
BgL_list2148z00_1373 = 
MAKE_PAIR(BGl_string2755z00zzsparqlz00, BNIL); 
BgL_arg2147z00_1372 = 
BGl_stringzd2splitzd2zz__r4_strings_6_7z00(BgL_uriz00_74, BgL_list2148z00_1373); } 
BgL_arg2146z00_1371 = 
bgl_reverse(BgL_arg2147z00_1372); } 
BgL_arg2145z00_1370 = 
CAR(BgL_arg2146z00_1371); } 
return 
BGl_stringzd2replacezd2zz__r4_strings_6_7z00(BgL_arg2145z00_1370, 
(char)(((unsigned char)'_')), 
(char)(((unsigned char)' ')));} } 
}



/* &entity */
obj_t BGl_z62entityz62zzsparqlz00(obj_t BgL_envz00_3405, obj_t BgL_uriz00_3406)
{ AN_OBJECT;
{ /* Llib/sparql.scm 326 */
return 
BGl_entityz00zzsparqlz00(BgL_uriz00_3406);} 
}



/* object-init */
obj_t BGl_objectzd2initzd2zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
return BUNSPEC;} 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
return BUNSPEC;} 
}

#ifdef __cplusplus
}
#endif
