/*===========================================================================*/
/*   (Llib/sparql.scm)                                                       */
/*   Bigloo (3.9a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Thu Oct 25 08:26:27 CEST 2012       */
/*===========================================================================*/
/* COMPILATION: (bigloo -O3 -mkaddlib -g -cg -cc gcc -fsharing -q -rm -unsafev Llib/sparql.scm -o Obj/sparql.o -c)*/
/* GC selection */
#define THE_GC BOEHM_GC

/* debug mode */
#define BIGLOO_DEBUG 1

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_constructzd2dbpediazd2zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3610z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3613z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3616z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_sparqlzd2grammarzd2tokensz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_keyword3823z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t, unsigned char, unsigned char);
static obj_t BGl_symbol3628z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_imdbz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62treezd2ze3stringzd2levelz81zzsparqlz00(obj_t, obj_t);
static obj_t BGl_symbol3632z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3639z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza31422za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3111ze3z23zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_treezd2ze3stringz31zzsparqlz00(obj_t);
BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62sparqlzd2queryzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3801z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3803z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_dbpediaz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3647z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62foldz62zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl___makezd2parserzd2zz__lalr_driverz00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_instancezd2ontologyzd2zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3734z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3817z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3819z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3577z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zzsparqlz00();
static obj_t BGl_symbol3900z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_foldz00zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3580z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3743z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3663z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3745z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3908z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3828z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3666z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3669z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza32031za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3243ze3z23zzsparqlz00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_IMPORT obj_t bgl_reverse(obj_t);
static obj_t BGl_genericzd2initzd2zzsparqlz00();
BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_symbol3832z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_bbcz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3753z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3916z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3835z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3673z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3837z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3756z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3839z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3677z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3759z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3598z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_objectzd2initzd2zzsparqlz00();
static obj_t BGl_z62generatezd2ontologyzb0zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza31983za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3228ze3z41zzsparqlz00(obj_t);
BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_z62zc3anonymousza31988za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3224ze3z23zzsparqlz00(obj_t, obj_t);
static obj_t BGl_symbol3923z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3842z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3681z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3928z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3766z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3685z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl_z62selectz62zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3933z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3773z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3775z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3938z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3857z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3777z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3779z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3anonymousza32025za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3243ze3z23zzsparqlz00(obj_t, obj_t);
static obj_t BGl_symbol3940z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3942z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3781z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t bstring_to_symbol(obj_t);
static obj_t BGl_symbol3866z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3787z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3869z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_predicatzd2objectzd2zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3789z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_constructzd2ntzd2zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62predicatzd2objectzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_childrenzd2constructzd2zzsparqlz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_dbtunez00zzsparqlz00 = BUNSPEC;
static obj_t BGl_selectzd2stringzd2zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_constructzd2stringzd2zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3872z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3791z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3875z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3878z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3797z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3799z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_childrenzd2selectzd2zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_appendzd221010zd2zzsparqlz00(obj_t, obj_t);
static obj_t BGl_z62childrenzd2selectzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62pipezd2mapzb0zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zzsparqlz00();
BGL_IMPORT obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_symbol3882z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62constructzd2dbpediazb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_errorzf2czd2locationz20zz__errorz00(obj_t, obj_t, obj_t, char *, long);
BGL_IMPORT obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3893z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62fromz62zzsparqlz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_prefixsz00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_bioz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza32159za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3316ze3z23zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_entityz00zzsparqlz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_teez00zzsparqlz00(obj_t, obj_t, obj_t);
BGL_IMPORT obj_t string_append(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_fromz00zzsparqlz00(obj_t, obj_t);
BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
static obj_t BGl_sparqlzd2grammarzd2rulesz00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mlistz00zzsparqlz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_eeaz00zzsparqlz00 = BUNSPEC;
BGL_IMPORT bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl_z62instancezd2ontologyzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32026za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3247ze3z41zzsparqlz00(obj_t);
static obj_t BGl_z62treezd2ze3stringz53zzsparqlz00(obj_t, obj_t);
static obj_t BGl_list3600z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3602z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3603z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3604z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3609z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza32041za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3243ze3z23zzsparqlz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza31856za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3160ze3z41zzsparqlz00(obj_t);
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
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_IMPORT obj_t socket_close(obj_t);
static obj_t BGl__teez00zzsparqlz00(obj_t, obj_t);
static obj_t BGl_list3612z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3615z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3618z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3619z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62mlistz62zzsparqlz00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_list3620z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3621z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3622z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3623z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3624z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3625z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3626z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3627z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL obj_t BGl_sparqlzd2queryzd2zzsparqlz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_pipezd2mapzd2zzsparqlz00(obj_t, obj_t);
static obj_t BGl_list3630z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3631z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza31817za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza352ze3z23zzsparqlz00(obj_t);
static obj_t BGl_list3634z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3635z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3636z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3637z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3638z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zzsparqlz00();
static obj_t BGl_libraryzd2moduleszd2initz00zzsparqlz00();
BGL_IMPORT long bgl_list_length(obj_t);
static obj_t BGl_list3641z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3642z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3805z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3643z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3644z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
static obj_t BGl_list3645z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3646z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3649z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_lodacz00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3650z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3651z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62constructz62zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3652z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3653z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3654z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3655z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3656z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3657z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3658z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3579z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62constructzd2ntzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3anonymousza32058za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3263ze3z23zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_vector3601z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62entityz62zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_subjectzd2predicatzd2zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3902z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3660z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3661z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3662z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3583z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3665z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3584z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_list3747z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3668z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3587z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3910z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3830z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3752z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3671z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3834z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3672z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3755z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3918z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3675z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3676z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62parserz62zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62pipez62zzsparqlz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3679z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62selectzd2ntzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62__reducez62zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3761z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3680z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3925z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3844z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3683z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_generatezd2ontologyzd2zzsparqlz00(obj_t, obj_t);
static obj_t BGl_list3768z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_urlzd2parsezd2zz__urlz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_constructz00zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_urlzd2pathzd2encodez00zz__urlz00(obj_t);
static obj_t BGl_list3930z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_pipez00zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_gouvzd2ukzd2zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3772z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3935z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza32006za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3236ze3z23zzsparqlz00(obj_t, obj_t);
static obj_t BGl_list3859z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62childrenzd2constructzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_list3783z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3786z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3868z00zzsparqlz00 = BUNSPEC;
BGL_IMPORT obj_t bstring_to_keyword(obj_t);
BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
static obj_t BGl_vector3659z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3871z00zzsparqlz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_selectzd2ntzd2zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3874z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3793z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3877z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3796z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza32085za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3274ze3z23zzsparqlz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_selectz00zzsparqlz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_IMPORT obj_t BGl_httpz00zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3880z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62subjectzd2predicatzb0zzsparqlz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3884z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_keyword3807z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_keyword3809z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_z62zc3anonymousza31982za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3224ze3z23zzsparqlz00(obj_t, obj_t);
static obj_t BGl_symbol3605z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_symbol3607z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_keyword3812z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3895z00zzsparqlz00 = BUNSPEC;
static obj_t BGl_list3896z00zzsparqlz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_entityzd2envzd2zzsparqlz00, BgL_bgl_za762entityza762za7za7sp4013z00, BGl_z62entityz62zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_childrenzd2selectzd2envz00zzsparqlz00, BgL_bgl_za762childrenza7d2se4014z00, BGl_z62childrenzd2selectzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_teezd2envzd2zzsparqlz00, BgL_bgl__teeza700za7za7sparqlza74015z00, opt_generic_entry, BGl__teez00zzsparqlz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_generatezd2ontologyzd2envz00zzsparqlz00, BgL_bgl_za762generateza7d2on4016z00, BGl_z62generatezd2ontologyzb0zzsparqlz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_predicatzd2objectzd2envz00zzsparqlz00, BgL_bgl_za762predicatza7d2ob4017z00, BGl_z62predicatzd2objectzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_treezd2ze3stringzd2envze3zzsparqlz00, BgL_bgl_za762treeza7d2za7e3str4018za7, BGl_z62treezd2ze3stringz53zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_constructzd2dbpediazd2envz00zzsparqlz00, BgL_bgl_za762constructza7d2d4019z00, va_generic_entry, BGl_z62constructzd2dbpediazb0zzsparqlz00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string3606z00zzsparqlz00, BgL_bgl_string3606za700za7za7s4020za7, "default1000", 11 );
DEFINE_STRING( BGl_string3608z00zzsparqlz00, BgL_bgl_string3608za700za7za7s4021za7, "*error*", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sparqlzd2queryzd2envz00zzsparqlz00, BgL_bgl_za762sparqlza7d2quer4022z00, BGl_z62sparqlzd2queryzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3611z00zzsparqlz00, BgL_bgl_string3611za700za7za7s4023za7, "namedNode", 9 );
DEFINE_STRING( BGl_string3614z00zzsparqlz00, BgL_bgl_string3614za700za7za7s4024za7, "empty", 5 );
DEFINE_STRING( BGl_string3617z00zzsparqlz00, BgL_bgl_string3617za700za7za7s4025za7, "uri", 3 );
DEFINE_STRING( BGl_string3700z00zzsparqlz00, BgL_bgl_string3700za700za7za7s4026za7, "STATE-29-1043", 13 );
DEFINE_STRING( BGl_string3701z00zzsparqlz00, BgL_bgl_string3701za700za7za7s4027za7, "STATE-27-1041", 13 );
DEFINE_STRING( BGl_string3702z00zzsparqlz00, BgL_bgl_string3702za700za7za7s4028za7, "STATE-26-1040", 13 );
DEFINE_STRING( BGl_string3703z00zzsparqlz00, BgL_bgl_string3703za700za7za7s4029za7, "STATE-25-1039", 13 );
DEFINE_STRING( BGl_string3704z00zzsparqlz00, BgL_bgl_string3704za700za7za7s4030za7, "STATE-18-1032", 13 );
DEFINE_STRING( BGl_string3705z00zzsparqlz00, BgL_bgl_string3705za700za7za7s4031za7, "STATE-16-1030", 13 );
DEFINE_STRING( BGl_string3706z00zzsparqlz00, BgL_bgl_string3706za700za7za7s4032za7, "STATE-14-1028", 13 );
DEFINE_STRING( BGl_string3707z00zzsparqlz00, BgL_bgl_string3707za700za7za7s4033za7, "STATE-6-1020", 12 );
DEFINE_STRING( BGl_string3708z00zzsparqlz00, BgL_bgl_string3708za700za7za7s4034za7, "STATE-10-1024", 13 );
DEFINE_STRING( BGl_string3709z00zzsparqlz00, BgL_bgl_string3709za700za7za7s4035za7, "STATE-7-1021", 12 );
DEFINE_STRING( BGl_string3629z00zzsparqlz00, BgL_bgl_string3629za700za7za7s4036za7, "dot", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_constructzd2envzd2zzsparqlz00, BgL_bgl_za762constructza762za74037za7, BGl_z62constructz62zzsparqlz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string3710z00zzsparqlz00, BgL_bgl_string3710za700za7za7s4038za7, "STATE-42-1056", 13 );
DEFINE_STRING( BGl_string3711z00zzsparqlz00, BgL_bgl_string3711za700za7za7s4039za7, "STATE-40-1054", 13 );
DEFINE_STRING( BGl_string3712z00zzsparqlz00, BgL_bgl_string3712za700za7za7s4040za7, "STATE-11-1025", 13 );
DEFINE_STRING( BGl_string3713z00zzsparqlz00, BgL_bgl_string3713za700za7za7s4041za7, "STATE-12-1026", 13 );
DEFINE_STRING( BGl_string3714z00zzsparqlz00, BgL_bgl_string3714za700za7za7s4042za7, "STATE-39-1053", 13 );
DEFINE_STRING( BGl_string3633z00zzsparqlz00, BgL_bgl_string3633za700za7za7s4043za7, "*eoi*", 5 );
DEFINE_STRING( BGl_string3715z00zzsparqlz00, BgL_bgl_string3715za700za7za7s4044za7, "STATE-45-1059", 13 );
DEFINE_STRING( BGl_string3716z00zzsparqlz00, BgL_bgl_string3716za700za7za7s4045za7, "STATE-3-1017", 12 );
DEFINE_STRING( BGl_string3717z00zzsparqlz00, BgL_bgl_string3717za700za7za7s4046za7, "STATE-0-1014", 12 );
DEFINE_STRING( BGl_string3718z00zzsparqlz00, BgL_bgl_string3718za700za7za7s4047za7, "STATE-9-1023", 12 );
DEFINE_STRING( BGl_string3719z00zzsparqlz00, BgL_bgl_string3719za700za7za7s4048za7, "STATE-2-1016", 12 );
DEFINE_STRING( BGl_string3800z00zzsparqlz00, BgL_bgl_string3800za700za7za7s4049za7, "accu", 4 );
DEFINE_STRING( BGl_string3720z00zzsparqlz00, BgL_bgl_string3720za700za7za7s4050za7, "STATE-35-1049", 13 );
DEFINE_STRING( BGl_string3802z00zzsparqlz00, BgL_bgl_string3802za700za7za7s4051za7, "arg1839", 7 );
DEFINE_STRING( BGl_string3721z00zzsparqlz00, BgL_bgl_string3721za700za7za7s4052za7, "STATE-33-1047", 13 );
DEFINE_STRING( BGl_string3640z00zzsparqlz00, BgL_bgl_string3640za700za7za7s4053za7, "litteral", 8 );
DEFINE_STRING( BGl_string3722z00zzsparqlz00, BgL_bgl_string3722za700za7za7s4054za7, "STATE-32-1046", 13 );
DEFINE_STRING( BGl_string3804z00zzsparqlz00, BgL_bgl_string3804za700za7za7s4055za7, "sparql-query@sparql", 19 );
DEFINE_STRING( BGl_string3723z00zzsparqlz00, BgL_bgl_string3723za700za7za7s4056za7, "STATE-31-1045", 13 );
DEFINE_STRING( BGl_string3724z00zzsparqlz00, BgL_bgl_string3724za700za7za7s4057za7, "STATE-30-1044", 13 );
DEFINE_STRING( BGl_string3725z00zzsparqlz00, BgL_bgl_string3725za700za7za7s4058za7, "STATE-28-1042", 13 );
DEFINE_STRING( BGl_string3726z00zzsparqlz00, BgL_bgl_string3726za700za7za7s4059za7, "STATE-24-1038", 13 );
DEFINE_STRING( BGl_string3808z00zzsparqlz00, BgL_bgl_string3808za700za7za7s4060za7, "Host", 4 );
DEFINE_STRING( BGl_string3727z00zzsparqlz00, BgL_bgl_string3727za700za7za7s4061za7, "STATE-20-1034", 13 );
DEFINE_STRING( BGl_string3728z00zzsparqlz00, BgL_bgl_string3728za700za7za7s4062za7, "STATE-19-1033", 13 );
DEFINE_STRING( BGl_string3729z00zzsparqlz00, BgL_bgl_string3729za700za7za7s4063za7, "STATE-17-1031", 13 );
DEFINE_STRING( BGl_string3648z00zzsparqlz00, BgL_bgl_string3648za700za7za7s4064za7, "accept", 6 );
DEFINE_STRING( BGl_string3810z00zzsparqlz00, BgL_bgl_string3810za700za7za7s4065za7, "Accept", 6 );
DEFINE_STRING( BGl_string3811z00zzsparqlz00, BgL_bgl_string3811za700za7za7s4066za7, "close", 5 );
DEFINE_STRING( BGl_string3730z00zzsparqlz00, BgL_bgl_string3730za700za7za7s4067za7, "STATE-8-1022", 12 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3806z00zzsparqlz00, BgL_bgl_za762parserza762za7za7sp4068z00, BGl_z62parserz62zzsparqlz00, 0L, BUNSPEC, 5 );
DEFINE_STRING( BGl_string3731z00zzsparqlz00, BgL_bgl_string3731za700za7za7s4069za7, "STATE-4-1018", 12 );
DEFINE_STRING( BGl_string3813z00zzsparqlz00, BgL_bgl_string3813za700za7za7s4070za7, "Connection", 10 );
DEFINE_STRING( BGl_string3732z00zzsparqlz00, BgL_bgl_string3732za700za7za7s4071za7, "<anonymous:1422:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:111>", 91 );
DEFINE_STRING( BGl_string3814z00zzsparqlz00, BgL_bgl_string3814za700za7za7s4072za7, "sparql-query", 12 );
DEFINE_STRING( BGl_string3733z00zzsparqlz00, BgL_bgl_string3733za700za7za7s4073za7, "Can't read on a closed input port", 33 );
DEFINE_STRING( BGl_string3815z00zzsparqlz00, BgL_bgl_string3815za700za7za7s4074za7, "bstring", 7 );
DEFINE_STRING( BGl_string3816z00zzsparqlz00, BgL_bgl_string3816za700za7za7s4075za7, "?query=", 7 );
DEFINE_STRING( BGl_string3735z00zzsparqlz00, BgL_bgl_string3735za700za7za7s4076za7, "__reduce:toplevel-init", 22 );
DEFINE_STRING( BGl_string3736z00zzsparqlz00, BgL_bgl_string3736za700za7za7s4077za7, "__reduce", 8 );
DEFINE_STRING( BGl_string3818z00zzsparqlz00, BgL_bgl_string3818za700za7za7s4078za7, "get", 3 );
DEFINE_STRING( BGl_string3737z00zzsparqlz00, BgL_bgl_string3737za700za7za7s4079za7, "bint", 4 );
DEFINE_STRING( BGl_string3738z00zzsparqlz00, BgL_bgl_string3738za700za7za7s4080za7, "vector", 6 );
DEFINE_STRING( BGl_string3739z00zzsparqlz00, BgL_bgl_string3739za700za7za7s4081za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string3578z00zzsparqlz00, BgL_bgl_string3578za700za7za7s4082za7, "%toplevel@sparql", 16 );
DEFINE_STRING( BGl_string3901z00zzsparqlz00, BgL_bgl_string3901za700za7za7s4083za7, "generate-ontology@sparql", 24 );
DEFINE_STRING( BGl_string3820z00zzsparqlz00, BgL_bgl_string3820za700za7za7s4084za7, "http", 4 );
DEFINE_STRING( BGl_string3821z00zzsparqlz00, BgL_bgl_string3821za700za7za7s4085za7, "HTTP/1.1", 8 );
DEFINE_STRING( BGl_string3740z00zzsparqlz00, BgL_bgl_string3740za700za7za7s4086za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3822z00zzsparqlz00, BgL_bgl_string3822za700za7za7s4087za7, "socket", 6 );
DEFINE_STRING( BGl_string3741z00zzsparqlz00, BgL_bgl_string3741za700za7za7s4088za7, "pair", 4 );
DEFINE_STRING( BGl_string3742z00zzsparqlz00, BgL_bgl_string3742za700za7za7s4089za7, "vector-set!", 11 );
DEFINE_STRING( BGl_string3905z00zzsparqlz00, BgL_bgl_string3905za700za7za7s4090za7, "<anonymous:2026:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:247>", 91 );
DEFINE_STRING( BGl_string3824z00zzsparqlz00, BgL_bgl_string3824za700za7za7s4091za7, "parser", 6 );
DEFINE_STRING( BGl_string3581z00zzsparqlz00, BgL_bgl_string3581za700za7za7s4092za7, "at", 2 );
DEFINE_STRING( BGl_string3906z00zzsparqlz00, BgL_bgl_string3906za700za7za7s4093za7, "<anonymous:2031:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:243>", 91 );
DEFINE_STRING( BGl_string3825z00zzsparqlz00, BgL_bgl_string3825za700za7za7s4094za7, "text/plain", 10 );
DEFINE_STRING( BGl_string3744z00zzsparqlz00, BgL_bgl_string3744za700za7za7s4095za7, "append-21010@sparql", 19 );
DEFINE_STRING( BGl_string3582z00zzsparqlz00, BgL_bgl_string3582za700za7za7s4096za7, "/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql.scm", 70 );
DEFINE_STRING( BGl_string3907z00zzsparqlz00, BgL_bgl_string3907za700za7za7s4097za7, "<anonymous:2033:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:252>", 91 );
DEFINE_STRING( BGl_string3826z00zzsparqlz00, BgL_bgl_string3826za700za7za7s4098za7, "format not implemented", 22 );
DEFINE_STRING( BGl_string3664z00zzsparqlz00, BgL_bgl_string3664za700za7za7s4099za7, "triplets", 8 );
DEFINE_STRING( BGl_string3827z00zzsparqlz00, BgL_bgl_string3827za700za7za7s4100za7, "status code", 11 );
DEFINE_STRING( BGl_string3746z00zzsparqlz00, BgL_bgl_string3746za700za7za7s4101za7, "mlist@sparql", 12 );
DEFINE_STRING( BGl_string3909z00zzsparqlz00, BgL_bgl_string3909za700za7za7s4102za7, "tree->string@sparql", 19 );
DEFINE_STRING( BGl_string3585z00zzsparqlz00, BgL_bgl_string3585za700za7za7s4103za7, "rdfs:", 5 );
DEFINE_STRING( BGl_string3829z00zzsparqlz00, BgL_bgl_string3829za700za7za7s4104za7, "from@sparql", 11 );
DEFINE_STRING( BGl_string3748z00zzsparqlz00, BgL_bgl_string3748za700za7za7s4105za7, "map", 3 );
DEFINE_STRING( BGl_string3667z00zzsparqlz00, BgL_bgl_string3667za700za7za7s4106za7, "triplet", 7 );
DEFINE_STRING( BGl_string3586z00zzsparqlz00, BgL_bgl_string3586za700za7za7s4107za7, "<http://www.w3.org/2000/01/rdf-schema#>", 39 );
DEFINE_STRING( BGl_string3749z00zzsparqlz00, BgL_bgl_string3749za700za7za7s4108za7, "list", 4 );
DEFINE_STRING( BGl_string3588z00zzsparqlz00, BgL_bgl_string3588za700za7za7s4109za7, "owl:", 4 );
DEFINE_STRING( BGl_string3589z00zzsparqlz00, BgL_bgl_string3589za700za7za7s4110za7, "<http://www.w3.org/2002/07/owl#>", 32 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mlistzd2envzd2zzsparqlz00, BgL_bgl_za762mlistza762za7za7spa4111z00, BGl_z62mlistz62zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3903z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza74112za7, BGl_z62zc3anonymousza32031za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3243ze3z23zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3904z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza74113za7, BGl_z62zc3anonymousza32025za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3243ze3z23zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pipezd2envzd2zzsparqlz00, BgL_bgl_za762pipeza762za7za7spar4114z00, va_generic_entry, BGl_z62pipez62zzsparqlz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3911z00zzsparqlz00, BgL_bgl_string3911za700za7za7s4115za7, "n-space", 7 );
DEFINE_STRING( BGl_string3912z00zzsparqlz00, BgL_bgl_string3912za700za7za7s4116za7, "   ", 3 );
DEFINE_STRING( BGl_string3831z00zzsparqlz00, BgL_bgl_string3831za700za7za7s4117za7, "<anonymous:1862:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:160>", 91 );
DEFINE_STRING( BGl_string3750z00zzsparqlz00, BgL_bgl_string3750za700za7za7s4118za7, "mlist", 5 );
DEFINE_STRING( BGl_string3913z00zzsparqlz00, BgL_bgl_string3913za700za7za7s4119za7, "&tree->string-level", 19 );
DEFINE_STRING( BGl_string3751z00zzsparqlz00, BgL_bgl_string3751za700za7za7s4120za7, "<anonymous:1792:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:42>", 90 );
DEFINE_STRING( BGl_string3670z00zzsparqlz00, BgL_bgl_string3670za700za7za7s4121za7, "subject", 7 );
DEFINE_STRING( BGl_string3914z00zzsparqlz00, BgL_bgl_string3914za700za7za7s4122za7, "\n", 1 );
DEFINE_STRING( BGl_string3833z00zzsparqlz00, BgL_bgl_string3833za700za7za7s4123za7, "Wrong number of arguments", 25 );
DEFINE_STRING( BGl_string3590z00zzsparqlz00, BgL_bgl_string3590za700za7za7s4124za7, "http://dbpedia.org/sparql", 25 );
DEFINE_STRING( BGl_string3915z00zzsparqlz00, BgL_bgl_string3915za700za7za7s4125za7, "<anonymous:2058:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:263>", 91 );
DEFINE_STRING( BGl_string3591z00zzsparqlz00, BgL_bgl_string3591za700za7za7s4126za7, "http://data.linkedmdb.org/sparql", 32 );
DEFINE_STRING( BGl_string3754z00zzsparqlz00, BgL_bgl_string3754za700za7za7s4127za7, "_tee@sparql", 11 );
DEFINE_STRING( BGl_string3592z00zzsparqlz00, BgL_bgl_string3592za700za7za7s4128za7, "http://dbtune.org/musicbrainz/sparql", 36 );
DEFINE_STRING( BGl_string3917z00zzsparqlz00, BgL_bgl_string3917za700za7za7s4129za7, "instance-ontology@sparql", 24 );
DEFINE_STRING( BGl_string3836z00zzsparqlz00, BgL_bgl_string3836za700za7za7s4130za7, "apply", 5 );
DEFINE_STRING( BGl_string3674z00zzsparqlz00, BgL_bgl_string3674za700za7za7s4131za7, "predicat", 8 );
DEFINE_STRING( BGl_string3593z00zzsparqlz00, BgL_bgl_string3593za700za7za7s4132za7, "http://lod.ac/sparql", 20 );
DEFINE_STRING( BGl_string3594z00zzsparqlz00, BgL_bgl_string3594za700za7za7s4133za7, "http://lod.openlinksw.com/sparql", 32 );
DEFINE_STRING( BGl_string3919z00zzsparqlz00, BgL_bgl_string3919za700za7za7s4134za7, "a", 1 );
DEFINE_STRING( BGl_string3838z00zzsparqlz00, BgL_bgl_string3838za700za7za7s4135za7, "proc", 4 );
DEFINE_STRING( BGl_string3757z00zzsparqlz00, BgL_bgl_string3757za700za7za7s4136za7, "tee", 3 );
DEFINE_STRING( BGl_string3595z00zzsparqlz00, BgL_bgl_string3595za700za7za7s4137za7, "http://www.semantic-systems-biology.org/biogateway/endpoint", 59 );
DEFINE_STRING( BGl_string3758z00zzsparqlz00, BgL_bgl_string3758za700za7za7s4138za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string3596z00zzsparqlz00, BgL_bgl_string3596za700za7za7s4139za7, "http://data.gov.uk/sparql", 25 );
DEFINE_STRING( BGl_string3678z00zzsparqlz00, BgL_bgl_string3678za700za7za7s4140za7, "object", 6 );
DEFINE_STRING( BGl_string3597z00zzsparqlz00, BgL_bgl_string3597za700za7za7s4141za7, "http://semantic.eea.europa.eu/sparql", 36 );
DEFINE_STRING( BGl_string3599z00zzsparqlz00, BgL_bgl_string3599za700za7za7s4142za7, "sparql-grammar-rules@sparql", 27 );
DEFINE_STRING( BGl_string3920z00zzsparqlz00, BgL_bgl_string3920za700za7za7s4143za7, "?uri", 4 );
DEFINE_STRING( BGl_string3840z00zzsparqlz00, BgL_bgl_string3840za700za7za7s4144za7, "args", 4 );
DEFINE_STRING( BGl_string3922z00zzsparqlz00, BgL_bgl_string3922za700za7za7s4145za7, "<anonymous:2087:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:278>", 91 );
DEFINE_STRING( BGl_string3841z00zzsparqlz00, BgL_bgl_string3841za700za7za7s4146za7, "<anonymous:1856:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:160>", 91 );
DEFINE_STRING( BGl_string3760z00zzsparqlz00, BgL_bgl_string3760za700za7za7s4147za7, "tee@sparql", 10 );
DEFINE_STRING( BGl_string3924z00zzsparqlz00, BgL_bgl_string3924za700za7za7s4148za7, "predicat-object@sparql", 22 );
DEFINE_STRING( BGl_string3843z00zzsparqlz00, BgL_bgl_string3843za700za7za7s4149za7, "construct-string@sparql", 23 );
DEFINE_STRING( BGl_string3762z00zzsparqlz00, BgL_bgl_string3762za700za7za7s4150za7, "eof", 3 );
DEFINE_STRING( BGl_string3763z00zzsparqlz00, BgL_bgl_string3763za700za7za7s4151za7, "<anonymous:1817:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:52>", 90 );
DEFINE_STRING( BGl_string3682z00zzsparqlz00, BgL_bgl_string3682za700za7za7s4152za7, "sparql-grammar-tokens@sparql", 28 );
DEFINE_STRING( BGl_string3926z00zzsparqlz00, BgL_bgl_string3926za700za7za7s4153za7, "?o", 2 );
DEFINE_STRING( BGl_string3845z00zzsparqlz00, BgL_bgl_string3845za700za7za7s4154za7, "<anonymous:1885:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:165>", 91 );
DEFINE_STRING( BGl_string3764z00zzsparqlz00, BgL_bgl_string3764za700za7za7s4155za7, "bchar", 5 );
DEFINE_STRING( BGl_string3927z00zzsparqlz00, BgL_bgl_string3927za700za7za7s4156za7, "?p", 2 );
DEFINE_STRING( BGl_string3846z00zzsparqlz00, BgL_bgl_string3846za700za7za7s4157za7, " ", 1 );
DEFINE_STRING( BGl_string3765z00zzsparqlz00, BgL_bgl_string3765za700za7za7s4158za7, "output-port", 11 );
DEFINE_STRING( BGl_string3847z00zzsparqlz00, BgL_bgl_string3847za700za7za7s4159za7, "PREFIX ", 7 );
DEFINE_STRING( BGl_string3929z00zzsparqlz00, BgL_bgl_string3929za700za7za7s4160za7, "subject-predicat@sparql", 23 );
DEFINE_STRING( BGl_string3848z00zzsparqlz00, BgL_bgl_string3848za700za7za7s4161za7, "", 0 );
DEFINE_STRING( BGl_string3767z00zzsparqlz00, BgL_bgl_string3767za700za7za7s4162za7, "pipe@sparql", 11 );
DEFINE_STRING( BGl_string3686z00zzsparqlz00, BgL_bgl_string3686za700za7za7s4163za7, "<anonymous:1422:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:111>:toplevel-init", 105 );
DEFINE_STRING( BGl_string3849z00zzsparqlz00, BgL_bgl_string3849za700za7za7s4164za7, "construct-string", 16 );
DEFINE_STRING( BGl_string3687z00zzsparqlz00, BgL_bgl_string3687za700za7za7s4165za7, "ignore", 6 );
DEFINE_STRING( BGl_string3769z00zzsparqlz00, BgL_bgl_string3769za700za7za7s4166za7, "pipe-aux", 8 );
DEFINE_STRING( BGl_string3688z00zzsparqlz00, BgL_bgl_string3688za700za7za7s4167za7, "input-port", 10 );
DEFINE_STRING( BGl_string3689z00zzsparqlz00, BgL_bgl_string3689za700za7za7s4168za7, "regular-grammar", 15 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3921z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza74169za7, BGl_z62zc3anonymousza32085za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3274ze3z23zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3850z00zzsparqlz00, BgL_bgl_string3850za700za7za7s4170za7, "<anonymous:1895:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:170>", 91 );
DEFINE_STRING( BGl_string3932z00zzsparqlz00, BgL_bgl_string3932za700za7za7s4171za7, "<anonymous:2161:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:324>", 91 );
DEFINE_STRING( BGl_string3851z00zzsparqlz00, BgL_bgl_string3851za700za7za7s4172za7, " . ", 3 );
DEFINE_STRING( BGl_string3770z00zzsparqlz00, BgL_bgl_string3770za700za7za7s4173za7, "procedure", 9 );
DEFINE_STRING( BGl_string3852z00zzsparqlz00, BgL_bgl_string3852za700za7za7s4174za7, "<anonymous:1907:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:174>", 91 );
DEFINE_STRING( BGl_string3771z00zzsparqlz00, BgL_bgl_string3771za700za7za7s4175za7, "pipe-aux:Wrong number of arguments", 34 );
DEFINE_STRING( BGl_string3690z00zzsparqlz00, BgL_bgl_string3690za700za7za7s4176za7, "Illegal match", 13 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3684z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza74177za7, BGl_z62zc3anonymousza31422za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3111ze3z23zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3934z00zzsparqlz00, BgL_bgl_string3934za700za7za7s4178za7, "entity@sparql", 13 );
DEFINE_STRING( BGl_string3853z00zzsparqlz00, BgL_bgl_string3853za700za7za7s4179za7, "symbol", 6 );
DEFINE_STRING( BGl_string3691z00zzsparqlz00, BgL_bgl_string3691za700za7za7s4180za7, "the-failure", 11 );
DEFINE_STRING( BGl_string3854z00zzsparqlz00, BgL_bgl_string3854za700za7za7s4181za7, "}", 1 );
DEFINE_STRING( BGl_string3692z00zzsparqlz00, BgL_bgl_string3692za700za7za7s4182za7, "STATE-15-1029", 13 );
DEFINE_STRING( BGl_string3936z00zzsparqlz00, BgL_bgl_string3936za700za7za7s4183za7, "/", 1 );
DEFINE_STRING( BGl_string3855z00zzsparqlz00, BgL_bgl_string3855za700za7za7s4184za7, "}WHERE{", 7 );
DEFINE_STRING( BGl_string3774z00zzsparqlz00, BgL_bgl_string3774za700za7za7s4185za7, "funcall", 7 );
DEFINE_STRING( BGl_string3693z00zzsparqlz00, BgL_bgl_string3693za700za7za7s4186za7, "STATE-47-1061", 13 );
DEFINE_STRING( BGl_string3937z00zzsparqlz00, BgL_bgl_string3937za700za7za7s4187za7, "entity", 6 );
DEFINE_STRING( BGl_string3856z00zzsparqlz00, BgL_bgl_string3856za700za7za7s4188za7, "CONSTRUCT{", 10 );
DEFINE_STRING( BGl_string3694z00zzsparqlz00, BgL_bgl_string3694za700za7za7s4189za7, "STATE-22-1036", 13 );
DEFINE_STRING( BGl_string3776z00zzsparqlz00, BgL_bgl_string3776za700za7za7s4190za7, "fun1824", 7 );
DEFINE_STRING( BGl_string3695z00zzsparqlz00, BgL_bgl_string3695za700za7za7s4191za7, "STATE-41-1055", 13 );
DEFINE_STRING( BGl_string3939z00zzsparqlz00, BgL_bgl_string3939za700za7za7s4192za7, "object-init@sparql", 18 );
DEFINE_STRING( BGl_string3858z00zzsparqlz00, BgL_bgl_string3858za700za7za7s4193za7, "select-string@sparql", 20 );
DEFINE_STRING( BGl_string3696z00zzsparqlz00, BgL_bgl_string3696za700za7za7s4194za7, "STATE-44-1058", 13 );
DEFINE_STRING( BGl_string3778z00zzsparqlz00, BgL_bgl_string3778za700za7za7s4195za7, "x", 1 );
DEFINE_STRING( BGl_string3697z00zzsparqlz00, BgL_bgl_string3697za700za7za7s4196za7, "STATE-43-1057", 13 );
DEFINE_STRING( BGl_string3698z00zzsparqlz00, BgL_bgl_string3698za700za7za7s4197za7, "STATE-36-1050", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_childrenzd2constructzd2envz00zzsparqlz00, BgL_bgl_za762childrenza7d2co4198z00, BGl_z62childrenzd2constructzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3699z00zzsparqlz00, BgL_bgl_string3699za700za7za7s4199za7, "STATE-34-1048", 13 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3931z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza74200za7, BGl_z62zc3anonymousza32159za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3316ze3z23zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3941z00zzsparqlz00, BgL_bgl_string3941za700za7za7s4201za7, "generic-init@sparql", 19 );
DEFINE_STRING( BGl_string3860z00zzsparqlz00, BgL_bgl_string3860za700za7za7s4202za7, "<anonymous:1930:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:185>", 91 );
DEFINE_STRING( BGl_string3861z00zzsparqlz00, BgL_bgl_string3861za700za7za7s4203za7, "DISTINCT ", 9 );
DEFINE_STRING( BGl_string3780z00zzsparqlz00, BgL_bgl_string3780za700za7za7s4204za7, "_", 1 );
DEFINE_STRING( BGl_string3943z00zzsparqlz00, BgL_bgl_string3943za700za7za7s4205za7, "method-init@sparql", 18 );
DEFINE_STRING( BGl_string3862z00zzsparqlz00, BgL_bgl_string3862za700za7za7s4206za7, "<anonymous:1939:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:189>", 91 );
DEFINE_STRING( BGl_string3863z00zzsparqlz00, BgL_bgl_string3863za700za7za7s4207za7, "<anonymous:1951:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:193>", 91 );
DEFINE_STRING( BGl_string3782z00zzsparqlz00, BgL_bgl_string3782za700za7za7s4208za7, "pipe-map@sparql", 15 );
DEFINE_STRING( BGl_string3864z00zzsparqlz00, BgL_bgl_string3864za700za7za7s4209za7, " WHERE{", 7 );
DEFINE_STRING( BGl_string3865z00zzsparqlz00, BgL_bgl_string3865za700za7za7s4210za7, "SELECT ", 7 );
DEFINE_STRING( BGl_string3784z00zzsparqlz00, BgL_bgl_string3784za700za7za7s4211za7, "<anonymous:1830:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:75>", 90 );
DEFINE_STRING( BGl_string3785z00zzsparqlz00, BgL_bgl_string3785za700za7za7s4212za7, "<anonymous:1830:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:75>:Wrong number of arguments", 116 );
DEFINE_STRING( BGl_string3867z00zzsparqlz00, BgL_bgl_string3867za700za7za7s4213za7, "construct@sparql", 16 );
DEFINE_STRING( BGl_string3788z00zzsparqlz00, BgL_bgl_string3788za700za7za7s4214za7, "fun1096", 7 );
DEFINE_STRING( BGl_string3870z00zzsparqlz00, BgL_bgl_string3870za700za7za7s4215za7, "select@sparql", 13 );
DEFINE_STRING( BGl_string3790z00zzsparqlz00, BgL_bgl_string3790za700za7za7s4216za7, "arg1834", 7 );
DEFINE_STRING( BGl_string3873z00zzsparqlz00, BgL_bgl_string3873za700za7za7s4217za7, "construct-nt@sparql", 19 );
DEFINE_STRING( BGl_string3792z00zzsparqlz00, BgL_bgl_string3792za700za7za7s4218za7, "fold@sparql", 11 );
DEFINE_STRING( BGl_string3794z00zzsparqlz00, BgL_bgl_string3794za700za7za7s4219za7, "fold", 4 );
DEFINE_STRING( BGl_string3876z00zzsparqlz00, BgL_bgl_string3876za700za7za7s4220za7, "select-nt@sparql", 16 );
DEFINE_STRING( BGl_string3795z00zzsparqlz00, BgL_bgl_string3795za700za7za7s4221za7, "fold:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3879z00zzsparqlz00, BgL_bgl_string3879za700za7za7s4222za7, "construct-dbpedia@sparql", 24 );
DEFINE_STRING( BGl_string3798z00zzsparqlz00, BgL_bgl_string3798za700za7za7s4223za7, "fonct", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_instancezd2ontologyzd2envz00zzsparqlz00, BgL_bgl_za762instanceza7d2on4224z00, BGl_z62instancezd2ontologyzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3881z00zzsparqlz00, BgL_bgl_string3881za700za7za7s4225za7, "http://dbpedia.org/sparql/", 26 );
DEFINE_STRING( BGl_string3883z00zzsparqlz00, BgL_bgl_string3883za700za7za7s4226za7, "children-select@sparql", 22 );
DEFINE_STRING( BGl_string3885z00zzsparqlz00, BgL_bgl_string3885za700za7za7s4227za7, "rdfs:subClassOf", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pipezd2mapzd2envz00zzsparqlz00, BgL_bgl_za762pipeza7d2mapza7b04228za7, va_generic_entry, BGl_z62pipezd2mapzb0zzsparqlz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3886z00zzsparqlz00, BgL_bgl_string3886za700za7za7s4229za7, "?s", 2 );
DEFINE_STRING( BGl_string3889z00zzsparqlz00, BgL_bgl_string3889za700za7za7s4230za7, "<anonymous:1983:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:228>", 91 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_foldzd2envzd2zzsparqlz00, BgL_bgl_za762foldza762za7za7spar4231z00, BGl_z62foldz62zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_selectzd2ntzd2envz00zzsparqlz00, BgL_bgl_za762selectza7d2ntza7b4232za7, va_generic_entry, BGl_z62selectzd2ntzb0zzsparqlz00, BUNSPEC, -4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_constructzd2ntzd2envz00zzsparqlz00, BgL_bgl_za762constructza7d2n4233z00, va_generic_entry, BGl_z62constructzd2ntzb0zzsparqlz00, BUNSPEC, -4 );
DEFINE_STRING( BGl_string3890z00zzsparqlz00, BgL_bgl_string3890za700za7za7s4234za7, "<http://www.w3.org/2005/sparql-results#value>", 45 );
DEFINE_STRING( BGl_string3891z00zzsparqlz00, BgL_bgl_string3891za700za7za7s4235za7, "<anonymous:1988:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:224>", 91 );
DEFINE_STRING( BGl_string3892z00zzsparqlz00, BgL_bgl_string3892za700za7za7s4236za7, "<anonymous:1990:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:233>", 91 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3887z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza74237za7, BGl_z62zc3anonymousza31988za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3224ze3z23zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3894z00zzsparqlz00, BgL_bgl_string3894za700za7za7s4238za7, "children-construct@sparql", 25 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3888z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza74239za7, BGl_z62zc3anonymousza31982za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3224ze3z23zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3897z00zzsparqlz00, BgL_bgl_string3897za700za7za7s4240za7, "<bidon>", 7 );
DEFINE_STRING( BGl_string3899z00zzsparqlz00, BgL_bgl_string3899za700za7za7s4241za7, "<anonymous:2008:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:240>", 91 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3898z00zzsparqlz00, BgL_bgl_za762za7c3anonymousza74242za7, BGl_z62zc3anonymousza32006za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3236ze3z23zzsparqlz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_subjectzd2predicatzd2envz00zzsparqlz00, BgL_bgl_za762subjectza7d2pre4243z00, BGl_z62subjectzd2predicatzb0zzsparqlz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_selectzd2envzd2zzsparqlz00, BgL_bgl_za762selectza762za7za7sp4244z00, BGl_z62selectz62zzsparqlz00, 0L, BUNSPEC, 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fromzd2envzd2zzsparqlz00, BgL_bgl_za762fromza762za7za7spar4245z00, BGl_z62fromz62zzsparqlz00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsparqlz00(long BgL_checksumz00_4504, char * BgL_fromz00_4505)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zzsparqlz00))
{ 
BGl_requirezd2initializa7ationz75zzsparqlz00 = 
BBOOL(((bool_t)0)); 
BGl_libraryzd2moduleszd2initz00zzsparqlz00(); 
BGl_cnstzd2initzd2zzsparqlz00(); 
BGl_objectzd2initzd2zzsparqlz00(); 
BGl_genericzd2initzd2zzsparqlz00(); 
BGl_methodzd2initzd2zzsparqlz00(); 
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
BGl_modulezd2initializa7ationz75zz__errorz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__lalr_driverz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__httpz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__urlz00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long)0), "sparql"); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)0), "sparql"); 
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
BGl_symbol3577z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3578z00zzsparqlz00); 
BGl_symbol3580z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3581z00zzsparqlz00); 
BGl_list3579z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)0)), BNIL))); 
BGl_list3584z00zzsparqlz00 = 
MAKE_PAIR(BGl_string3585z00zzsparqlz00, 
MAKE_PAIR(BGl_string3586z00zzsparqlz00, BNIL)); 
BGl_list3587z00zzsparqlz00 = 
MAKE_PAIR(BGl_string3588z00zzsparqlz00, 
MAKE_PAIR(BGl_string3589z00zzsparqlz00, BNIL)); 
BGl_list3583z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3584z00zzsparqlz00, 
MAKE_PAIR(BGl_list3587z00zzsparqlz00, BNIL)); 
BGl_symbol3598z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3599z00zzsparqlz00); 
BGl_list3600z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)2506)), BNIL))); 
BGl_symbol3605z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3606z00zzsparqlz00); 
BGl_symbol3607z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3608z00zzsparqlz00); 
BGl_list3604z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, BGl_symbol3607z00zzsparqlz00); 
BGl_symbol3610z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3611z00zzsparqlz00); 
BGl_list3609z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3610z00zzsparqlz00, 
BINT(((long)1))); 
BGl_symbol3613z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3614z00zzsparqlz00); 
BGl_list3612z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3613z00zzsparqlz00, 
BINT(((long)2))); 
BGl_symbol3616z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3617z00zzsparqlz00); 
BGl_list3615z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3616z00zzsparqlz00, 
BINT(((long)3))); 
BGl_list3603z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3604z00zzsparqlz00, 
MAKE_PAIR(BGl_list3609z00zzsparqlz00, 
MAKE_PAIR(BGl_list3612z00zzsparqlz00, 
MAKE_PAIR(BGl_list3615z00zzsparqlz00, BNIL)))); 
BGl_list3619z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-7))); 
BGl_list3618z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3619z00zzsparqlz00, BNIL); 
BGl_list3621z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-4))); 
BGl_list3620z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3621z00zzsparqlz00, BNIL); 
BGl_list3623z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-6))); 
BGl_list3622z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3623z00zzsparqlz00, BNIL); 
BGl_list3625z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3616z00zzsparqlz00, 
BINT(((long)7))); 
BGl_list3624z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3604z00zzsparqlz00, 
MAKE_PAIR(BGl_list3625z00zzsparqlz00, BNIL)); 
BGl_symbol3628z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3629z00zzsparqlz00); 
BGl_list3627z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3628z00zzsparqlz00, 
BINT(((long)9))); 
BGl_list3626z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3604z00zzsparqlz00, 
MAKE_PAIR(BGl_list3627z00zzsparqlz00, BNIL)); 
BGl_symbol3632z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3633z00zzsparqlz00); 
BGl_list3631z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3632z00zzsparqlz00, 
BINT(((long)10))); 
BGl_list3630z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3604z00zzsparqlz00, 
MAKE_PAIR(BGl_list3631z00zzsparqlz00, BNIL)); 
BGl_list3635z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-8))); 
BGl_list3634z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3635z00zzsparqlz00, BNIL); 
BGl_list3637z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3610z00zzsparqlz00, 
BINT(((long)11))); 
BGl_symbol3639z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3640z00zzsparqlz00); 
BGl_list3638z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3639z00zzsparqlz00, 
BINT(((long)12))); 
BGl_list3641z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3616z00zzsparqlz00, 
BINT(((long)13))); 
BGl_list3636z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3604z00zzsparqlz00, 
MAKE_PAIR(BGl_list3637z00zzsparqlz00, 
MAKE_PAIR(BGl_list3638z00zzsparqlz00, 
MAKE_PAIR(BGl_list3641z00zzsparqlz00, BNIL)))); 
BGl_list3643z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-3))); 
BGl_list3642z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3643z00zzsparqlz00, 
MAKE_PAIR(BGl_list3609z00zzsparqlz00, 
MAKE_PAIR(BGl_list3612z00zzsparqlz00, 
MAKE_PAIR(BGl_list3615z00zzsparqlz00, BNIL)))); 
BGl_list3645z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-1))); 
BGl_symbol3647z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3648z00zzsparqlz00); 
BGl_list3646z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3632z00zzsparqlz00, BGl_symbol3647z00zzsparqlz00); 
BGl_list3644z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3645z00zzsparqlz00, 
MAKE_PAIR(BGl_list3646z00zzsparqlz00, BNIL)); 
BGl_list3650z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-10))); 
BGl_list3649z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3650z00zzsparqlz00, BNIL); 
BGl_list3652z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-11))); 
BGl_list3651z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3652z00zzsparqlz00, BNIL); 
BGl_list3654z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-9))); 
BGl_list3653z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3654z00zzsparqlz00, BNIL); 
BGl_list3656z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-5))); 
BGl_list3655z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3656z00zzsparqlz00, BNIL); 
BGl_list3658z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3605z00zzsparqlz00, 
BINT(((long)-2))); 
BGl_list3657z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3658z00zzsparqlz00, BNIL); 
BGl_list3602z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3603z00zzsparqlz00, 
MAKE_PAIR(BGl_list3618z00zzsparqlz00, 
MAKE_PAIR(BGl_list3620z00zzsparqlz00, 
MAKE_PAIR(BGl_list3622z00zzsparqlz00, 
MAKE_PAIR(BGl_list3624z00zzsparqlz00, 
MAKE_PAIR(BGl_list3626z00zzsparqlz00, 
MAKE_PAIR(BGl_list3630z00zzsparqlz00, 
MAKE_PAIR(BGl_list3634z00zzsparqlz00, 
MAKE_PAIR(BGl_list3636z00zzsparqlz00, 
MAKE_PAIR(BGl_list3642z00zzsparqlz00, 
MAKE_PAIR(BGl_list3644z00zzsparqlz00, 
MAKE_PAIR(BGl_list3649z00zzsparqlz00, 
MAKE_PAIR(BGl_list3651z00zzsparqlz00, 
MAKE_PAIR(BGl_list3653z00zzsparqlz00, 
MAKE_PAIR(BGl_list3655z00zzsparqlz00, 
MAKE_PAIR(BGl_list3657z00zzsparqlz00, BNIL)))))))))))))))); 
BGl_vector3601z00zzsparqlz00 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BGl_list3602z00zzsparqlz00); 
BGl_symbol3663z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3664z00zzsparqlz00); 
BGl_list3662z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3663z00zzsparqlz00, 
BINT(((long)6))); 
BGl_symbol3666z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3667z00zzsparqlz00); 
BGl_list3665z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3666z00zzsparqlz00, 
BINT(((long)5))); 
BGl_symbol3669z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3670z00zzsparqlz00); 
BGl_list3668z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3669z00zzsparqlz00, 
BINT(((long)4))); 
BGl_list3661z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3662z00zzsparqlz00, 
MAKE_PAIR(BGl_list3665z00zzsparqlz00, 
MAKE_PAIR(BGl_list3668z00zzsparqlz00, BNIL))); 
BGl_symbol3673z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3674z00zzsparqlz00); 
BGl_list3672z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3673z00zzsparqlz00, 
BINT(((long)8))); 
BGl_list3671z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3672z00zzsparqlz00, BNIL); 
BGl_symbol3677z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3678z00zzsparqlz00); 
BGl_list3676z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3677z00zzsparqlz00, 
BINT(((long)14))); 
BGl_list3675z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3676z00zzsparqlz00, BNIL); 
BGl_list3680z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3663z00zzsparqlz00, 
BINT(((long)15))); 
BGl_list3679z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3680z00zzsparqlz00, 
MAKE_PAIR(BGl_list3665z00zzsparqlz00, 
MAKE_PAIR(BGl_list3668z00zzsparqlz00, BNIL))); 
BGl_list3660z00zzsparqlz00 = 
MAKE_PAIR(BGl_list3661z00zzsparqlz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BGl_list3671z00zzsparqlz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BGl_list3675z00zzsparqlz00, 
MAKE_PAIR(BGl_list3679z00zzsparqlz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BNIL, BNIL)))))))))))))))); 
BGl_vector3659z00zzsparqlz00 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BGl_list3660z00zzsparqlz00); 
BGl_symbol3681z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3682z00zzsparqlz00); 
BGl_list3683z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)2988)), BNIL))); 
BGl_symbol3685z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3686z00zzsparqlz00); 
BGl_symbol3734z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3735z00zzsparqlz00); 
BGl_symbol3743z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3744z00zzsparqlz00); 
BGl_symbol3745z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3746z00zzsparqlz00); 
BGl_list3747z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)1380)), BNIL))); 
BGl_list3752z00zzsparqlz00 = 
MAKE_PAIR(BNIL, BNIL); 
BGl_symbol3753z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3754z00zzsparqlz00); 
BGl_list3755z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)1567)), BNIL))); 
BGl_symbol3756z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3757z00zzsparqlz00); 
BGl_symbol3759z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3760z00zzsparqlz00); 
BGl_list3761z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)1668)), BNIL))); 
BGl_symbol3766z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3767z00zzsparqlz00); 
BGl_list3768z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)2147)), BNIL))); 
BGl_symbol3773z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3774z00zzsparqlz00); 
BGl_symbol3775z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3776z00zzsparqlz00); 
BGl_symbol3777z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3778z00zzsparqlz00); 
BGl_list3772z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3773z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3775z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3775z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3777z00zzsparqlz00, BNIL)))); 
BGl_symbol3779z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3780z00zzsparqlz00); 
BGl_symbol3781z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3782z00zzsparqlz00); 
BGl_list3783z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)2224)), BNIL))); 
BGl_symbol3787z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3788z00zzsparqlz00); 
BGl_symbol3789z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3790z00zzsparqlz00); 
BGl_list3786z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3773z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3787z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3787z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3789z00zzsparqlz00, BNIL)))); 
BGl_symbol3791z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3792z00zzsparqlz00); 
BGl_list3793z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)2355)), BNIL))); 
BGl_symbol3797z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3798z00zzsparqlz00); 
BGl_symbol3799z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3800z00zzsparqlz00); 
BGl_symbol3801z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3802z00zzsparqlz00); 
BGl_list3796z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3773z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3797z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3797z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3799z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3801z00zzsparqlz00, BNIL))))); 
BGl_symbol3803z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3804z00zzsparqlz00); 
BGl_list3805z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)3751)), BNIL))); 
BGl_keyword3807z00zzsparqlz00 = 
bstring_to_keyword(BGl_string3808z00zzsparqlz00); 
BGl_keyword3809z00zzsparqlz00 = 
bstring_to_keyword(BGl_string3810z00zzsparqlz00); 
BGl_keyword3812z00zzsparqlz00 = 
bstring_to_keyword(BGl_string3813z00zzsparqlz00); 
BGl_symbol3817z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3818z00zzsparqlz00); 
BGl_symbol3819z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3820z00zzsparqlz00); 
BGl_keyword3823z00zzsparqlz00 = 
bstring_to_keyword(BGl_string3648z00zzsparqlz00); 
BGl_symbol3828z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3829z00zzsparqlz00); 
BGl_list3830z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)5021)), BNIL))); 
BGl_symbol3832z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3831z00zzsparqlz00); 
BGl_symbol3835z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3836z00zzsparqlz00); 
BGl_symbol3837z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3838z00zzsparqlz00); 
BGl_symbol3839z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3840z00zzsparqlz00); 
BGl_list3834z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3835z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3837z00zzsparqlz00, 
MAKE_PAIR(BGl_symbol3839z00zzsparqlz00, BNIL))); 
BGl_symbol3842z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3843z00zzsparqlz00); 
BGl_list3844z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)5279)), BNIL))); 
BGl_symbol3857z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3858z00zzsparqlz00); 
BGl_list3859z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)5887)), BNIL))); 
BGl_symbol3866z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3867z00zzsparqlz00); 
BGl_list3868z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)6442)), BNIL))); 
BGl_symbol3869z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3870z00zzsparqlz00); 
BGl_list3871z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)6610)), BNIL))); 
BGl_symbol3872z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3873z00zzsparqlz00); 
BGl_list3874z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)6702)), BNIL))); 
BGl_symbol3875z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3876z00zzsparqlz00); 
BGl_list3877z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)6794)), BNIL))); 
BGl_symbol3878z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3879z00zzsparqlz00); 
BGl_list3880z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)6964)), BNIL))); 
BGl_symbol3882z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3883z00zzsparqlz00); 
BGl_list3884z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)7191)), BNIL))); 
BGl_symbol3893z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3894z00zzsparqlz00); 
BGl_list3895z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)7514)), BNIL))); 
BGl_list3896z00zzsparqlz00 = 
MAKE_PAIR(BGl_string3886z00zzsparqlz00, 
MAKE_PAIR(BGl_string3897z00zzsparqlz00, 
MAKE_PAIR(BGl_string3897z00zzsparqlz00, BNIL))); 
BGl_symbol3900z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3901z00zzsparqlz00); 
BGl_list3902z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)7681)), BNIL))); 
BGl_symbol3908z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3909z00zzsparqlz00); 
BGl_list3910z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)8099)), BNIL))); 
BGl_symbol3916z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3917z00zzsparqlz00); 
BGl_list3918z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)8623)), BNIL))); 
BGl_symbol3923z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3924z00zzsparqlz00); 
BGl_list3925z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)9384)), BNIL))); 
BGl_symbol3928z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3929z00zzsparqlz00); 
BGl_list3930z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)9826)), BNIL))); 
BGl_symbol3933z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3934z00zzsparqlz00); 
BGl_list3935z00zzsparqlz00 = 
MAKE_PAIR(BGl_symbol3580z00zzsparqlz00, 
MAKE_PAIR(BGl_string3582z00zzsparqlz00, 
MAKE_PAIR(
BINT(((long)10045)), BNIL))); 
BGl_symbol3938z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3939z00zzsparqlz00); 
BGl_symbol3940z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3941z00zzsparqlz00); 
return ( 
BGl_symbol3942z00zzsparqlz00 = 
bstring_to_symbol(BGl_string3943z00zzsparqlz00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
{ /* Llib/sparql.scm 1 */
obj_t BgL_name2660z00_3330;obj_t BgL_loc2661z00_3331;obj_t BgL_env2662z00_3332;
BgL_name2660z00_3330 = BGl_symbol3577z00zzsparqlz00; 
BgL_loc2661z00_3331 = BGl_list3579z00zzsparqlz00; 
BgL_env2662z00_3332 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env2662z00_3332, BgL_name2660z00_3330, BgL_loc2661z00_3331); 
{ /* Llib/sparql.scm 1 */
obj_t BgL_aux2659z00_3333;
BGl_prefixsz00zzsparqlz00 = BGl_list3583z00zzsparqlz00; 
BGl_dbpediaz00zzsparqlz00 = BGl_string3590z00zzsparqlz00; 
BGl_imdbz00zzsparqlz00 = BGl_string3591z00zzsparqlz00; 
BGl_dbtunez00zzsparqlz00 = BGl_string3592z00zzsparqlz00; 
BGl_lodacz00zzsparqlz00 = BGl_string3593z00zzsparqlz00; 
BGl_bbcz00zzsparqlz00 = BGl_string3594z00zzsparqlz00; 
BGl_bioz00zzsparqlz00 = BGl_string3595z00zzsparqlz00; 
BGl_gouvzd2ukzd2zzsparqlz00 = BGl_string3596z00zzsparqlz00; 
BGl_eeaz00zzsparqlz00 = BGl_string3597z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_name2644z00_3313;obj_t BgL_loc2645z00_3314;obj_t BgL_env2646z00_3315;
BgL_name2644z00_3313 = BGl_symbol3598z00zzsparqlz00; 
BgL_loc2645z00_3314 = BGl_list3600z00zzsparqlz00; 
BgL_env2646z00_3315 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 91 */

BGL_ENV_PUSH_TRACE(BgL_env2646z00_3315, BgL_name2644z00_3313, BgL_loc2645z00_3314); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_aux2643z00_3316;
{ /* Llib/sparql.scm 91 */
obj_t BgL___actionzd2tablezd2_75;
BgL___actionzd2tablezd2_75 = BGl_vector3601z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL___gotozd2tablezd2_76;
BgL___gotozd2tablezd2_76 = BGl_vector3659z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL___reducez00_3443;
BgL___reducez00_3443 = 
MAKE_FX_PROCEDURE(BGl_z62__reducez62zzsparqlz00, 
(int)(((long)3)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL___reducez00_3443, 
(int)(((long)0)), BgL___gotozd2tablezd2_76); 
{ /* Llib/sparql.scm 91 */

BgL_aux2643z00_3316 = 
BGl___makezd2parserzd2zz__lalr_driverz00(BgL___actionzd2tablezd2_75, BgL___reducez00_3443); } } } } 
BGL_ENV_POP_TRACE(BgL_env2646z00_3315); 
BGl_sparqlzd2grammarzd2rulesz00zzsparqlz00 = BgL_aux2643z00_3316; } } } 
{ /* Llib/sparql.scm 111 */
obj_t BgL_name2648z00_3317;obj_t BgL_loc2649z00_3318;obj_t BgL_env2650z00_3319;
BgL_name2648z00_3317 = BGl_symbol3681z00zzsparqlz00; 
BgL_loc2649z00_3318 = BGl_list3683z00zzsparqlz00; 
BgL_env2650z00_3319 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 111 */

BGL_ENV_PUSH_TRACE(BgL_env2650z00_3319, BgL_name2648z00_3317, BgL_loc2649z00_3318); 
BGL_ENV_POP_TRACE(BgL_env2650z00_3319); 
BgL_aux2659z00_3333 = ( 
BGl_sparqlzd2grammarzd2tokensz00zzsparqlz00 = BGl_proc3684z00zzsparqlz00, BUNSPEC) ; } } 
BGL_ENV_POP_TRACE(BgL_env2662z00_3332); 
return BgL_aux2659z00_3333;} } } } 
}



/* &<anonymous:1422:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:111> */
obj_t BGl_z62zc3anonymousza31422za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3111ze3z23zzsparqlz00(obj_t BgL_envz00_3444, obj_t BgL_inputzd2portzd2_3445)
{ AN_OBJECT;
{ /* Llib/sparql.scm 111 */
{ 
obj_t BgL_inputzd2portzd2_160;
BgL_inputzd2portzd2_160 = BgL_inputzd2portzd2_3445; 
{ /* Llib/sparql.scm 111 */
obj_t BgL_name2656z00_3326;obj_t BgL_loc2657z00_3327;obj_t BgL_env2658z00_3328;
BgL_name2656z00_3326 = BGl_symbol3685z00zzsparqlz00; 
BgL_loc2657z00_3327 = BGl_list3683z00zzsparqlz00; 
BgL_env2658z00_3328 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 111 */

BGL_ENV_PUSH_TRACE(BgL_env2658z00_3328, BgL_name2656z00_3326, BgL_loc2657z00_3327); 
{ /* Llib/sparql.scm 111 */
obj_t BgL_aux2655z00_3329;
{ 
obj_t BgL_inputzd2portzd2_245;long BgL_lastzd2matchzd2_246;obj_t BgL_inputzd2portzd2_253;long BgL_lastzd2matchzd2_254;obj_t BgL_inputzd2portzd2_261;long BgL_lastzd2matchzd2_262;obj_t BgL_inputzd2portzd2_268;long BgL_lastzd2matchzd2_269;obj_t BgL_inputzd2portzd2_275;long BgL_lastzd2matchzd2_276;obj_t BgL_inputzd2portzd2_282;long BgL_lastzd2matchzd2_283;obj_t BgL_inputzd2portzd2_289;long BgL_lastzd2matchzd2_290;obj_t BgL_inputzd2portzd2_296;long BgL_lastzd2matchzd2_297;obj_t BgL_inputzd2portzd2_304;long BgL_lastzd2matchzd2_305;obj_t BgL_inputzd2portzd2_311;long BgL_lastzd2matchzd2_312;obj_t BgL_inputzd2portzd2_318;long BgL_lastzd2matchzd2_319;obj_t BgL_inputzd2portzd2_325;long BgL_lastzd2matchzd2_326;obj_t BgL_inputzd2portzd2_332;long BgL_lastzd2matchzd2_333;obj_t BgL_inputzd2portzd2_343;long BgL_lastzd2matchzd2_344;obj_t BgL_inputzd2portzd2_351;long BgL_lastzd2matchzd2_352;obj_t BgL_inputzd2portzd2_371;long BgL_lastzd2matchzd2_372;obj_t BgL_inputzd2portzd2_381;long BgL_lastzd2matchzd2_382;obj_t BgL_inputzd2portzd2_389;long BgL_lastzd2matchzd2_390;obj_t BgL_inputzd2portzd2_398;long BgL_lastzd2matchzd2_399;obj_t BgL_inputzd2portzd2_407;long BgL_lastzd2matchzd2_408;obj_t BgL_inputzd2portzd2_416;long BgL_lastzd2matchzd2_417;obj_t BgL_inputzd2portzd2_425;long BgL_lastzd2matchzd2_426;obj_t BgL_inputzd2portzd2_434;long BgL_lastzd2matchzd2_435;obj_t BgL_inputzd2portzd2_443;long BgL_lastzd2matchzd2_444;obj_t BgL_inputzd2portzd2_453;long BgL_lastzd2matchzd2_454;obj_t BgL_inputzd2portzd2_462;long BgL_lastzd2matchzd2_463;obj_t BgL_inputzd2portzd2_480;long BgL_lastzd2matchzd2_481;obj_t BgL_inputzd2portzd2_487;long BgL_lastzd2matchzd2_488;obj_t BgL_inputzd2portzd2_498;long BgL_lastzd2matchzd2_499;obj_t BgL_inputzd2portzd2_505;long BgL_lastzd2matchzd2_506;obj_t BgL_inputzd2portzd2_512;long BgL_lastzd2matchzd2_513;obj_t BgL_inputzd2portzd2_519;long BgL_lastzd2matchzd2_520;obj_t BgL_inputzd2portzd2_526;long BgL_lastzd2matchzd2_527;obj_t BgL_inputzd2portzd2_533;long BgL_lastzd2matchzd2_534;obj_t BgL_inputzd2portzd2_548;long BgL_lastzd2matchzd2_549;obj_t BgL_inputzd2portzd2_555;long BgL_lastzd2matchzd2_556;obj_t BgL_inputzd2portzd2_562;long BgL_lastzd2matchzd2_563;obj_t BgL_inputzd2portzd2_570;long BgL_lastzd2matchzd2_571;obj_t BgL_inputzd2portzd2_578;long BgL_lastzd2matchzd2_579;obj_t BgL_inputzd2portzd2_589;long BgL_lastzd2matchzd2_590;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4872;
{ /* Llib/sparql.scm 111 */
obj_t BgL_arg1430z00_236;
{ /* Llib/sparql.scm 111 */
obj_t BgL_res2535z00_2618;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 111 */
BgL_res2535z00_2618 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_4875;
BgL_auxz00_4875 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3732z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_4875,BFALSE,BFALSE);} 
BgL_arg1430z00_236 = BgL_res2535z00_2618; } 
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2536z00_2620;
BgL_res2536z00_2620 = 
INPUT_PORT_CLOSEP(BgL_arg1430z00_236); 
BgL_testz00_4872 = BgL_res2536z00_2620; } } 
if(BgL_testz00_4872)
{ /* Llib/sparql.scm 111 */
obj_t BgL_arg1427z00_235;
{ /* Llib/sparql.scm 111 */
obj_t BgL_res2537z00_2621;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 111 */
BgL_res2537z00_2621 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_4882;
BgL_auxz00_4882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3732z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_4882,BFALSE,BFALSE);} 
BgL_arg1427z00_235 = BgL_res2537z00_2621; } 
BgL_aux2655z00_3329 = 
BGl_errorzf2locationzf2zz__errorz00(BGl_string3689z00zzsparqlz00, BGl_string3733z00zzsparqlz00, BgL_arg1427z00_235, BGl_string3582z00zzsparqlz00, 
BINT(((long)2988))); }  else 
{ /* Llib/sparql.scm 111 */
BgL_zc3anonymousza31755za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_673:
{ /* Llib/sparql.scm 111 */
long BgL_res2519z00_2576;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2575;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2575 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_4890;
BgL_auxz00_4890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_4890,BFALSE,BFALSE);} 
BgL_res2519z00_2576 = 
RGC_START_MATCH(BgL_inputzd2portzd2_2575); } BgL_res2519z00_2576; } 
{ /* Llib/sparql.scm 111 */
long BgL_matchz00_674;
BgL_inputzd2portzd2_351 = BgL_inputzd2portzd2_160; 
BgL_lastzd2matchzd2_352 = ((long)9); 
BgL_zc3anonymousza31496za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_353:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_354;
{ /* Llib/sparql.scm 111 */
int BgL_res2319z00_2051;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2050;
if(
INPUT_PORTP(BgL_inputzd2portzd2_351))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2050 = BgL_inputzd2portzd2_351; }  else 
{ 
obj_t BgL_auxz00_4897;
BgL_auxz00_4897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3717z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_351); 
FAILURE(BgL_auxz00_4897,BFALSE,BFALSE);} 
BgL_res2319z00_2051 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2050); } 
BgL_currentzd2charzd2_354 = BgL_res2319z00_2051; } 
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4905;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2321z00_2056;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2055;
if(
INPUT_PORTP(BgL_inputzd2portzd2_351))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2055 = BgL_inputzd2portzd2_351; }  else 
{ 
obj_t BgL_auxz00_4908;
BgL_auxz00_4908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3717z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_351); 
FAILURE(BgL_auxz00_4908,BFALSE,BFALSE);} 
BgL_res2321z00_2056 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2055); } 
BgL_testz00_4905 = BgL_res2321z00_2056; } 
if(BgL_testz00_4905)
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4913;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2322z00_2058;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2057;
if(
INPUT_PORTP(BgL_inputzd2portzd2_351))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2057 = BgL_inputzd2portzd2_351; }  else 
{ 
obj_t BgL_auxz00_4916;
BgL_auxz00_4916 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3717z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_351); 
FAILURE(BgL_auxz00_4916,BFALSE,BFALSE);} 
BgL_res2322z00_2058 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2057); } 
BgL_testz00_4913 = BgL_res2322z00_2058; } 
if(BgL_testz00_4913)
{ 

goto BgL_zc3anonymousza31496za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_353;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_352; } }  else 
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2061;
{ /* Llib/sparql.scm 111 */
long BgL_res2323z00_2063;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2062;
if(
INPUT_PORTP(BgL_inputzd2portzd2_351))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2062 = BgL_inputzd2portzd2_351; }  else 
{ 
obj_t BgL_auxz00_4923;
BgL_auxz00_4923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3717z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_351); 
FAILURE(BgL_auxz00_4923,BFALSE,BFALSE);} 
BgL_res2323z00_2063 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2062); } BgL_res2323z00_2063; } 
BgL_newzd2matchzd2_2061 = ((long)9); 
BgL_matchz00_674 = BgL_newzd2matchzd2_2061; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4928;
if(
(
(long)(BgL_currentzd2charzd2_354)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4928 = 
(
(long)(BgL_currentzd2charzd2_354)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4928 = ((bool_t)0)
; } 
if(BgL_testz00_4928)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_443 = BgL_inputzd2portzd2_351; 
BgL_lastzd2matchzd2_444 = BgL_lastzd2matchzd2_352; 
BgL_zc3anonymousza31557za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_445:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_446;
{ /* Llib/sparql.scm 111 */
long BgL_res2388z00_2236;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2235;
if(
INPUT_PORTP(BgL_inputzd2portzd2_443))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2235 = BgL_inputzd2portzd2_443; }  else 
{ 
obj_t BgL_auxz00_4936;
BgL_auxz00_4936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3708z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_443); 
FAILURE(BgL_auxz00_4936,BFALSE,BFALSE);} 
BgL_res2388z00_2236 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2235); } BgL_res2388z00_2236; } 
BgL_newzd2matchzd2_446 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_447;
{ /* Llib/sparql.scm 111 */
int BgL_res2389z00_2238;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2237;
if(
INPUT_PORTP(BgL_inputzd2portzd2_443))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2237 = BgL_inputzd2portzd2_443; }  else 
{ 
obj_t BgL_auxz00_4943;
BgL_auxz00_4943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3708z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_443); 
FAILURE(BgL_auxz00_4943,BFALSE,BFALSE);} 
BgL_res2389z00_2238 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2237); } 
BgL_currentzd2charzd2_447 = BgL_res2389z00_2238; } 
if(
(
(long)(BgL_currentzd2charzd2_447)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4951;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2393z00_2248;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2242;
if(
INPUT_PORTP(BgL_inputzd2portzd2_443))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2242 = BgL_inputzd2portzd2_443; }  else 
{ 
obj_t BgL_auxz00_4954;
BgL_auxz00_4954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3708z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_443); 
FAILURE(BgL_auxz00_4954,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4958;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2391z00_2245;
BgL_res2391z00_2245 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2242); 
BgL_testz00_4958 = BgL_res2391z00_2245; } 
if(BgL_testz00_4958)
{ /* Llib/sparql.scm 111 */
BgL_res2393z00_2248 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2242); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2393z00_2248 = ((bool_t)0); } } } 
BgL_testz00_4951 = BgL_res2393z00_2248; } 
if(BgL_testz00_4951)
{ 

goto BgL_zc3anonymousza31557za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_445;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_446; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4961;
if(
(
(long)(BgL_currentzd2charzd2_447)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4961 = 
(
(long)(BgL_currentzd2charzd2_447)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4961 = ((bool_t)0)
; } 
if(BgL_testz00_4961)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_398 = BgL_inputzd2portzd2_443; 
BgL_lastzd2matchzd2_399 = BgL_newzd2matchzd2_446; 
BgL_zc3anonymousza31530za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_400:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_401;
{ /* Llib/sparql.scm 111 */
int BgL_res2352z00_2145;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2144;
if(
INPUT_PORTP(BgL_inputzd2portzd2_398))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2144 = BgL_inputzd2portzd2_398; }  else 
{ 
obj_t BgL_auxz00_4969;
BgL_auxz00_4969 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3713z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_398); 
FAILURE(BgL_auxz00_4969,BFALSE,BFALSE);} 
BgL_res2352z00_2145 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2144); } 
BgL_currentzd2charzd2_401 = BgL_res2352z00_2145; } 
if(
(
(long)(BgL_currentzd2charzd2_401)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4977;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2356z00_2155;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2149;
if(
INPUT_PORTP(BgL_inputzd2portzd2_398))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2149 = BgL_inputzd2portzd2_398; }  else 
{ 
obj_t BgL_auxz00_4980;
BgL_auxz00_4980 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3713z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_398); 
FAILURE(BgL_auxz00_4980,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4984;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2354z00_2152;
BgL_res2354z00_2152 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2149); 
BgL_testz00_4984 = BgL_res2354z00_2152; } 
if(BgL_testz00_4984)
{ /* Llib/sparql.scm 111 */
BgL_res2356z00_2155 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2149); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2356z00_2155 = ((bool_t)0); } } } 
BgL_testz00_4977 = BgL_res2356z00_2155; } 
if(BgL_testz00_4977)
{ 

goto BgL_zc3anonymousza31530za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_400;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_399; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_4987;
if(
(
(long)(BgL_currentzd2charzd2_401)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_4987 = 
(
(long)(BgL_currentzd2charzd2_401)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_4987 = ((bool_t)0)
; } 
if(BgL_testz00_4987)
{ 

goto BgL_zc3anonymousza31530za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_400;}  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_401)==((long)58)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_407 = BgL_inputzd2portzd2_398; 
BgL_lastzd2matchzd2_408 = BgL_lastzd2matchzd2_399; 
BgL_zc3anonymousza31536za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_409:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_410;
{ /* Llib/sparql.scm 111 */
long BgL_res2360z00_2166;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2165;
if(
INPUT_PORTP(BgL_inputzd2portzd2_407))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2165 = BgL_inputzd2portzd2_407; }  else 
{ 
obj_t BgL_auxz00_4998;
BgL_auxz00_4998 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3712z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_407); 
FAILURE(BgL_auxz00_4998,BFALSE,BFALSE);} 
BgL_res2360z00_2166 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2165); } BgL_res2360z00_2166; } 
BgL_newzd2matchzd2_410 = ((long)3); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_411;
{ /* Llib/sparql.scm 111 */
int BgL_res2361z00_2168;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2167;
if(
INPUT_PORTP(BgL_inputzd2portzd2_407))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2167 = BgL_inputzd2portzd2_407; }  else 
{ 
obj_t BgL_auxz00_5005;
BgL_auxz00_5005 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3712z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_407); 
FAILURE(BgL_auxz00_5005,BFALSE,BFALSE);} 
BgL_res2361z00_2168 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2167); } 
BgL_currentzd2charzd2_411 = BgL_res2361z00_2168; } 
if(
(
(long)(BgL_currentzd2charzd2_411)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5013;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2365z00_2178;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2172;
if(
INPUT_PORTP(BgL_inputzd2portzd2_407))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2172 = BgL_inputzd2portzd2_407; }  else 
{ 
obj_t BgL_auxz00_5016;
BgL_auxz00_5016 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3712z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_407); 
FAILURE(BgL_auxz00_5016,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5020;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2363z00_2175;
BgL_res2363z00_2175 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2172); 
BgL_testz00_5020 = BgL_res2363z00_2175; } 
if(BgL_testz00_5020)
{ /* Llib/sparql.scm 111 */
BgL_res2365z00_2178 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2172); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2365z00_2178 = ((bool_t)0); } } } 
BgL_testz00_5013 = BgL_res2365z00_2178; } 
if(BgL_testz00_5013)
{ 

goto BgL_zc3anonymousza31536za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_409;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_410; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5023;
if(
(
(long)(BgL_currentzd2charzd2_411)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_5023 = 
(
(long)(BgL_currentzd2charzd2_411)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_5023 = ((bool_t)0)
; } 
if(BgL_testz00_5023)
{ 
long BgL_lastzd2matchzd2_5029;
BgL_lastzd2matchzd2_5029 = BgL_newzd2matchzd2_410; 
BgL_lastzd2matchzd2_408 = BgL_lastzd2matchzd2_5029; 
goto BgL_zc3anonymousza31536za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_409;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_410; } } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_399; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_447)==((long)58)))
{ 
long BgL_lastzd2matchzd2_5034;obj_t BgL_inputzd2portzd2_5033;
BgL_inputzd2portzd2_5033 = BgL_inputzd2portzd2_443; 
BgL_lastzd2matchzd2_5034 = BgL_newzd2matchzd2_446; 
BgL_lastzd2matchzd2_408 = BgL_lastzd2matchzd2_5034; 
BgL_inputzd2portzd2_407 = BgL_inputzd2portzd2_5033; 
goto BgL_zc3anonymousza31536za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_409;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_446; } } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)95)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_343 = BgL_inputzd2portzd2_351; 
BgL_lastzd2matchzd2_344 = BgL_lastzd2matchzd2_352; 
BgL_zc3anonymousza31492za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_345:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_346;
{ /* Llib/sparql.scm 111 */
long BgL_res2312z00_2034;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2033;
if(
INPUT_PORTP(BgL_inputzd2portzd2_343))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2033 = BgL_inputzd2portzd2_343; }  else 
{ 
obj_t BgL_auxz00_5040;
BgL_auxz00_5040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3718z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_343); 
FAILURE(BgL_auxz00_5040,BFALSE,BFALSE);} 
BgL_res2312z00_2034 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2033); } BgL_res2312z00_2034; } 
BgL_newzd2matchzd2_346 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_347;
{ /* Llib/sparql.scm 111 */
int BgL_res2313z00_2036;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2035;
if(
INPUT_PORTP(BgL_inputzd2portzd2_343))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2035 = BgL_inputzd2portzd2_343; }  else 
{ 
obj_t BgL_auxz00_5047;
BgL_auxz00_5047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3718z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_343); 
FAILURE(BgL_auxz00_5047,BFALSE,BFALSE);} 
BgL_res2313z00_2036 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2035); } 
BgL_currentzd2charzd2_347 = BgL_res2313z00_2036; } 
if(
(
(long)(BgL_currentzd2charzd2_347)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5055;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2317z00_2046;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2040;
if(
INPUT_PORTP(BgL_inputzd2portzd2_343))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2040 = BgL_inputzd2portzd2_343; }  else 
{ 
obj_t BgL_auxz00_5058;
BgL_auxz00_5058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3718z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_343); 
FAILURE(BgL_auxz00_5058,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5062;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2315z00_2043;
BgL_res2315z00_2043 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2040); 
BgL_testz00_5062 = BgL_res2315z00_2043; } 
if(BgL_testz00_5062)
{ /* Llib/sparql.scm 111 */
BgL_res2317z00_2046 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2040); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2317z00_2046 = ((bool_t)0); } } } 
BgL_testz00_5055 = BgL_res2317z00_2046; } 
if(BgL_testz00_5055)
{ 

goto BgL_zc3anonymousza31492za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_345;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_346; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_347)==((long)58)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_462 = BgL_inputzd2portzd2_343; 
BgL_lastzd2matchzd2_463 = BgL_newzd2matchzd2_346; 
BgL_zc3anonymousza31569za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_464:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_465;
{ /* Llib/sparql.scm 111 */
int BgL_res2405z00_2279;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2278;
if(
INPUT_PORTP(BgL_inputzd2portzd2_462))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2278 = BgL_inputzd2portzd2_462; }  else 
{ 
obj_t BgL_auxz00_5070;
BgL_auxz00_5070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3706z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_462); 
FAILURE(BgL_auxz00_5070,BFALSE,BFALSE);} 
BgL_res2405z00_2279 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2278); } 
BgL_currentzd2charzd2_465 = BgL_res2405z00_2279; } 
if(
(
(long)(BgL_currentzd2charzd2_465)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5078;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2409z00_2289;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2283;
if(
INPUT_PORTP(BgL_inputzd2portzd2_462))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2283 = BgL_inputzd2portzd2_462; }  else 
{ 
obj_t BgL_auxz00_5081;
BgL_auxz00_5081 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3706z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_462); 
FAILURE(BgL_auxz00_5081,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5085;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2407z00_2286;
BgL_res2407z00_2286 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2283); 
BgL_testz00_5085 = BgL_res2407z00_2286; } 
if(BgL_testz00_5085)
{ /* Llib/sparql.scm 111 */
BgL_res2409z00_2289 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2283); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2409z00_2289 = ((bool_t)0); } } } 
BgL_testz00_5078 = BgL_res2409z00_2289; } 
if(BgL_testz00_5078)
{ 

goto BgL_zc3anonymousza31569za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_464;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_463; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5088;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5089;
if(
(
(long)(BgL_currentzd2charzd2_465)>=((long)65)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_5089 = 
(
(long)(BgL_currentzd2charzd2_465)<((long)91))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_5089 = ((bool_t)0)
; } 
if(BgL_testz00_5089)
{ /* Llib/sparql.scm 111 */
BgL_testz00_5088 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_465)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_5088 = 
(
(long)(BgL_currentzd2charzd2_465)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_5088 = ((bool_t)0)
; } } } 
if(BgL_testz00_5088)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_589 = BgL_inputzd2portzd2_462; 
BgL_lastzd2matchzd2_590 = BgL_lastzd2matchzd2_463; 
BgL_zc3anonymousza31646za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_591:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_592;
{ /* Llib/sparql.scm 111 */
long BgL_res2501z00_2528;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2527;
if(
INPUT_PORTP(BgL_inputzd2portzd2_589))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2527 = BgL_inputzd2portzd2_589; }  else 
{ 
obj_t BgL_auxz00_5102;
BgL_auxz00_5102 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3692z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_589); 
FAILURE(BgL_auxz00_5102,BFALSE,BFALSE);} 
BgL_res2501z00_2528 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2527); } BgL_res2501z00_2528; } 
BgL_newzd2matchzd2_592 = ((long)1); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_593;
{ /* Llib/sparql.scm 111 */
int BgL_res2502z00_2530;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2529;
if(
INPUT_PORTP(BgL_inputzd2portzd2_589))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2529 = BgL_inputzd2portzd2_589; }  else 
{ 
obj_t BgL_auxz00_5109;
BgL_auxz00_5109 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3692z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_589); 
FAILURE(BgL_auxz00_5109,BFALSE,BFALSE);} 
BgL_res2502z00_2530 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2529); } 
BgL_currentzd2charzd2_593 = BgL_res2502z00_2530; } 
if(
(
(long)(BgL_currentzd2charzd2_593)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5117;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2506z00_2540;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2534;
if(
INPUT_PORTP(BgL_inputzd2portzd2_589))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2534 = BgL_inputzd2portzd2_589; }  else 
{ 
obj_t BgL_auxz00_5120;
BgL_auxz00_5120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3692z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_589); 
FAILURE(BgL_auxz00_5120,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5124;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2504z00_2537;
BgL_res2504z00_2537 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2534); 
BgL_testz00_5124 = BgL_res2504z00_2537; } 
if(BgL_testz00_5124)
{ /* Llib/sparql.scm 111 */
BgL_res2506z00_2540 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2534); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2506z00_2540 = ((bool_t)0); } } } 
BgL_testz00_5117 = BgL_res2506z00_2540; } 
if(BgL_testz00_5117)
{ 

goto BgL_zc3anonymousza31646za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_591;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_592; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5127;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5128;
if(
(
(long)(BgL_currentzd2charzd2_593)>=((long)48)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_5128 = 
(
(long)(BgL_currentzd2charzd2_593)<((long)58))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_5128 = ((bool_t)0)
; } 
if(BgL_testz00_5128)
{ /* Llib/sparql.scm 111 */
BgL_testz00_5127 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5134;
if(
(
(long)(BgL_currentzd2charzd2_593)>=((long)65)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_5134 = 
(
(long)(BgL_currentzd2charzd2_593)<((long)91))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_5134 = ((bool_t)0)
; } 
if(BgL_testz00_5134)
{ /* Llib/sparql.scm 111 */
BgL_testz00_5127 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_593)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_5127 = 
(
(long)(BgL_currentzd2charzd2_593)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_5127 = ((bool_t)0)
; } } } } 
if(BgL_testz00_5127)
{ 
long BgL_lastzd2matchzd2_5145;
BgL_lastzd2matchzd2_5145 = BgL_newzd2matchzd2_592; 
BgL_lastzd2matchzd2_590 = BgL_lastzd2matchzd2_5145; 
goto BgL_zc3anonymousza31646za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_591;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_592; } } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_463; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_346; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)64)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_253 = BgL_inputzd2portzd2_351; 
BgL_lastzd2matchzd2_254 = BgL_lastzd2matchzd2_352; 
BgL_zc3anonymousza31438za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_255:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_256;
{ /* Llib/sparql.scm 111 */
long BgL_res2235z00_1837;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1836;
if(
INPUT_PORTP(BgL_inputzd2portzd2_253))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1836 = BgL_inputzd2portzd2_253; }  else 
{ 
obj_t BgL_auxz00_5151;
BgL_auxz00_5151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3730z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_253); 
FAILURE(BgL_auxz00_5151,BFALSE,BFALSE);} 
BgL_res2235z00_1837 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_1836); } BgL_res2235z00_1837; } 
BgL_newzd2matchzd2_256 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_257;
{ /* Llib/sparql.scm 111 */
int BgL_res2236z00_1839;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1838;
if(
INPUT_PORTP(BgL_inputzd2portzd2_253))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1838 = BgL_inputzd2portzd2_253; }  else 
{ 
obj_t BgL_auxz00_5158;
BgL_auxz00_5158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3730z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_253); 
FAILURE(BgL_auxz00_5158,BFALSE,BFALSE);} 
BgL_res2236z00_1839 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1838); } 
BgL_currentzd2charzd2_257 = BgL_res2236z00_1839; } 
if(
(
(long)(BgL_currentzd2charzd2_257)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5166;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2240z00_1849;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1843;
if(
INPUT_PORTP(BgL_inputzd2portzd2_253))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1843 = BgL_inputzd2portzd2_253; }  else 
{ 
obj_t BgL_auxz00_5169;
BgL_auxz00_5169 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3730z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_253); 
FAILURE(BgL_auxz00_5169,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5173;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2238z00_1846;
BgL_res2238z00_1846 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1843); 
BgL_testz00_5173 = BgL_res2238z00_1846; } 
if(BgL_testz00_5173)
{ /* Llib/sparql.scm 111 */
BgL_res2240z00_1849 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1843); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2240z00_1849 = ((bool_t)0); } } } 
BgL_testz00_5166 = BgL_res2240z00_1849; } 
if(BgL_testz00_5166)
{ 

goto BgL_zc3anonymousza31438za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_255;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_256; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_257)==((long)112)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_480 = BgL_inputzd2portzd2_253; 
BgL_lastzd2matchzd2_481 = BgL_newzd2matchzd2_256; 
BgL_zc3anonymousza31577za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_482:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_483;
{ /* Llib/sparql.scm 111 */
int BgL_res2416z00_2309;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2308;
if(
INPUT_PORTP(BgL_inputzd2portzd2_480))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2308 = BgL_inputzd2portzd2_480; }  else 
{ 
obj_t BgL_auxz00_5181;
BgL_auxz00_5181 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3705z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_480); 
FAILURE(BgL_auxz00_5181,BFALSE,BFALSE);} 
BgL_res2416z00_2309 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2308); } 
BgL_currentzd2charzd2_483 = BgL_res2416z00_2309; } 
if(
(
(long)(BgL_currentzd2charzd2_483)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5189;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2420z00_2319;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2313;
if(
INPUT_PORTP(BgL_inputzd2portzd2_480))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2313 = BgL_inputzd2portzd2_480; }  else 
{ 
obj_t BgL_auxz00_5192;
BgL_auxz00_5192 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3705z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_480); 
FAILURE(BgL_auxz00_5192,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5196;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2418z00_2316;
BgL_res2418z00_2316 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2313); 
BgL_testz00_5196 = BgL_res2418z00_2316; } 
if(BgL_testz00_5196)
{ /* Llib/sparql.scm 111 */
BgL_res2420z00_2319 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2313); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2420z00_2319 = ((bool_t)0); } } } 
BgL_testz00_5189 = BgL_res2420z00_2319; } 
if(BgL_testz00_5189)
{ 

goto BgL_zc3anonymousza31577za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_482;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_481; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_483)==((long)114)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_261 = BgL_inputzd2portzd2_480; 
BgL_lastzd2matchzd2_262 = BgL_lastzd2matchzd2_481; 
BgL_zc3anonymousza31442za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_263:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_264;
{ /* Llib/sparql.scm 111 */
int BgL_res2242z00_1854;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1853;
if(
INPUT_PORTP(BgL_inputzd2portzd2_261))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1853 = BgL_inputzd2portzd2_261; }  else 
{ 
obj_t BgL_auxz00_5204;
BgL_auxz00_5204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3729z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_261); 
FAILURE(BgL_auxz00_5204,BFALSE,BFALSE);} 
BgL_res2242z00_1854 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1853); } 
BgL_currentzd2charzd2_264 = BgL_res2242z00_1854; } 
if(
(
(long)(BgL_currentzd2charzd2_264)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5212;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2246z00_1864;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1858;
if(
INPUT_PORTP(BgL_inputzd2portzd2_261))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1858 = BgL_inputzd2portzd2_261; }  else 
{ 
obj_t BgL_auxz00_5215;
BgL_auxz00_5215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3729z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_261); 
FAILURE(BgL_auxz00_5215,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5219;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2244z00_1861;
BgL_res2244z00_1861 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1858); 
BgL_testz00_5219 = BgL_res2244z00_1861; } 
if(BgL_testz00_5219)
{ /* Llib/sparql.scm 111 */
BgL_res2246z00_1864 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1858); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2246z00_1864 = ((bool_t)0); } } } 
BgL_testz00_5212 = BgL_res2246z00_1864; } 
if(BgL_testz00_5212)
{ 

goto BgL_zc3anonymousza31442za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_263;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_262; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_264)==((long)101)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_487 = BgL_inputzd2portzd2_261; 
BgL_lastzd2matchzd2_488 = BgL_lastzd2matchzd2_262; 
BgL_zc3anonymousza31581za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_489:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_490;
{ /* Llib/sparql.scm 111 */
int BgL_res2422z00_2324;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2323;
if(
INPUT_PORTP(BgL_inputzd2portzd2_487))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2323 = BgL_inputzd2portzd2_487; }  else 
{ 
obj_t BgL_auxz00_5227;
BgL_auxz00_5227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3704z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_487); 
FAILURE(BgL_auxz00_5227,BFALSE,BFALSE);} 
BgL_res2422z00_2324 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2323); } 
BgL_currentzd2charzd2_490 = BgL_res2422z00_2324; } 
if(
(
(long)(BgL_currentzd2charzd2_490)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5235;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2426z00_2334;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2328;
if(
INPUT_PORTP(BgL_inputzd2portzd2_487))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2328 = BgL_inputzd2portzd2_487; }  else 
{ 
obj_t BgL_auxz00_5238;
BgL_auxz00_5238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3704z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_487); 
FAILURE(BgL_auxz00_5238,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5242;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2424z00_2331;
BgL_res2424z00_2331 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2328); 
BgL_testz00_5242 = BgL_res2424z00_2331; } 
if(BgL_testz00_5242)
{ /* Llib/sparql.scm 111 */
BgL_res2426z00_2334 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2328); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2426z00_2334 = ((bool_t)0); } } } 
BgL_testz00_5235 = BgL_res2426z00_2334; } 
if(BgL_testz00_5235)
{ 

goto BgL_zc3anonymousza31581za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_489;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_488; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_490)==((long)102)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_268 = BgL_inputzd2portzd2_487; 
BgL_lastzd2matchzd2_269 = BgL_lastzd2matchzd2_488; 
BgL_zc3anonymousza31446za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_270:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_271;
{ /* Llib/sparql.scm 111 */
int BgL_res2248z00_1869;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1868;
if(
INPUT_PORTP(BgL_inputzd2portzd2_268))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1868 = BgL_inputzd2portzd2_268; }  else 
{ 
obj_t BgL_auxz00_5250;
BgL_auxz00_5250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3728z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_268); 
FAILURE(BgL_auxz00_5250,BFALSE,BFALSE);} 
BgL_res2248z00_1869 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1868); } 
BgL_currentzd2charzd2_271 = BgL_res2248z00_1869; } 
if(
(
(long)(BgL_currentzd2charzd2_271)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5258;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2252z00_1879;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1873;
if(
INPUT_PORTP(BgL_inputzd2portzd2_268))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1873 = BgL_inputzd2portzd2_268; }  else 
{ 
obj_t BgL_auxz00_5261;
BgL_auxz00_5261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3728z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_268); 
FAILURE(BgL_auxz00_5261,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5265;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2250z00_1876;
BgL_res2250z00_1876 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1873); 
BgL_testz00_5265 = BgL_res2250z00_1876; } 
if(BgL_testz00_5265)
{ /* Llib/sparql.scm 111 */
BgL_res2252z00_1879 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1873); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2252z00_1879 = ((bool_t)0); } } } 
BgL_testz00_5258 = BgL_res2252z00_1879; } 
if(BgL_testz00_5258)
{ 

goto BgL_zc3anonymousza31446za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_270;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_269; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_271)==((long)105)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_275 = BgL_inputzd2portzd2_268; 
BgL_lastzd2matchzd2_276 = BgL_lastzd2matchzd2_269; 
BgL_zc3anonymousza31450za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_277:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_278;
{ /* Llib/sparql.scm 111 */
int BgL_res2254z00_1884;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1883;
if(
INPUT_PORTP(BgL_inputzd2portzd2_275))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1883 = BgL_inputzd2portzd2_275; }  else 
{ 
obj_t BgL_auxz00_5273;
BgL_auxz00_5273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3727z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_275); 
FAILURE(BgL_auxz00_5273,BFALSE,BFALSE);} 
BgL_res2254z00_1884 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1883); } 
BgL_currentzd2charzd2_278 = BgL_res2254z00_1884; } 
if(
(
(long)(BgL_currentzd2charzd2_278)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5281;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2258z00_1894;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1888;
if(
INPUT_PORTP(BgL_inputzd2portzd2_275))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1888 = BgL_inputzd2portzd2_275; }  else 
{ 
obj_t BgL_auxz00_5284;
BgL_auxz00_5284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3727z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_275); 
FAILURE(BgL_auxz00_5284,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5288;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2256z00_1891;
BgL_res2256z00_1891 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1888); 
BgL_testz00_5288 = BgL_res2256z00_1891; } 
if(BgL_testz00_5288)
{ /* Llib/sparql.scm 111 */
BgL_res2258z00_1894 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1888); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2258z00_1894 = ((bool_t)0); } } } 
BgL_testz00_5281 = BgL_res2258z00_1894; } 
if(BgL_testz00_5281)
{ 

goto BgL_zc3anonymousza31450za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_277;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_276; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_278)==((long)120)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_1900;
{ /* Llib/sparql.scm 111 */
long BgL_res2260z00_1902;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1901;
if(
INPUT_PORTP(BgL_inputzd2portzd2_275))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1901 = BgL_inputzd2portzd2_275; }  else 
{ 
obj_t BgL_auxz00_5296;
BgL_auxz00_5296 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3727z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_275); 
FAILURE(BgL_auxz00_5296,BFALSE,BFALSE);} 
BgL_res2260z00_1902 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_1901); } BgL_res2260z00_1902; } 
BgL_newzd2matchzd2_1900 = ((long)8); 
BgL_matchz00_674 = BgL_newzd2matchzd2_1900; }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_276; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_269; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_488; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_262; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_481; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_256; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)60)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_434 = BgL_inputzd2portzd2_351; 
BgL_lastzd2matchzd2_435 = BgL_lastzd2matchzd2_352; 
BgL_zc3anonymousza31551za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_436:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_437;
{ /* Llib/sparql.scm 111 */
long BgL_res2381z00_2217;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2216;
if(
INPUT_PORTP(BgL_inputzd2portzd2_434))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2216 = BgL_inputzd2portzd2_434; }  else 
{ 
obj_t BgL_auxz00_5306;
BgL_auxz00_5306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3709z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_434); 
FAILURE(BgL_auxz00_5306,BFALSE,BFALSE);} 
BgL_res2381z00_2217 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2216); } BgL_res2381z00_2217; } 
BgL_newzd2matchzd2_437 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_438;
{ /* Llib/sparql.scm 111 */
int BgL_res2382z00_2219;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2218;
if(
INPUT_PORTP(BgL_inputzd2portzd2_434))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2218 = BgL_inputzd2portzd2_434; }  else 
{ 
obj_t BgL_auxz00_5313;
BgL_auxz00_5313 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3709z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_434); 
FAILURE(BgL_auxz00_5313,BFALSE,BFALSE);} 
BgL_res2382z00_2219 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2218); } 
BgL_currentzd2charzd2_438 = BgL_res2382z00_2219; } 
if(
(
(long)(BgL_currentzd2charzd2_438)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5321;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2384z00_2224;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2223;
if(
INPUT_PORTP(BgL_inputzd2portzd2_434))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2223 = BgL_inputzd2portzd2_434; }  else 
{ 
obj_t BgL_auxz00_5324;
BgL_auxz00_5324 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3709z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_434); 
FAILURE(BgL_auxz00_5324,BFALSE,BFALSE);} 
BgL_res2384z00_2224 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2223); } 
BgL_testz00_5321 = BgL_res2384z00_2224; } 
if(BgL_testz00_5321)
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5329;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2385z00_2226;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2225;
if(
INPUT_PORTP(BgL_inputzd2portzd2_434))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2225 = BgL_inputzd2portzd2_434; }  else 
{ 
obj_t BgL_auxz00_5332;
BgL_auxz00_5332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3709z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_434); 
FAILURE(BgL_auxz00_5332,BFALSE,BFALSE);} 
BgL_res2385z00_2226 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2225); } 
BgL_testz00_5329 = BgL_res2385z00_2226; } 
if(BgL_testz00_5329)
{ 

goto BgL_zc3anonymousza31551za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_436;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_437; } }  else 
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_570 = BgL_inputzd2portzd2_434; 
BgL_lastzd2matchzd2_571 = BgL_newzd2matchzd2_437; 
BgL_zc3anonymousza31631za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_572:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_573;
{ /* Llib/sparql.scm 111 */
int BgL_res2485z00_2485;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2484;
if(
INPUT_PORTP(BgL_inputzd2portzd2_570))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2484 = BgL_inputzd2portzd2_570; }  else 
{ 
obj_t BgL_auxz00_5339;
BgL_auxz00_5339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3694z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_570); 
FAILURE(BgL_auxz00_5339,BFALSE,BFALSE);} 
BgL_res2485z00_2485 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2484); } 
BgL_currentzd2charzd2_573 = BgL_res2485z00_2485; } 
if(
(
(long)(BgL_currentzd2charzd2_573)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5347;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2487z00_2490;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2489;
if(
INPUT_PORTP(BgL_inputzd2portzd2_570))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2489 = BgL_inputzd2portzd2_570; }  else 
{ 
obj_t BgL_auxz00_5350;
BgL_auxz00_5350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3694z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_570); 
FAILURE(BgL_auxz00_5350,BFALSE,BFALSE);} 
BgL_res2487z00_2490 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2489); } 
BgL_testz00_5347 = BgL_res2487z00_2490; } 
if(BgL_testz00_5347)
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5355;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2488z00_2492;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2491;
if(
INPUT_PORTP(BgL_inputzd2portzd2_570))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2491 = BgL_inputzd2portzd2_570; }  else 
{ 
obj_t BgL_auxz00_5358;
BgL_auxz00_5358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3694z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_570); 
FAILURE(BgL_auxz00_5358,BFALSE,BFALSE);} 
BgL_res2488z00_2492 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2491); } 
BgL_testz00_5355 = BgL_res2488z00_2492; } 
if(BgL_testz00_5355)
{ 

goto BgL_zc3anonymousza31631za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_572;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_571; } }  else 
{ 

goto BgL_zc3anonymousza31631za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_572;} }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_573)==((long)62)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2498;
{ /* Llib/sparql.scm 111 */
long BgL_res2490z00_2500;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2499;
if(
INPUT_PORTP(BgL_inputzd2portzd2_570))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2499 = BgL_inputzd2portzd2_570; }  else 
{ 
obj_t BgL_auxz00_5368;
BgL_auxz00_5368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3694z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_570); 
FAILURE(BgL_auxz00_5368,BFALSE,BFALSE);} 
BgL_res2490z00_2500 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2499); } BgL_res2490z00_2500; } 
BgL_newzd2matchzd2_2498 = ((long)2); 
BgL_matchz00_674 = BgL_newzd2matchzd2_2498; }  else 
{ 

goto BgL_zc3anonymousza31631za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_572;} } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_438)==((long)62)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2232;
{ /* Llib/sparql.scm 111 */
long BgL_res2387z00_2234;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2233;
if(
INPUT_PORTP(BgL_inputzd2portzd2_434))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2233 = BgL_inputzd2portzd2_434; }  else 
{ 
obj_t BgL_auxz00_5378;
BgL_auxz00_5378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3709z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_434); 
FAILURE(BgL_auxz00_5378,BFALSE,BFALSE);} 
BgL_res2387z00_2234 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2233); } BgL_res2387z00_2234; } 
BgL_newzd2matchzd2_2232 = ((long)2); 
BgL_matchz00_674 = BgL_newzd2matchzd2_2232; }  else 
{ 
long BgL_lastzd2matchzd2_5384;obj_t BgL_inputzd2portzd2_5383;
BgL_inputzd2portzd2_5383 = BgL_inputzd2portzd2_434; 
BgL_lastzd2matchzd2_5384 = BgL_newzd2matchzd2_437; 
BgL_lastzd2matchzd2_571 = BgL_lastzd2matchzd2_5384; 
BgL_inputzd2portzd2_570 = BgL_inputzd2portzd2_5383; 
goto BgL_zc3anonymousza31631za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_572;} } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)58)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_453 = BgL_inputzd2portzd2_351; 
BgL_lastzd2matchzd2_454 = BgL_lastzd2matchzd2_352; 
BgL_zc3anonymousza31563za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_455:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_456;
{ /* Llib/sparql.scm 111 */
long BgL_res2397z00_2259;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2258;
if(
INPUT_PORTP(BgL_inputzd2portzd2_453))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2258 = BgL_inputzd2portzd2_453; }  else 
{ 
obj_t BgL_auxz00_5390;
BgL_auxz00_5390 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3707z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_453); 
FAILURE(BgL_auxz00_5390,BFALSE,BFALSE);} 
BgL_res2397z00_2259 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2258); } BgL_res2397z00_2259; } 
BgL_newzd2matchzd2_456 = ((long)3); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_457;
{ /* Llib/sparql.scm 111 */
int BgL_res2398z00_2261;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2260;
if(
INPUT_PORTP(BgL_inputzd2portzd2_453))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2260 = BgL_inputzd2portzd2_453; }  else 
{ 
obj_t BgL_auxz00_5397;
BgL_auxz00_5397 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3707z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_453); 
FAILURE(BgL_auxz00_5397,BFALSE,BFALSE);} 
BgL_res2398z00_2261 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2260); } 
BgL_currentzd2charzd2_457 = BgL_res2398z00_2261; } 
if(
(
(long)(BgL_currentzd2charzd2_457)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5405;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2402z00_2271;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2265;
if(
INPUT_PORTP(BgL_inputzd2portzd2_453))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2265 = BgL_inputzd2portzd2_453; }  else 
{ 
obj_t BgL_auxz00_5408;
BgL_auxz00_5408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3707z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_453); 
FAILURE(BgL_auxz00_5408,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5412;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2400z00_2268;
BgL_res2400z00_2268 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2265); 
BgL_testz00_5412 = BgL_res2400z00_2268; } 
if(BgL_testz00_5412)
{ /* Llib/sparql.scm 111 */
BgL_res2402z00_2271 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2265); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2402z00_2271 = ((bool_t)0); } } } 
BgL_testz00_5405 = BgL_res2402z00_2271; } 
if(BgL_testz00_5405)
{ 

goto BgL_zc3anonymousza31563za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_455;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_456; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5415;
if(
(
(long)(BgL_currentzd2charzd2_457)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_5415 = 
(
(long)(BgL_currentzd2charzd2_457)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_5415 = ((bool_t)0)
; } 
if(BgL_testz00_5415)
{ 
long BgL_lastzd2matchzd2_5422;obj_t BgL_inputzd2portzd2_5421;
BgL_inputzd2portzd2_5421 = BgL_inputzd2portzd2_453; 
BgL_lastzd2matchzd2_5422 = BgL_newzd2matchzd2_456; 
BgL_lastzd2matchzd2_408 = BgL_lastzd2matchzd2_5422; 
BgL_inputzd2portzd2_407 = BgL_inputzd2portzd2_5421; 
goto BgL_zc3anonymousza31536za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_409;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_456; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)46)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2087;
{ /* Llib/sparql.scm 111 */
long BgL_res2331z00_2089;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2088;
if(
INPUT_PORTP(BgL_inputzd2portzd2_351))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2088 = BgL_inputzd2portzd2_351; }  else 
{ 
obj_t BgL_auxz00_5428;
BgL_auxz00_5428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3717z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_351); 
FAILURE(BgL_auxz00_5428,BFALSE,BFALSE);} 
BgL_res2331z00_2089 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2088); } BgL_res2331z00_2089; } 
BgL_newzd2matchzd2_2087 = ((long)5); 
BgL_matchz00_674 = BgL_newzd2matchzd2_2087; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)35)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_245 = BgL_inputzd2portzd2_351; 
BgL_lastzd2matchzd2_246 = BgL_lastzd2matchzd2_352; 
BgL_zc3anonymousza31433za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_247:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_248;
{ /* Llib/sparql.scm 111 */
long BgL_res2228z00_1820;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1819;
if(
INPUT_PORTP(BgL_inputzd2portzd2_245))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1819 = BgL_inputzd2portzd2_245; }  else 
{ 
obj_t BgL_auxz00_5438;
BgL_auxz00_5438 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3731z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_245); 
FAILURE(BgL_auxz00_5438,BFALSE,BFALSE);} 
BgL_res2228z00_1820 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_1819); } BgL_res2228z00_1820; } 
BgL_newzd2matchzd2_248 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_249;
{ /* Llib/sparql.scm 111 */
int BgL_res2229z00_1822;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1821;
if(
INPUT_PORTP(BgL_inputzd2portzd2_245))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1821 = BgL_inputzd2portzd2_245; }  else 
{ 
obj_t BgL_auxz00_5445;
BgL_auxz00_5445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3731z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_245); 
FAILURE(BgL_auxz00_5445,BFALSE,BFALSE);} 
BgL_res2229z00_1822 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1821); } 
BgL_currentzd2charzd2_249 = BgL_res2229z00_1822; } 
if(
(
(long)(BgL_currentzd2charzd2_249)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5453;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2233z00_1832;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1826;
if(
INPUT_PORTP(BgL_inputzd2portzd2_245))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1826 = BgL_inputzd2portzd2_245; }  else 
{ 
obj_t BgL_auxz00_5456;
BgL_auxz00_5456 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3731z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_245); 
FAILURE(BgL_auxz00_5456,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5460;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2231z00_1829;
BgL_res2231z00_1829 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1826); 
BgL_testz00_5460 = BgL_res2231z00_1829; } 
if(BgL_testz00_5460)
{ /* Llib/sparql.scm 111 */
BgL_res2233z00_1832 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1826); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2233z00_1832 = ((bool_t)0); } } } 
BgL_testz00_5453 = BgL_res2233z00_1832; } 
if(BgL_testz00_5453)
{ 

goto BgL_zc3anonymousza31433za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_247;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_248; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_249)==((long)32)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_282 = BgL_inputzd2portzd2_245; 
BgL_lastzd2matchzd2_283 = BgL_newzd2matchzd2_248; 
BgL_zc3anonymousza31455za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_284:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_285;
{ /* Llib/sparql.scm 111 */
int BgL_res2261z00_1904;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1903;
if(
INPUT_PORTP(BgL_inputzd2portzd2_282))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1903 = BgL_inputzd2portzd2_282; }  else 
{ 
obj_t BgL_auxz00_5468;
BgL_auxz00_5468 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3726z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_282); 
FAILURE(BgL_auxz00_5468,BFALSE,BFALSE);} 
BgL_res2261z00_1904 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1903); } 
BgL_currentzd2charzd2_285 = BgL_res2261z00_1904; } 
if(
(
(long)(BgL_currentzd2charzd2_285)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5476;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2265z00_1914;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1908;
if(
INPUT_PORTP(BgL_inputzd2portzd2_282))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1908 = BgL_inputzd2portzd2_282; }  else 
{ 
obj_t BgL_auxz00_5479;
BgL_auxz00_5479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3726z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_282); 
FAILURE(BgL_auxz00_5479,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5483;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2263z00_1911;
BgL_res2263z00_1911 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1908); 
BgL_testz00_5483 = BgL_res2263z00_1911; } 
if(BgL_testz00_5483)
{ /* Llib/sparql.scm 111 */
BgL_res2265z00_1914 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1908); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2265z00_1914 = ((bool_t)0); } } } 
BgL_testz00_5476 = BgL_res2265z00_1914; } 
if(BgL_testz00_5476)
{ 

goto BgL_zc3anonymousza31455za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_284;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_283; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_285)==((long)69)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_498 = BgL_inputzd2portzd2_282; 
BgL_lastzd2matchzd2_499 = BgL_lastzd2matchzd2_283; 
BgL_zc3anonymousza31586za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_500:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_501;
{ /* Llib/sparql.scm 111 */
int BgL_res2429z00_2342;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2341;
if(
INPUT_PORTP(BgL_inputzd2portzd2_498))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2341 = BgL_inputzd2portzd2_498; }  else 
{ 
obj_t BgL_auxz00_5491;
BgL_auxz00_5491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3703z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_498); 
FAILURE(BgL_auxz00_5491,BFALSE,BFALSE);} 
BgL_res2429z00_2342 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2341); } 
BgL_currentzd2charzd2_501 = BgL_res2429z00_2342; } 
if(
(
(long)(BgL_currentzd2charzd2_501)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5499;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2433z00_2352;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2346;
if(
INPUT_PORTP(BgL_inputzd2portzd2_498))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2346 = BgL_inputzd2portzd2_498; }  else 
{ 
obj_t BgL_auxz00_5502;
BgL_auxz00_5502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3703z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_498); 
FAILURE(BgL_auxz00_5502,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5506;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2431z00_2349;
BgL_res2431z00_2349 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2346); 
BgL_testz00_5506 = BgL_res2431z00_2349; } 
if(BgL_testz00_5506)
{ /* Llib/sparql.scm 111 */
BgL_res2433z00_2352 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2346); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2433z00_2352 = ((bool_t)0); } } } 
BgL_testz00_5499 = BgL_res2433z00_2352; } 
if(BgL_testz00_5499)
{ 

goto BgL_zc3anonymousza31586za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_500;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_499; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_501)==((long)109)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_505 = BgL_inputzd2portzd2_498; 
BgL_lastzd2matchzd2_506 = BgL_lastzd2matchzd2_499; 
BgL_zc3anonymousza31590za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_507:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_508;
{ /* Llib/sparql.scm 111 */
int BgL_res2435z00_2357;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2356;
if(
INPUT_PORTP(BgL_inputzd2portzd2_505))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2356 = BgL_inputzd2portzd2_505; }  else 
{ 
obj_t BgL_auxz00_5514;
BgL_auxz00_5514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3702z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_505); 
FAILURE(BgL_auxz00_5514,BFALSE,BFALSE);} 
BgL_res2435z00_2357 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2356); } 
BgL_currentzd2charzd2_508 = BgL_res2435z00_2357; } 
if(
(
(long)(BgL_currentzd2charzd2_508)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5522;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2439z00_2367;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2361;
if(
INPUT_PORTP(BgL_inputzd2portzd2_505))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2361 = BgL_inputzd2portzd2_505; }  else 
{ 
obj_t BgL_auxz00_5525;
BgL_auxz00_5525 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3702z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_505); 
FAILURE(BgL_auxz00_5525,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5529;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2437z00_2364;
BgL_res2437z00_2364 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2361); 
BgL_testz00_5529 = BgL_res2437z00_2364; } 
if(BgL_testz00_5529)
{ /* Llib/sparql.scm 111 */
BgL_res2439z00_2367 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2361); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2439z00_2367 = ((bool_t)0); } } } 
BgL_testz00_5522 = BgL_res2439z00_2367; } 
if(BgL_testz00_5522)
{ 

goto BgL_zc3anonymousza31590za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_507;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_506; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_508)==((long)112)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_512 = BgL_inputzd2portzd2_505; 
BgL_lastzd2matchzd2_513 = BgL_lastzd2matchzd2_506; 
BgL_zc3anonymousza31594za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_514:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_515;
{ /* Llib/sparql.scm 111 */
int BgL_res2441z00_2372;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2371;
if(
INPUT_PORTP(BgL_inputzd2portzd2_512))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2371 = BgL_inputzd2portzd2_512; }  else 
{ 
obj_t BgL_auxz00_5537;
BgL_auxz00_5537 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3701z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_512); 
FAILURE(BgL_auxz00_5537,BFALSE,BFALSE);} 
BgL_res2441z00_2372 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2371); } 
BgL_currentzd2charzd2_515 = BgL_res2441z00_2372; } 
if(
(
(long)(BgL_currentzd2charzd2_515)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5545;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2445z00_2382;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2376;
if(
INPUT_PORTP(BgL_inputzd2portzd2_512))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2376 = BgL_inputzd2portzd2_512; }  else 
{ 
obj_t BgL_auxz00_5548;
BgL_auxz00_5548 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3701z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_512); 
FAILURE(BgL_auxz00_5548,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5552;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2443z00_2379;
BgL_res2443z00_2379 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2376); 
BgL_testz00_5552 = BgL_res2443z00_2379; } 
if(BgL_testz00_5552)
{ /* Llib/sparql.scm 111 */
BgL_res2445z00_2382 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2376); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2445z00_2382 = ((bool_t)0); } } } 
BgL_testz00_5545 = BgL_res2445z00_2382; } 
if(BgL_testz00_5545)
{ 

goto BgL_zc3anonymousza31594za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_514;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_513; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_515)==((long)116)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_289 = BgL_inputzd2portzd2_512; 
BgL_lastzd2matchzd2_290 = BgL_lastzd2matchzd2_513; 
BgL_zc3anonymousza31459za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_291:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_292;
{ /* Llib/sparql.scm 111 */
int BgL_res2267z00_1919;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1918;
if(
INPUT_PORTP(BgL_inputzd2portzd2_289))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1918 = BgL_inputzd2portzd2_289; }  else 
{ 
obj_t BgL_auxz00_5560;
BgL_auxz00_5560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3725z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_289); 
FAILURE(BgL_auxz00_5560,BFALSE,BFALSE);} 
BgL_res2267z00_1919 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1918); } 
BgL_currentzd2charzd2_292 = BgL_res2267z00_1919; } 
if(
(
(long)(BgL_currentzd2charzd2_292)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5568;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2271z00_1929;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1923;
if(
INPUT_PORTP(BgL_inputzd2portzd2_289))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1923 = BgL_inputzd2portzd2_289; }  else 
{ 
obj_t BgL_auxz00_5571;
BgL_auxz00_5571 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3725z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_289); 
FAILURE(BgL_auxz00_5571,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5575;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2269z00_1926;
BgL_res2269z00_1926 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1923); 
BgL_testz00_5575 = BgL_res2269z00_1926; } 
if(BgL_testz00_5575)
{ /* Llib/sparql.scm 111 */
BgL_res2271z00_1929 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1923); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2271z00_1929 = ((bool_t)0); } } } 
BgL_testz00_5568 = BgL_res2271z00_1929; } 
if(BgL_testz00_5568)
{ 

goto BgL_zc3anonymousza31459za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_291;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_290; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_292)==((long)121)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_519 = BgL_inputzd2portzd2_289; 
BgL_lastzd2matchzd2_520 = BgL_lastzd2matchzd2_290; 
BgL_zc3anonymousza31599za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_521:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_522;
{ /* Llib/sparql.scm 111 */
int BgL_res2447z00_2387;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2386;
if(
INPUT_PORTP(BgL_inputzd2portzd2_519))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2386 = BgL_inputzd2portzd2_519; }  else 
{ 
obj_t BgL_auxz00_5583;
BgL_auxz00_5583 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3700z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_519); 
FAILURE(BgL_auxz00_5583,BFALSE,BFALSE);} 
BgL_res2447z00_2387 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2386); } 
BgL_currentzd2charzd2_522 = BgL_res2447z00_2387; } 
if(
(
(long)(BgL_currentzd2charzd2_522)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5591;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2451z00_2397;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2391;
if(
INPUT_PORTP(BgL_inputzd2portzd2_519))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2391 = BgL_inputzd2portzd2_519; }  else 
{ 
obj_t BgL_auxz00_5594;
BgL_auxz00_5594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3700z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_519); 
FAILURE(BgL_auxz00_5594,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5598;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2449z00_2394;
BgL_res2449z00_2394 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2391); 
BgL_testz00_5598 = BgL_res2449z00_2394; } 
if(BgL_testz00_5598)
{ /* Llib/sparql.scm 111 */
BgL_res2451z00_2397 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2391); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2451z00_2397 = ((bool_t)0); } } } 
BgL_testz00_5591 = BgL_res2451z00_2397; } 
if(BgL_testz00_5591)
{ 

goto BgL_zc3anonymousza31599za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_521;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_520; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_522)==((long)32)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_296 = BgL_inputzd2portzd2_519; 
BgL_lastzd2matchzd2_297 = BgL_lastzd2matchzd2_520; 
BgL_zc3anonymousza31463za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_298:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_299;
{ /* Llib/sparql.scm 111 */
int BgL_res2273z00_1934;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1933;
if(
INPUT_PORTP(BgL_inputzd2portzd2_296))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1933 = BgL_inputzd2portzd2_296; }  else 
{ 
obj_t BgL_auxz00_5606;
BgL_auxz00_5606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3724z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_296); 
FAILURE(BgL_auxz00_5606,BFALSE,BFALSE);} 
BgL_res2273z00_1934 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1933); } 
BgL_currentzd2charzd2_299 = BgL_res2273z00_1934; } 
switch( 
(long)(BgL_currentzd2charzd2_299)) { case ((long)0) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5611;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2276z00_1941;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1935;
if(
INPUT_PORTP(BgL_inputzd2portzd2_296))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1935 = BgL_inputzd2portzd2_296; }  else 
{ 
obj_t BgL_auxz00_5614;
BgL_auxz00_5614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3724z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_296); 
FAILURE(BgL_auxz00_5614,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5618;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2274z00_1938;
BgL_res2274z00_1938 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1935); 
BgL_testz00_5618 = BgL_res2274z00_1938; } 
if(BgL_testz00_5618)
{ /* Llib/sparql.scm 111 */
BgL_res2276z00_1941 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1935); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2276z00_1941 = ((bool_t)0); } } } 
BgL_testz00_5611 = BgL_res2276z00_1941; } 
if(BgL_testz00_5611)
{ 

goto BgL_zc3anonymousza31463za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_298;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_297; } } break;case ((long)84) : 

BgL_inputzd2portzd2_311 = BgL_inputzd2portzd2_296; 
BgL_lastzd2matchzd2_312 = BgL_lastzd2matchzd2_297; 
BgL_zc3anonymousza31471za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_313:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_314;
{ /* Llib/sparql.scm 111 */
int BgL_res2284z00_1963;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1962;
if(
INPUT_PORTP(BgL_inputzd2portzd2_311))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1962 = BgL_inputzd2portzd2_311; }  else 
{ 
obj_t BgL_auxz00_5623;
BgL_auxz00_5623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3722z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_311); 
FAILURE(BgL_auxz00_5623,BFALSE,BFALSE);} 
BgL_res2284z00_1963 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1962); } 
BgL_currentzd2charzd2_314 = BgL_res2284z00_1963; } 
if(
(
(long)(BgL_currentzd2charzd2_314)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5631;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2288z00_1973;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1967;
if(
INPUT_PORTP(BgL_inputzd2portzd2_311))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1967 = BgL_inputzd2portzd2_311; }  else 
{ 
obj_t BgL_auxz00_5634;
BgL_auxz00_5634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3722z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_311); 
FAILURE(BgL_auxz00_5634,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5638;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2286z00_1970;
BgL_res2286z00_1970 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1967); 
BgL_testz00_5638 = BgL_res2286z00_1970; } 
if(BgL_testz00_5638)
{ /* Llib/sparql.scm 111 */
BgL_res2288z00_1973 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1967); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2288z00_1973 = ((bool_t)0); } } } 
BgL_testz00_5631 = BgL_res2288z00_1973; } 
if(BgL_testz00_5631)
{ 

goto BgL_zc3anonymousza31471za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_313;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_312; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_314)==((long)85)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_318 = BgL_inputzd2portzd2_311; 
BgL_lastzd2matchzd2_319 = BgL_lastzd2matchzd2_312; 
BgL_zc3anonymousza31476za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_320:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_321;
{ /* Llib/sparql.scm 111 */
int BgL_res2290z00_1978;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1977;
if(
INPUT_PORTP(BgL_inputzd2portzd2_318))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1977 = BgL_inputzd2portzd2_318; }  else 
{ 
obj_t BgL_auxz00_5646;
BgL_auxz00_5646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3721z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_318); 
FAILURE(BgL_auxz00_5646,BFALSE,BFALSE);} 
BgL_res2290z00_1978 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1977); } 
BgL_currentzd2charzd2_321 = BgL_res2290z00_1978; } 
if(
(
(long)(BgL_currentzd2charzd2_321)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5654;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2294z00_1988;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1982;
if(
INPUT_PORTP(BgL_inputzd2portzd2_318))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1982 = BgL_inputzd2portzd2_318; }  else 
{ 
obj_t BgL_auxz00_5657;
BgL_auxz00_5657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3721z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_318); 
FAILURE(BgL_auxz00_5657,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5661;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2292z00_1985;
BgL_res2292z00_1985 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1982); 
BgL_testz00_5661 = BgL_res2292z00_1985; } 
if(BgL_testz00_5661)
{ /* Llib/sparql.scm 111 */
BgL_res2294z00_1988 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1982); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2294z00_1988 = ((bool_t)0); } } } 
BgL_testz00_5654 = BgL_res2294z00_1988; } 
if(BgL_testz00_5654)
{ 

goto BgL_zc3anonymousza31476za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_320;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_319; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_321)==((long)82)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_526 = BgL_inputzd2portzd2_318; 
BgL_lastzd2matchzd2_527 = BgL_lastzd2matchzd2_319; 
BgL_zc3anonymousza31603za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_528:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_529;
{ /* Llib/sparql.scm 111 */
int BgL_res2453z00_2402;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2401;
if(
INPUT_PORTP(BgL_inputzd2portzd2_526))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2401 = BgL_inputzd2portzd2_526; }  else 
{ 
obj_t BgL_auxz00_5669;
BgL_auxz00_5669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3699z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_526); 
FAILURE(BgL_auxz00_5669,BFALSE,BFALSE);} 
BgL_res2453z00_2402 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2401); } 
BgL_currentzd2charzd2_529 = BgL_res2453z00_2402; } 
if(
(
(long)(BgL_currentzd2charzd2_529)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5677;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2457z00_2412;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2406;
if(
INPUT_PORTP(BgL_inputzd2portzd2_526))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2406 = BgL_inputzd2portzd2_526; }  else 
{ 
obj_t BgL_auxz00_5680;
BgL_auxz00_5680 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3699z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_526); 
FAILURE(BgL_auxz00_5680,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5684;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2455z00_2409;
BgL_res2455z00_2409 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2406); 
BgL_testz00_5684 = BgL_res2455z00_2409; } 
if(BgL_testz00_5684)
{ /* Llib/sparql.scm 111 */
BgL_res2457z00_2412 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2406); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2457z00_2412 = ((bool_t)0); } } } 
BgL_testz00_5677 = BgL_res2457z00_2412; } 
if(BgL_testz00_5677)
{ 

goto BgL_zc3anonymousza31603za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_528;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_527; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_529)==((long)84)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_325 = BgL_inputzd2portzd2_526; 
BgL_lastzd2matchzd2_326 = BgL_lastzd2matchzd2_527; 
BgL_zc3anonymousza31480za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_327:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_328;
{ /* Llib/sparql.scm 111 */
int BgL_res2296z00_1993;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1992;
if(
INPUT_PORTP(BgL_inputzd2portzd2_325))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1992 = BgL_inputzd2portzd2_325; }  else 
{ 
obj_t BgL_auxz00_5692;
BgL_auxz00_5692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3720z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_325); 
FAILURE(BgL_auxz00_5692,BFALSE,BFALSE);} 
BgL_res2296z00_1993 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1992); } 
BgL_currentzd2charzd2_328 = BgL_res2296z00_1993; } 
if(
(
(long)(BgL_currentzd2charzd2_328)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5700;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2300z00_2003;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1997;
if(
INPUT_PORTP(BgL_inputzd2portzd2_325))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1997 = BgL_inputzd2portzd2_325; }  else 
{ 
obj_t BgL_auxz00_5703;
BgL_auxz00_5703 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3720z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_325); 
FAILURE(BgL_auxz00_5703,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5707;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2298z00_2000;
BgL_res2298z00_2000 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1997); 
BgL_testz00_5707 = BgL_res2298z00_2000; } 
if(BgL_testz00_5707)
{ /* Llib/sparql.scm 111 */
BgL_res2300z00_2003 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1997); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2300z00_2003 = ((bool_t)0); } } } 
BgL_testz00_5700 = BgL_res2300z00_2003; } 
if(BgL_testz00_5700)
{ 

goto BgL_zc3anonymousza31480za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_327;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_326; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_328)==((long)76)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_533 = BgL_inputzd2portzd2_325; 
BgL_lastzd2matchzd2_534 = BgL_lastzd2matchzd2_326; 
BgL_zc3anonymousza31608za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_535:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_536;
{ /* Llib/sparql.scm 111 */
int BgL_res2459z00_2417;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2416;
if(
INPUT_PORTP(BgL_inputzd2portzd2_533))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2416 = BgL_inputzd2portzd2_533; }  else 
{ 
obj_t BgL_auxz00_5715;
BgL_auxz00_5715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3698z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_533); 
FAILURE(BgL_auxz00_5715,BFALSE,BFALSE);} 
BgL_res2459z00_2417 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2416); } 
BgL_currentzd2charzd2_536 = BgL_res2459z00_2417; } 
if(
(
(long)(BgL_currentzd2charzd2_536)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5723;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2463z00_2427;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2421;
if(
INPUT_PORTP(BgL_inputzd2portzd2_533))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2421 = BgL_inputzd2portzd2_533; }  else 
{ 
obj_t BgL_auxz00_5726;
BgL_auxz00_5726 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3698z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_533); 
FAILURE(BgL_auxz00_5726,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5730;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2461z00_2424;
BgL_res2461z00_2424 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2421); 
BgL_testz00_5730 = BgL_res2461z00_2424; } 
if(BgL_testz00_5730)
{ /* Llib/sparql.scm 111 */
BgL_res2463z00_2427 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2421); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2463z00_2427 = ((bool_t)0); } } } 
BgL_testz00_5723 = BgL_res2463z00_2427; } 
if(BgL_testz00_5723)
{ 

goto BgL_zc3anonymousza31608za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_535;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_534; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_536)==((long)69)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2433;
{ /* Llib/sparql.scm 111 */
long BgL_res2465z00_2435;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2434;
if(
INPUT_PORTP(BgL_inputzd2portzd2_533))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2434 = BgL_inputzd2portzd2_533; }  else 
{ 
obj_t BgL_auxz00_5738;
BgL_auxz00_5738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3698z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_533); 
FAILURE(BgL_auxz00_5738,BFALSE,BFALSE);} 
BgL_res2465z00_2435 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2434); } BgL_res2465z00_2435; } 
BgL_newzd2matchzd2_2433 = ((long)7); 
BgL_matchz00_674 = BgL_newzd2matchzd2_2433; }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_534; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_326; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_527; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_319; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_312; } } } break;case ((long)78) : 

BgL_inputzd2portzd2_304 = BgL_inputzd2portzd2_296; 
BgL_lastzd2matchzd2_305 = BgL_lastzd2matchzd2_297; 
BgL_zc3anonymousza31467za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_306:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_307;
{ /* Llib/sparql.scm 111 */
int BgL_res2277z00_1943;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1942;
if(
INPUT_PORTP(BgL_inputzd2portzd2_304))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1942 = BgL_inputzd2portzd2_304; }  else 
{ 
obj_t BgL_auxz00_5745;
BgL_auxz00_5745 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3723z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_304); 
FAILURE(BgL_auxz00_5745,BFALSE,BFALSE);} 
BgL_res2277z00_1943 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1942); } 
BgL_currentzd2charzd2_307 = BgL_res2277z00_1943; } 
if(
(
(long)(BgL_currentzd2charzd2_307)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5753;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2281z00_1953;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1947;
if(
INPUT_PORTP(BgL_inputzd2portzd2_304))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1947 = BgL_inputzd2portzd2_304; }  else 
{ 
obj_t BgL_auxz00_5756;
BgL_auxz00_5756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3723z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_304); 
FAILURE(BgL_auxz00_5756,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5760;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2279z00_1950;
BgL_res2279z00_1950 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1947); 
BgL_testz00_5760 = BgL_res2279z00_1950; } 
if(BgL_testz00_5760)
{ /* Llib/sparql.scm 111 */
BgL_res2281z00_1953 = 
rgc_fill_buffer(BgL_inputzd2portzd2_1947); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2281z00_1953 = ((bool_t)0); } } } 
BgL_testz00_5753 = BgL_res2281z00_1953; } 
if(BgL_testz00_5753)
{ 

goto BgL_zc3anonymousza31467za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_306;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_305; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_307)==((long)84)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_1959;
{ /* Llib/sparql.scm 111 */
long BgL_res2283z00_1961;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_1960;
if(
INPUT_PORTP(BgL_inputzd2portzd2_304))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_1960 = BgL_inputzd2portzd2_304; }  else 
{ 
obj_t BgL_auxz00_5768;
BgL_auxz00_5768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3723z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_304); 
FAILURE(BgL_auxz00_5768,BFALSE,BFALSE);} 
BgL_res2283z00_1961 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_1960); } BgL_res2283z00_1961; } 
BgL_newzd2matchzd2_1959 = ((long)6); 
BgL_matchz00_674 = BgL_newzd2matchzd2_1959; }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_305; } } } break;
default: 
BgL_matchz00_674 = BgL_lastzd2matchzd2_297; } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_520; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_290; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_513; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_506; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_499; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_283; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_248; } } } } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)34)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_371 = BgL_inputzd2portzd2_351; 
BgL_lastzd2matchzd2_372 = BgL_lastzd2matchzd2_352; 
BgL_zc3anonymousza31515za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_373:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_374;
{ /* Llib/sparql.scm 111 */
long BgL_res2339z00_2114;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2113;
if(
INPUT_PORTP(BgL_inputzd2portzd2_371))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2113 = BgL_inputzd2portzd2_371; }  else 
{ 
obj_t BgL_auxz00_5780;
BgL_auxz00_5780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3716z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_371); 
FAILURE(BgL_auxz00_5780,BFALSE,BFALSE);} 
BgL_res2339z00_2114 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2113); } BgL_res2339z00_2114; } 
BgL_newzd2matchzd2_374 = ((long)9); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_375;
{ /* Llib/sparql.scm 111 */
int BgL_res2340z00_2116;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2115;
if(
INPUT_PORTP(BgL_inputzd2portzd2_371))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2115 = BgL_inputzd2portzd2_371; }  else 
{ 
obj_t BgL_auxz00_5787;
BgL_auxz00_5787 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3716z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_371); 
FAILURE(BgL_auxz00_5787,BFALSE,BFALSE);} 
BgL_res2340z00_2116 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2115); } 
BgL_currentzd2charzd2_375 = BgL_res2340z00_2116; } 
switch( 
(long)(BgL_currentzd2charzd2_375)) { case ((long)0) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5792;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2341z00_2118;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2117;
if(
INPUT_PORTP(BgL_inputzd2portzd2_371))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2117 = BgL_inputzd2portzd2_371; }  else 
{ 
obj_t BgL_auxz00_5795;
BgL_auxz00_5795 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3716z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_371); 
FAILURE(BgL_auxz00_5795,BFALSE,BFALSE);} 
BgL_res2341z00_2118 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2117); } 
BgL_testz00_5792 = BgL_res2341z00_2118; } 
if(BgL_testz00_5792)
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5800;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2342z00_2120;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2119;
if(
INPUT_PORTP(BgL_inputzd2portzd2_371))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2119 = BgL_inputzd2portzd2_371; }  else 
{ 
obj_t BgL_auxz00_5803;
BgL_auxz00_5803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3716z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_371); 
FAILURE(BgL_auxz00_5803,BFALSE,BFALSE);} 
BgL_res2342z00_2120 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2119); } 
BgL_testz00_5800 = BgL_res2342z00_2120; } 
if(BgL_testz00_5800)
{ 

goto BgL_zc3anonymousza31515za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_373;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_374; } }  else 
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_389 = BgL_inputzd2portzd2_371; 
BgL_lastzd2matchzd2_390 = BgL_newzd2matchzd2_374; 
BgL_zc3anonymousza31525za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_391:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_392;
{ /* Llib/sparql.scm 111 */
int BgL_res2349z00_2139;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2138;
if(
INPUT_PORTP(BgL_inputzd2portzd2_389))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2138 = BgL_inputzd2portzd2_389; }  else 
{ 
obj_t BgL_auxz00_5810;
BgL_auxz00_5810 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3714z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_389); 
FAILURE(BgL_auxz00_5810,BFALSE,BFALSE);} 
BgL_res2349z00_2139 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2138); } 
BgL_currentzd2charzd2_392 = BgL_res2349z00_2139; } 
switch( 
(long)(BgL_currentzd2charzd2_392)) { case ((long)0) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5815;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2350z00_2141;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2140;
if(
INPUT_PORTP(BgL_inputzd2portzd2_389))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2140 = BgL_inputzd2portzd2_389; }  else 
{ 
obj_t BgL_auxz00_5818;
BgL_auxz00_5818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3714z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_389); 
FAILURE(BgL_auxz00_5818,BFALSE,BFALSE);} 
BgL_res2350z00_2141 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2140); } 
BgL_testz00_5815 = BgL_res2350z00_2141; } 
if(BgL_testz00_5815)
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5823;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2351z00_2143;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2142;
if(
INPUT_PORTP(BgL_inputzd2portzd2_389))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2142 = BgL_inputzd2portzd2_389; }  else 
{ 
obj_t BgL_auxz00_5826;
BgL_auxz00_5826 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3714z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_389); 
FAILURE(BgL_auxz00_5826,BFALSE,BFALSE);} 
BgL_res2351z00_2143 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2142); } 
BgL_testz00_5823 = BgL_res2351z00_2143; } 
if(BgL_testz00_5823)
{ 

goto BgL_zc3anonymousza31525za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_391;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_390; } }  else 
{ 

goto BgL_zc3anonymousza31525za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_391;} } break;case ((long)92) : 

BgL_inputzd2portzd2_562 = BgL_inputzd2portzd2_389; 
BgL_lastzd2matchzd2_563 = BgL_lastzd2matchzd2_390; 
BgL_zc3anonymousza31623za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_564:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_565;
{ /* Llib/sparql.scm 111 */
int BgL_res2480z00_2473;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2472;
if(
INPUT_PORTP(BgL_inputzd2portzd2_562))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2472 = BgL_inputzd2portzd2_562; }  else 
{ 
obj_t BgL_auxz00_5833;
BgL_auxz00_5833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3695z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_562); 
FAILURE(BgL_auxz00_5833,BFALSE,BFALSE);} 
BgL_res2480z00_2473 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2472); } 
BgL_currentzd2charzd2_565 = BgL_res2480z00_2473; } 
if(
(
(long)(BgL_currentzd2charzd2_565)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5841;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2482z00_2478;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2477;
if(
INPUT_PORTP(BgL_inputzd2portzd2_562))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2477 = BgL_inputzd2portzd2_562; }  else 
{ 
obj_t BgL_auxz00_5844;
BgL_auxz00_5844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3695z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_562); 
FAILURE(BgL_auxz00_5844,BFALSE,BFALSE);} 
BgL_res2482z00_2478 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2477); } 
BgL_testz00_5841 = BgL_res2482z00_2478; } 
if(BgL_testz00_5841)
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5849;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2483z00_2480;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2479;
if(
INPUT_PORTP(BgL_inputzd2portzd2_562))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2479 = BgL_inputzd2portzd2_562; }  else 
{ 
obj_t BgL_auxz00_5852;
BgL_auxz00_5852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3695z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_562); 
FAILURE(BgL_auxz00_5852,BFALSE,BFALSE);} 
BgL_res2483z00_2480 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2479); } 
BgL_testz00_5849 = BgL_res2483z00_2480; } 
if(BgL_testz00_5849)
{ 

goto BgL_zc3anonymousza31623za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_564;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_563; } }  else 
{ 
long BgL_lastzd2matchzd2_5858;obj_t BgL_inputzd2portzd2_5857;
BgL_inputzd2portzd2_5857 = BgL_inputzd2portzd2_562; 
BgL_lastzd2matchzd2_5858 = BgL_lastzd2matchzd2_563; 
BgL_lastzd2matchzd2_390 = BgL_lastzd2matchzd2_5858; 
BgL_inputzd2portzd2_389 = BgL_inputzd2portzd2_5857; 
goto BgL_zc3anonymousza31525za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_391;} }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_565)==((long)10)))
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_563; }  else 
{ 
long BgL_lastzd2matchzd2_5863;obj_t BgL_inputzd2portzd2_5862;
BgL_inputzd2portzd2_5862 = BgL_inputzd2portzd2_562; 
BgL_lastzd2matchzd2_5863 = BgL_lastzd2matchzd2_563; 
BgL_lastzd2matchzd2_390 = BgL_lastzd2matchzd2_5863; 
BgL_inputzd2portzd2_389 = BgL_inputzd2portzd2_5862; 
goto BgL_zc3anonymousza31525za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_391;} } } break;case ((long)34) : 

BgL_inputzd2portzd2_416 = BgL_inputzd2portzd2_389; 
BgL_lastzd2matchzd2_417 = BgL_lastzd2matchzd2_390; 
BgL_zc3anonymousza31541za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_418:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_419;
{ /* Llib/sparql.scm 111 */
long BgL_res2368z00_2186;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2185;
if(
INPUT_PORTP(BgL_inputzd2portzd2_416))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2185 = BgL_inputzd2portzd2_416; }  else 
{ 
obj_t BgL_auxz00_5866;
BgL_auxz00_5866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3711z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_416); 
FAILURE(BgL_auxz00_5866,BFALSE,BFALSE);} 
BgL_res2368z00_2186 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2185); } BgL_res2368z00_2186; } 
BgL_newzd2matchzd2_419 = ((long)4); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_420;
{ /* Llib/sparql.scm 111 */
int BgL_res2369z00_2188;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2187;
if(
INPUT_PORTP(BgL_inputzd2portzd2_416))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2187 = BgL_inputzd2portzd2_416; }  else 
{ 
obj_t BgL_auxz00_5873;
BgL_auxz00_5873 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3711z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_416); 
FAILURE(BgL_auxz00_5873,BFALSE,BFALSE);} 
BgL_res2369z00_2188 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2187); } 
BgL_currentzd2charzd2_420 = BgL_res2369z00_2188; } 
switch( 
(long)(BgL_currentzd2charzd2_420)) { case ((long)0) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5878;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2372z00_2195;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2189;
if(
INPUT_PORTP(BgL_inputzd2portzd2_416))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2189 = BgL_inputzd2portzd2_416; }  else 
{ 
obj_t BgL_auxz00_5881;
BgL_auxz00_5881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3711z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_416); 
FAILURE(BgL_auxz00_5881,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5885;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2370z00_2192;
BgL_res2370z00_2192 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2189); 
BgL_testz00_5885 = BgL_res2370z00_2192; } 
if(BgL_testz00_5885)
{ /* Llib/sparql.scm 111 */
BgL_res2372z00_2195 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2189); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2372z00_2195 = ((bool_t)0); } } } 
BgL_testz00_5878 = BgL_res2372z00_2195; } 
if(BgL_testz00_5878)
{ 

goto BgL_zc3anonymousza31541za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_418;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_419; } } break;case ((long)94) : 

BgL_inputzd2portzd2_548 = BgL_inputzd2portzd2_416; 
BgL_lastzd2matchzd2_549 = BgL_newzd2matchzd2_419; 
BgL_zc3anonymousza31614za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_550:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_551;
{ /* Llib/sparql.scm 111 */
int BgL_res2468z00_2443;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2442;
if(
INPUT_PORTP(BgL_inputzd2portzd2_548))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2442 = BgL_inputzd2portzd2_548; }  else 
{ 
obj_t BgL_auxz00_5890;
BgL_auxz00_5890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3697z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_548); 
FAILURE(BgL_auxz00_5890,BFALSE,BFALSE);} 
BgL_res2468z00_2443 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2442); } 
BgL_currentzd2charzd2_551 = BgL_res2468z00_2443; } 
if(
(
(long)(BgL_currentzd2charzd2_551)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5898;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2472z00_2453;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2447;
if(
INPUT_PORTP(BgL_inputzd2portzd2_548))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2447 = BgL_inputzd2portzd2_548; }  else 
{ 
obj_t BgL_auxz00_5901;
BgL_auxz00_5901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3697z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_548); 
FAILURE(BgL_auxz00_5901,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5905;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2470z00_2450;
BgL_res2470z00_2450 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2447); 
BgL_testz00_5905 = BgL_res2470z00_2450; } 
if(BgL_testz00_5905)
{ /* Llib/sparql.scm 111 */
BgL_res2472z00_2453 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2447); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2472z00_2453 = ((bool_t)0); } } } 
BgL_testz00_5898 = BgL_res2472z00_2453; } 
if(BgL_testz00_5898)
{ 

goto BgL_zc3anonymousza31614za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_550;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_549; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_551)==((long)94)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_555 = BgL_inputzd2portzd2_548; 
BgL_lastzd2matchzd2_556 = BgL_lastzd2matchzd2_549; 
BgL_zc3anonymousza31618za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_557:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_558;
{ /* Llib/sparql.scm 111 */
int BgL_res2474z00_2458;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2457;
if(
INPUT_PORTP(BgL_inputzd2portzd2_555))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2457 = BgL_inputzd2portzd2_555; }  else 
{ 
obj_t BgL_auxz00_5913;
BgL_auxz00_5913 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3696z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_555); 
FAILURE(BgL_auxz00_5913,BFALSE,BFALSE);} 
BgL_res2474z00_2458 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2457); } 
BgL_currentzd2charzd2_558 = BgL_res2474z00_2458; } 
if(
(
(long)(BgL_currentzd2charzd2_558)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5921;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2478z00_2468;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2462;
if(
INPUT_PORTP(BgL_inputzd2portzd2_555))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2462 = BgL_inputzd2portzd2_555; }  else 
{ 
obj_t BgL_auxz00_5924;
BgL_auxz00_5924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3696z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_555); 
FAILURE(BgL_auxz00_5924,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5928;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2476z00_2465;
BgL_res2476z00_2465 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2462); 
BgL_testz00_5928 = BgL_res2476z00_2465; } 
if(BgL_testz00_5928)
{ /* Llib/sparql.scm 111 */
BgL_res2478z00_2468 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2462); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2478z00_2468 = ((bool_t)0); } } } 
BgL_testz00_5921 = BgL_res2478z00_2468; } 
if(BgL_testz00_5921)
{ 

goto BgL_zc3anonymousza31618za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_557;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_556; } }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_558)==((long)60)))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_381 = BgL_inputzd2portzd2_555; 
BgL_lastzd2matchzd2_382 = BgL_lastzd2matchzd2_556; 
BgL_zc3anonymousza31520za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_383:
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_384;
{ /* Llib/sparql.scm 111 */
int BgL_res2343z00_2122;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2121;
if(
INPUT_PORTP(BgL_inputzd2portzd2_381))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2121 = BgL_inputzd2portzd2_381; }  else 
{ 
obj_t BgL_auxz00_5936;
BgL_auxz00_5936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3715z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_381); 
FAILURE(BgL_auxz00_5936,BFALSE,BFALSE);} 
BgL_res2343z00_2122 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2121); } 
BgL_currentzd2charzd2_384 = BgL_res2343z00_2122; } 
if(
(
(long)(BgL_currentzd2charzd2_384)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5944;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2345z00_2127;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2126;
if(
INPUT_PORTP(BgL_inputzd2portzd2_381))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2126 = BgL_inputzd2portzd2_381; }  else 
{ 
obj_t BgL_auxz00_5947;
BgL_auxz00_5947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3715z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_381); 
FAILURE(BgL_auxz00_5947,BFALSE,BFALSE);} 
BgL_res2345z00_2127 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2126); } 
BgL_testz00_5944 = BgL_res2345z00_2127; } 
if(BgL_testz00_5944)
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5952;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2346z00_2129;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2128;
if(
INPUT_PORTP(BgL_inputzd2portzd2_381))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2128 = BgL_inputzd2portzd2_381; }  else 
{ 
obj_t BgL_auxz00_5955;
BgL_auxz00_5955 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3715z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_381); 
FAILURE(BgL_auxz00_5955,BFALSE,BFALSE);} 
BgL_res2346z00_2129 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2128); } 
BgL_testz00_5952 = BgL_res2346z00_2129; } 
if(BgL_testz00_5952)
{ 

goto BgL_zc3anonymousza31520za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_383;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_382; } }  else 
{ 

goto BgL_zc3anonymousza31520za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_383;} }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_384)==((long)62)))
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2135;
{ /* Llib/sparql.scm 111 */
long BgL_res2348z00_2137;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2136;
if(
INPUT_PORTP(BgL_inputzd2portzd2_381))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2136 = BgL_inputzd2portzd2_381; }  else 
{ 
obj_t BgL_auxz00_5965;
BgL_auxz00_5965 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3715z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_381); 
FAILURE(BgL_auxz00_5965,BFALSE,BFALSE);} 
BgL_res2348z00_2137 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2136); } BgL_res2348z00_2137; } 
BgL_newzd2matchzd2_2135 = ((long)4); 
BgL_matchz00_674 = BgL_newzd2matchzd2_2135; }  else 
{ 

goto BgL_zc3anonymousza31520za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_383;} } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_556; } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_lastzd2matchzd2_549; } } } break;case ((long)64) : 

BgL_inputzd2portzd2_425 = BgL_inputzd2portzd2_416; 
BgL_lastzd2matchzd2_426 = BgL_newzd2matchzd2_419; 
BgL_zc3anonymousza31546za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_427:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_428;
{ /* Llib/sparql.scm 111 */
long BgL_res2373z00_2197;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2196;
if(
INPUT_PORTP(BgL_inputzd2portzd2_425))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2196 = BgL_inputzd2portzd2_425; }  else 
{ 
obj_t BgL_auxz00_5972;
BgL_auxz00_5972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3710z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_425); 
FAILURE(BgL_auxz00_5972,BFALSE,BFALSE);} 
BgL_res2373z00_2197 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2196); } BgL_res2373z00_2197; } 
BgL_newzd2matchzd2_428 = ((long)4); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_429;
{ /* Llib/sparql.scm 111 */
int BgL_res2374z00_2199;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2198;
if(
INPUT_PORTP(BgL_inputzd2portzd2_425))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2198 = BgL_inputzd2portzd2_425; }  else 
{ 
obj_t BgL_auxz00_5979;
BgL_auxz00_5979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3710z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_425); 
FAILURE(BgL_auxz00_5979,BFALSE,BFALSE);} 
BgL_res2374z00_2199 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2198); } 
BgL_currentzd2charzd2_429 = BgL_res2374z00_2199; } 
if(
(
(long)(BgL_currentzd2charzd2_429)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5987;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2378z00_2209;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2203;
if(
INPUT_PORTP(BgL_inputzd2portzd2_425))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2203 = BgL_inputzd2portzd2_425; }  else 
{ 
obj_t BgL_auxz00_5990;
BgL_auxz00_5990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3710z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_425); 
FAILURE(BgL_auxz00_5990,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5994;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2376z00_2206;
BgL_res2376z00_2206 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2203); 
BgL_testz00_5994 = BgL_res2376z00_2206; } 
if(BgL_testz00_5994)
{ /* Llib/sparql.scm 111 */
BgL_res2378z00_2209 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2203); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2378z00_2209 = ((bool_t)0); } } } 
BgL_testz00_5987 = BgL_res2378z00_2209; } 
if(BgL_testz00_5987)
{ 

goto BgL_zc3anonymousza31546za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_427;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_428; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_5997;
if(
(
(long)(BgL_currentzd2charzd2_429)>=((long)97)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_5997 = 
(
(long)(BgL_currentzd2charzd2_429)<((long)123))
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_5997 = ((bool_t)0)
; } 
if(BgL_testz00_5997)
{ 
long BgL_lastzd2matchzd2_6003;
BgL_lastzd2matchzd2_6003 = BgL_newzd2matchzd2_428; 
BgL_lastzd2matchzd2_426 = BgL_lastzd2matchzd2_6003; 
goto BgL_zc3anonymousza31546za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_427;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_428; } } } } break;
default: 
BgL_matchz00_674 = BgL_newzd2matchzd2_419; } } } break;
default: 
{ 

goto BgL_zc3anonymousza31525za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_391;} } } } } break;case ((long)92) : 

{ 
long BgL_lastzd2matchzd2_6009;obj_t BgL_inputzd2portzd2_6008;
BgL_inputzd2portzd2_6008 = BgL_inputzd2portzd2_371; 
BgL_lastzd2matchzd2_6009 = BgL_newzd2matchzd2_374; 
BgL_lastzd2matchzd2_563 = BgL_lastzd2matchzd2_6009; 
BgL_inputzd2portzd2_562 = BgL_inputzd2portzd2_6008; 
goto BgL_zc3anonymousza31623za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_564;} break;case ((long)34) : 

{ 
long BgL_lastzd2matchzd2_6011;obj_t BgL_inputzd2portzd2_6010;
BgL_inputzd2portzd2_6010 = BgL_inputzd2portzd2_371; 
BgL_lastzd2matchzd2_6011 = BgL_newzd2matchzd2_374; 
BgL_lastzd2matchzd2_417 = BgL_lastzd2matchzd2_6011; 
BgL_inputzd2portzd2_416 = BgL_inputzd2portzd2_6010; 
goto BgL_zc3anonymousza31541za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_418;} break;
default: 
{ 
long BgL_lastzd2matchzd2_6013;obj_t BgL_inputzd2portzd2_6012;
BgL_inputzd2portzd2_6012 = BgL_inputzd2portzd2_371; 
BgL_lastzd2matchzd2_6013 = BgL_newzd2matchzd2_374; 
BgL_lastzd2matchzd2_390 = BgL_lastzd2matchzd2_6013; 
BgL_inputzd2portzd2_389 = BgL_inputzd2portzd2_6012; 
goto BgL_zc3anonymousza31525za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_391;} } } } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6016;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6017;
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)10)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_6017 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_6017 = 
(
(long)(BgL_currentzd2charzd2_354)==((long)9))
; } 
if(BgL_testz00_6017)
{ /* Llib/sparql.scm 111 */
BgL_testz00_6016 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_354)==((long)13)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_6016 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_6016 = 
(
(long)(BgL_currentzd2charzd2_354)==((long)32))
; } } } 
if(BgL_testz00_6016)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_332 = BgL_inputzd2portzd2_351; 
BgL_lastzd2matchzd2_333 = BgL_lastzd2matchzd2_352; 
BgL_zc3anonymousza31484za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_334:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_335;
{ /* Llib/sparql.scm 111 */
long BgL_res2302z00_2008;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2007;
if(
INPUT_PORTP(BgL_inputzd2portzd2_332))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2007 = BgL_inputzd2portzd2_332; }  else 
{ 
obj_t BgL_auxz00_6030;
BgL_auxz00_6030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3719z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_332); 
FAILURE(BgL_auxz00_6030,BFALSE,BFALSE);} 
BgL_res2302z00_2008 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2007); } BgL_res2302z00_2008; } 
BgL_newzd2matchzd2_335 = ((long)0); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_336;
{ /* Llib/sparql.scm 111 */
int BgL_res2303z00_2010;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2009;
if(
INPUT_PORTP(BgL_inputzd2portzd2_332))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2009 = BgL_inputzd2portzd2_332; }  else 
{ 
obj_t BgL_auxz00_6037;
BgL_auxz00_6037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3719z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_332); 
FAILURE(BgL_auxz00_6037,BFALSE,BFALSE);} 
BgL_res2303z00_2010 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2009); } 
BgL_currentzd2charzd2_336 = BgL_res2303z00_2010; } 
if(
(
(long)(BgL_currentzd2charzd2_336)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6045;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2307z00_2020;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2014;
if(
INPUT_PORTP(BgL_inputzd2portzd2_332))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2014 = BgL_inputzd2portzd2_332; }  else 
{ 
obj_t BgL_auxz00_6048;
BgL_auxz00_6048 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3719z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_332); 
FAILURE(BgL_auxz00_6048,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6052;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2305z00_2017;
BgL_res2305z00_2017 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2014); 
BgL_testz00_6052 = BgL_res2305z00_2017; } 
if(BgL_testz00_6052)
{ /* Llib/sparql.scm 111 */
BgL_res2307z00_2020 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2014); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2307z00_2020 = ((bool_t)0); } } } 
BgL_testz00_6045 = BgL_res2307z00_2020; } 
if(BgL_testz00_6045)
{ 

goto BgL_zc3anonymousza31484za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_334;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_335; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6055;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6056;
if(
(
(long)(BgL_currentzd2charzd2_336)==((long)10)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_6056 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_6056 = 
(
(long)(BgL_currentzd2charzd2_336)==((long)9))
; } 
if(BgL_testz00_6056)
{ /* Llib/sparql.scm 111 */
BgL_testz00_6055 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_336)==((long)13)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_6055 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_6055 = 
(
(long)(BgL_currentzd2charzd2_336)==((long)32))
; } } } 
if(BgL_testz00_6055)
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_578 = BgL_inputzd2portzd2_332; 
BgL_lastzd2matchzd2_579 = BgL_newzd2matchzd2_335; 
BgL_zc3anonymousza31636za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_580:
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_581;
{ /* Llib/sparql.scm 111 */
long BgL_res2491z00_2502;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2501;
if(
INPUT_PORTP(BgL_inputzd2portzd2_578))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2501 = BgL_inputzd2portzd2_578; }  else 
{ 
obj_t BgL_auxz00_6069;
BgL_auxz00_6069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3693z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_578); 
FAILURE(BgL_auxz00_6069,BFALSE,BFALSE);} 
BgL_res2491z00_2502 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2501); } BgL_res2491z00_2502; } 
BgL_newzd2matchzd2_581 = ((long)0); 
{ /* Llib/sparql.scm 111 */
int BgL_currentzd2charzd2_582;
{ /* Llib/sparql.scm 111 */
int BgL_res2492z00_2504;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2503;
if(
INPUT_PORTP(BgL_inputzd2portzd2_578))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2503 = BgL_inputzd2portzd2_578; }  else 
{ 
obj_t BgL_auxz00_6076;
BgL_auxz00_6076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3693z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_578); 
FAILURE(BgL_auxz00_6076,BFALSE,BFALSE);} 
BgL_res2492z00_2504 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2503); } 
BgL_currentzd2charzd2_582 = BgL_res2492z00_2504; } 
if(
(
(long)(BgL_currentzd2charzd2_582)==((long)0)))
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6084;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2496z00_2514;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2508;
if(
INPUT_PORTP(BgL_inputzd2portzd2_578))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2508 = BgL_inputzd2portzd2_578; }  else 
{ 
obj_t BgL_auxz00_6087;
BgL_auxz00_6087 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3693z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_578); 
FAILURE(BgL_auxz00_6087,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6091;
{ /* Llib/sparql.scm 111 */
bool_t BgL_res2494z00_2511;
BgL_res2494z00_2511 = 
RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2508); 
BgL_testz00_6091 = BgL_res2494z00_2511; } 
if(BgL_testz00_6091)
{ /* Llib/sparql.scm 111 */
BgL_res2496z00_2514 = 
rgc_fill_buffer(BgL_inputzd2portzd2_2508); }  else 
{ /* Llib/sparql.scm 111 */
BgL_res2496z00_2514 = ((bool_t)0); } } } 
BgL_testz00_6084 = BgL_res2496z00_2514; } 
if(BgL_testz00_6084)
{ 

goto BgL_zc3anonymousza31636za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_580;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_581; } }  else 
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6094;
{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6095;
if(
(
(long)(BgL_currentzd2charzd2_582)==((long)10)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_6095 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_6095 = 
(
(long)(BgL_currentzd2charzd2_582)==((long)9))
; } 
if(BgL_testz00_6095)
{ /* Llib/sparql.scm 111 */
BgL_testz00_6094 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
if(
(
(long)(BgL_currentzd2charzd2_582)==((long)13)))
{ /* Llib/sparql.scm 111 */
BgL_testz00_6094 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 111 */
BgL_testz00_6094 = 
(
(long)(BgL_currentzd2charzd2_582)==((long)32))
; } } } 
if(BgL_testz00_6094)
{ 
long BgL_lastzd2matchzd2_6106;
BgL_lastzd2matchzd2_6106 = BgL_newzd2matchzd2_581; 
BgL_lastzd2matchzd2_579 = BgL_lastzd2matchzd2_6106; 
goto BgL_zc3anonymousza31636za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_580;}  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_581; } } } } }  else 
{ /* Llib/sparql.scm 111 */
BgL_matchz00_674 = BgL_newzd2matchzd2_335; } } } } }  else 
{ /* Llib/sparql.scm 111 */
long BgL_newzd2matchzd2_2110;
{ /* Llib/sparql.scm 111 */
long BgL_res2338z00_2112;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2111;
if(
INPUT_PORTP(BgL_inputzd2portzd2_351))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2111 = BgL_inputzd2portzd2_351; }  else 
{ 
obj_t BgL_auxz00_6109;
BgL_auxz00_6109 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3717z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_351); 
FAILURE(BgL_auxz00_6109,BFALSE,BFALSE);} 
BgL_res2338z00_2112 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_2111); } BgL_res2338z00_2112; } 
BgL_newzd2matchzd2_2110 = ((long)9); 
BgL_matchz00_674 = BgL_newzd2matchzd2_2110; } } } } } } } } } } } 
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2577;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2577 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6116;
BgL_auxz00_6116 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6116,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_2577); } 
switch( BgL_matchz00_674) { case ((long)9) : 

{ /* Llib/sparql.scm 111 */
bool_t BgL_testz00_6121;
{ /* Llib/sparql.scm 111 */
long BgL_arg1749z00_664;
{ /* Llib/sparql.scm 111 */
long BgL_res2516z00_2569;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2568;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2568 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6124;
BgL_auxz00_6124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3691z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6124,BFALSE,BFALSE);} 
BgL_res2516z00_2569 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_2568); } 
BgL_arg1749z00_664 = BgL_res2516z00_2569; } 
BgL_testz00_6121 = 
(BgL_arg1749z00_664==((long)0)); } 
if(BgL_testz00_6121)
{ /* Llib/sparql.scm 111 */
BgL_aux2655z00_3329 = BCNST(256); }  else 
{ /* Llib/sparql.scm 111 */
unsigned char BgL_res2518z00_2574;
{ /* Llib/sparql.scm 111 */
obj_t BgL_inputzd2portzd2_2573;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 111 */
BgL_inputzd2portzd2_2573 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6132;
BgL_auxz00_6132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2988)), BGl_string3691z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6132,BFALSE,BFALSE);} 
BgL_res2518z00_2574 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_2573); } 
BgL_aux2655z00_3329 = 
BCHAR(BgL_res2518z00_2574); } } break;case ((long)8) : 

{ /* Llib/sparql.scm 124 */
obj_t BgL_arg1758z00_678;
{ /* Llib/sparql.scm 124 */
obj_t BgL_res2522z00_2585;
{ /* Llib/sparql.scm 124 */
long BgL_arg1664z00_2578;
{ /* Llib/sparql.scm 124 */
long BgL_res2520z00_2580;
{ /* Llib/sparql.scm 124 */
obj_t BgL_inputzd2portzd2_2579;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 124 */
BgL_inputzd2portzd2_2579 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6140;
BgL_auxz00_6140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3592)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6140,BFALSE,BFALSE);} 
BgL_res2520z00_2580 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_2579); } 
BgL_arg1664z00_2578 = BgL_res2520z00_2580; } 
{ /* Llib/sparql.scm 124 */
obj_t BgL_res2521z00_2584;
{ /* Llib/sparql.scm 124 */
obj_t BgL_inputzd2portzd2_2581;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 124 */
BgL_inputzd2portzd2_2581 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6147;
BgL_auxz00_6147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3592)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6147,BFALSE,BFALSE);} 
BgL_res2521z00_2584 = 
rgc_buffer_substring(BgL_inputzd2portzd2_2581, ((long)0), BgL_arg1664z00_2578); } 
BgL_res2522z00_2585 = BgL_res2521z00_2584; } } 
BgL_arg1758z00_678 = BgL_res2522z00_2585; } 
BgL_aux2655z00_3329 = 
MAKE_PAIR(BGl_symbol3616z00zzsparqlz00, BgL_arg1758z00_678); } break;case ((long)7) : 

BgL_aux2655z00_3329 = BGl_symbol3613z00zzsparqlz00; break;case ((long)6) : 

BgL_aux2655z00_3329 = BGl_symbol3613z00zzsparqlz00; break;case ((long)5) : 

BgL_aux2655z00_3329 = BGl_symbol3628z00zzsparqlz00; break;case ((long)4) : 

{ /* Llib/sparql.scm 120 */
obj_t BgL_arg1761z00_679;
{ /* Llib/sparql.scm 120 */
obj_t BgL_res2525z00_2593;
{ /* Llib/sparql.scm 120 */
long BgL_arg1664z00_2586;
{ /* Llib/sparql.scm 120 */
long BgL_res2523z00_2588;
{ /* Llib/sparql.scm 120 */
obj_t BgL_inputzd2portzd2_2587;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 120 */
BgL_inputzd2portzd2_2587 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6155;
BgL_auxz00_6155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3456)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6155,BFALSE,BFALSE);} 
BgL_res2523z00_2588 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_2587); } 
BgL_arg1664z00_2586 = BgL_res2523z00_2588; } 
{ /* Llib/sparql.scm 120 */
obj_t BgL_res2524z00_2592;
{ /* Llib/sparql.scm 120 */
obj_t BgL_inputzd2portzd2_2589;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 120 */
BgL_inputzd2portzd2_2589 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6162;
BgL_auxz00_6162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3456)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6162,BFALSE,BFALSE);} 
BgL_res2524z00_2592 = 
rgc_buffer_substring(BgL_inputzd2portzd2_2589, ((long)0), BgL_arg1664z00_2586); } 
BgL_res2525z00_2593 = BgL_res2524z00_2592; } } 
BgL_arg1761z00_679 = BgL_res2525z00_2593; } 
BgL_aux2655z00_3329 = 
MAKE_PAIR(BGl_symbol3639z00zzsparqlz00, BgL_arg1761z00_679); } break;case ((long)3) : 

{ /* Llib/sparql.scm 115 */
obj_t BgL_arg1767z00_680;
{ /* Llib/sparql.scm 115 */
obj_t BgL_res2528z00_2601;
{ /* Llib/sparql.scm 115 */
long BgL_arg1664z00_2594;
{ /* Llib/sparql.scm 115 */
long BgL_res2526z00_2596;
{ /* Llib/sparql.scm 115 */
obj_t BgL_inputzd2portzd2_2595;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 115 */
BgL_inputzd2portzd2_2595 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6170;
BgL_auxz00_6170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3234)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6170,BFALSE,BFALSE);} 
BgL_res2526z00_2596 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_2595); } 
BgL_arg1664z00_2594 = BgL_res2526z00_2596; } 
{ /* Llib/sparql.scm 115 */
obj_t BgL_res2527z00_2600;
{ /* Llib/sparql.scm 115 */
obj_t BgL_inputzd2portzd2_2597;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 115 */
BgL_inputzd2portzd2_2597 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6177;
BgL_auxz00_6177 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3234)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6177,BFALSE,BFALSE);} 
BgL_res2527z00_2600 = 
rgc_buffer_substring(BgL_inputzd2portzd2_2597, ((long)0), BgL_arg1664z00_2594); } 
BgL_res2528z00_2601 = BgL_res2527z00_2600; } } 
BgL_arg1767z00_680 = BgL_res2528z00_2601; } 
BgL_aux2655z00_3329 = 
MAKE_PAIR(BGl_symbol3616z00zzsparqlz00, BgL_arg1767z00_680); } break;case ((long)2) : 

{ /* Llib/sparql.scm 114 */
obj_t BgL_arg1768z00_681;
{ /* Llib/sparql.scm 114 */
obj_t BgL_res2531z00_2609;
{ /* Llib/sparql.scm 114 */
long BgL_arg1664z00_2602;
{ /* Llib/sparql.scm 114 */
long BgL_res2529z00_2604;
{ /* Llib/sparql.scm 114 */
obj_t BgL_inputzd2portzd2_2603;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 114 */
BgL_inputzd2portzd2_2603 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6185;
BgL_auxz00_6185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3173)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6185,BFALSE,BFALSE);} 
BgL_res2529z00_2604 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_2603); } 
BgL_arg1664z00_2602 = BgL_res2529z00_2604; } 
{ /* Llib/sparql.scm 114 */
obj_t BgL_res2530z00_2608;
{ /* Llib/sparql.scm 114 */
obj_t BgL_inputzd2portzd2_2605;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 114 */
BgL_inputzd2portzd2_2605 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6192;
BgL_auxz00_6192 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3173)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6192,BFALSE,BFALSE);} 
BgL_res2530z00_2608 = 
rgc_buffer_substring(BgL_inputzd2portzd2_2605, ((long)0), BgL_arg1664z00_2602); } 
BgL_res2531z00_2609 = BgL_res2530z00_2608; } } 
BgL_arg1768z00_681 = BgL_res2531z00_2609; } 
BgL_aux2655z00_3329 = 
MAKE_PAIR(BGl_symbol3616z00zzsparqlz00, BgL_arg1768z00_681); } break;case ((long)1) : 

{ /* Llib/sparql.scm 113 */
obj_t BgL_arg1769z00_682;
{ /* Llib/sparql.scm 113 */
obj_t BgL_res2534z00_2617;
{ /* Llib/sparql.scm 113 */
long BgL_arg1664z00_2610;
{ /* Llib/sparql.scm 113 */
long BgL_res2532z00_2612;
{ /* Llib/sparql.scm 113 */
obj_t BgL_inputzd2portzd2_2611;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 113 */
BgL_inputzd2portzd2_2611 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6200;
BgL_auxz00_6200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3114)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6200,BFALSE,BFALSE);} 
BgL_res2532z00_2612 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_2611); } 
BgL_arg1664z00_2610 = BgL_res2532z00_2612; } 
{ /* Llib/sparql.scm 113 */
obj_t BgL_res2533z00_2616;
{ /* Llib/sparql.scm 113 */
obj_t BgL_inputzd2portzd2_2613;
if(
INPUT_PORTP(BgL_inputzd2portzd2_160))
{ /* Llib/sparql.scm 113 */
BgL_inputzd2portzd2_2613 = BgL_inputzd2portzd2_160; }  else 
{ 
obj_t BgL_auxz00_6207;
BgL_auxz00_6207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3114)), BGl_string3687z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inputzd2portzd2_160); 
FAILURE(BgL_auxz00_6207,BFALSE,BFALSE);} 
BgL_res2533z00_2616 = 
rgc_buffer_substring(BgL_inputzd2portzd2_2613, ((long)0), BgL_arg1664z00_2610); } 
BgL_res2534z00_2617 = BgL_res2533z00_2616; } } 
BgL_arg1769z00_682 = BgL_res2534z00_2617; } 
BgL_aux2655z00_3329 = 
MAKE_PAIR(BGl_symbol3610z00zzsparqlz00, BgL_arg1769z00_682); } break;case ((long)0) : 

goto BgL_zc3anonymousza31755za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3111ze3z41_673;break;
default: 
BgL_aux2655z00_3329 = 
BGl_errorzf2locationzf2zz__errorz00(BGl_string3689z00zzsparqlz00, BGl_string3690z00zzsparqlz00, 
BINT(BgL_matchz00_674), BGl_string3582z00zzsparqlz00, 
BINT(((long)2988))); } } } } } 
BGL_ENV_POP_TRACE(BgL_env2658z00_3328); 
return BgL_aux2655z00_3329;} } } } } 
}



/* &__reduce */
obj_t BGl_z62__reducez62zzsparqlz00(obj_t BgL_envz00_3446, obj_t BgL_nz00_3448, obj_t BgL___stackz00_3449, obj_t BgL___spz00_3450)
{ AN_OBJECT;
{ /* Llib/sparql.scm 91 */
{ /* Llib/sparql.scm 91 */
obj_t BgL___gotozd2tablezd2_3447;
BgL___gotozd2tablezd2_3447 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3446, 
(int)(((long)0)))); 
{ 
obj_t BgL_nz00_79;obj_t BgL___stackz00_80;obj_t BgL___spz00_81;
BgL_nz00_79 = BgL_nz00_3448; 
BgL___stackz00_80 = BgL___stackz00_3449; 
BgL___spz00_81 = BgL___spz00_3450; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_name2652z00_3322;obj_t BgL_loc2653z00_3323;obj_t BgL_env2654z00_3324;
BgL_name2652z00_3322 = BGl_symbol3734z00zzsparqlz00; 
BgL_loc2653z00_3323 = BGl_list3600z00zzsparqlz00; 
BgL_env2654z00_3324 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 91 */

BGL_ENV_PUSH_TRACE(BgL_env2654z00_3324, BgL_name2652z00_3322, BgL_loc2653z00_3323); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_aux2651z00_3325;
if(
INTEGERP(BgL_nz00_79))
{ /* Llib/sparql.scm 91 */
switch( 
(long)CINT(BgL_nz00_79)) { case ((long)1) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_tripletsz00_86;
{ /* Llib/sparql.scm 91 */
long BgL_arg1173z00_88;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1412;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6225;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6225 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6228;
BgL_auxz00_6228 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6228,BFALSE,BFALSE);} 
BgL_za71za7_1412 = 
(long)CINT(BgL_auxz00_6225); } 
BgL_arg1173z00_88 = 
(BgL_za71za7_1412-((long)3)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1415;int BgL_kz00_1416;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1415 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6236;
BgL_auxz00_6236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6236,BFALSE,BFALSE);} 
BgL_kz00_1416 = 
(int)(BgL_arg1173z00_88); 
BgL_tripletsz00_86 = 
VECTOR_REF(BgL_vectorz00_1415,BgL_kz00_1416); } } 
BgL_aux2651z00_3325 = BgL_tripletsz00_86; } break;case ((long)2) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_tripletz00_90;obj_t BgL_tripletsz00_92;
{ /* Llib/sparql.scm 91 */
long BgL_arg1194z00_95;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1422;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6242;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6242 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6245;
BgL_auxz00_6245 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6245,BFALSE,BFALSE);} 
BgL_za71za7_1422 = 
(long)CINT(BgL_auxz00_6242); } 
BgL_arg1194z00_95 = 
(BgL_za71za7_1422-((long)5)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1425;int BgL_kz00_1426;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1425 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6253;
BgL_auxz00_6253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6253,BFALSE,BFALSE);} 
BgL_kz00_1426 = 
(int)(BgL_arg1194z00_95); 
BgL_tripletz00_90 = 
VECTOR_REF(BgL_vectorz00_1425,BgL_kz00_1426); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1198z00_97;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1432;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6259;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6259 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6262;
BgL_auxz00_6262 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6262,BFALSE,BFALSE);} 
BgL_za71za7_1432 = 
(long)CINT(BgL_auxz00_6259); } 
BgL_arg1198z00_97 = 
(BgL_za71za7_1432-((long)1)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1435;int BgL_kz00_1436;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1435 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6270;
BgL_auxz00_6270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6270,BFALSE,BFALSE);} 
BgL_kz00_1436 = 
(int)(BgL_arg1198z00_97); 
BgL_tripletsz00_92 = 
VECTOR_REF(BgL_vectorz00_1435,BgL_kz00_1436); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1177z00_93;obj_t BgL_arg1191z00_94;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1437;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6276;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6276 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6279;
BgL_auxz00_6279 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6279,BFALSE,BFALSE);} 
BgL_za71za7_1437 = 
(long)CINT(BgL_auxz00_6276); } 
BgL_arg1177z00_93 = 
(BgL_za71za7_1437-((long)6)); } 
{ /* Llib/sparql.scm 91 */

BgL_arg1191z00_94 = 
MAKE_PAIR(BgL_tripletz00_90, BgL_tripletsz00_92); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1442;
BgL_newzd2catzd2_1442 = BGl_symbol3663z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1445;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1451;int BgL_kz00_1452;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1451 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6288;
BgL_auxz00_6288 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6288,BFALSE,BFALSE);} 
BgL_kz00_1452 = 
(int)(BgL_arg1177z00_93); 
{ /* Llib/sparql.scm 91 */
int BgL_l2775z00_3574;
BgL_l2775z00_3574 = 
VECTOR_LENGTH(BgL_vectorz00_1451); 
if(
BOUND_CHECK(BgL_kz00_1452, BgL_l2775z00_3574))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1445 = 
VECTOR_REF(BgL_vectorz00_1451,BgL_kz00_1452); }  else 
{ 
obj_t BgL_auxz00_6297;
BgL_auxz00_6297 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1451, 
BINT(BgL_kz00_1452), 
BINT(BgL_l2775z00_3574)); 
FAILURE(BgL_auxz00_6297,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1446;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1447;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1448;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1454;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6303;
if(
INTEGERP(BgL_statez00_1445))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6303 = BgL_statez00_1445
; }  else 
{ 
obj_t BgL_auxz00_6306;
BgL_auxz00_6306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1445); 
FAILURE(BgL_auxz00_6306,BFALSE,BFALSE);} 
BgL_kz00_1454 = 
CINT(BgL_auxz00_6303); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2779z00_3578;
BgL_l2779z00_3578 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1454, BgL_l2779z00_3578))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1448 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1454); }  else 
{ 
obj_t BgL_auxz00_6315;
BgL_auxz00_6315 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1454), 
BINT(BgL_l2779z00_3578)); 
FAILURE(BgL_auxz00_6315,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6321;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_6322;
if(
PAIRP(BgL_arg1421z00_1448))
{ /* Llib/sparql.scm 91 */
BgL_testz00_6322 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_6322 = 
NULLP(BgL_arg1421z00_1448)
; } 
if(BgL_testz00_6322)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6321 = BgL_arg1421z00_1448
; }  else 
{ 
obj_t BgL_auxz00_6326;
BgL_auxz00_6326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1448); 
FAILURE(BgL_auxz00_6326,BFALSE,BFALSE);} } 
BgL_arg1418z00_1447 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1442, BgL_auxz00_6321); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1455;
if(
PAIRP(BgL_arg1418z00_1447))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1455 = BgL_arg1418z00_1447; }  else 
{ 
obj_t BgL_auxz00_6333;
BgL_auxz00_6333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1447); 
FAILURE(BgL_auxz00_6333,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1446 = 
CDR(BgL_pairz00_1455); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1449;
BgL_newzd2spzd2_1449 = 
(BgL_arg1177z00_93+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1459;int BgL_kz00_1460;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1459 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6341;
BgL_auxz00_6341 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6341,BFALSE,BFALSE);} 
BgL_kz00_1460 = 
(int)(BgL_newzd2spzd2_1449); 
{ /* Llib/sparql.scm 91 */
int BgL_l2783z00_3582;
BgL_l2783z00_3582 = 
VECTOR_LENGTH(BgL_vectorz00_1459); 
if(
BOUND_CHECK(BgL_kz00_1460, BgL_l2783z00_3582))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1459,BgL_kz00_1460,BgL_newzd2statezd2_1446); }  else 
{ 
obj_t BgL_auxz00_6350;
BgL_auxz00_6350 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1460), BgL_vectorz00_1459, 
BINT(BgL_l2783z00_3582)); 
FAILURE(BgL_auxz00_6350,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1450;
BgL_arg1412z00_1450 = 
(BgL_newzd2spzd2_1449-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1465;int BgL_kz00_1466;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1465 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6359;
BgL_auxz00_6359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6359,BFALSE,BFALSE);} 
BgL_kz00_1466 = 
(int)(BgL_arg1412z00_1450); 
{ /* Llib/sparql.scm 91 */
int BgL_l2787z00_3586;
BgL_l2787z00_3586 = 
VECTOR_LENGTH(BgL_vectorz00_1465); 
if(
BOUND_CHECK(BgL_kz00_1466, BgL_l2787z00_3586))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1465,BgL_kz00_1466,BgL_arg1191z00_94); }  else 
{ 
obj_t BgL_auxz00_6368;
BgL_auxz00_6368 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1466), BgL_vectorz00_1465, 
BINT(BgL_l2787z00_3586)); 
FAILURE(BgL_auxz00_6368,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1449); } } } } } } } break;case ((long)3) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_tripletz00_98;
{ /* Llib/sparql.scm 91 */
long BgL_arg1203z00_103;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1468;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6375;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6375 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6378;
BgL_auxz00_6378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6378,BFALSE,BFALSE);} 
BgL_za71za7_1468 = 
(long)CINT(BgL_auxz00_6375); } 
BgL_arg1203z00_103 = 
(BgL_za71za7_1468-((long)3)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1471;int BgL_kz00_1472;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1471 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6386;
BgL_auxz00_6386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6386,BFALSE,BFALSE);} 
BgL_kz00_1472 = 
(int)(BgL_arg1203z00_103); 
BgL_tripletz00_98 = 
VECTOR_REF(BgL_vectorz00_1471,BgL_kz00_1472); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1200z00_100;obj_t BgL_arg1201z00_101;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1478;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6392;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6392 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6395;
BgL_auxz00_6395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6395,BFALSE,BFALSE);} 
BgL_za71za7_1478 = 
(long)CINT(BgL_auxz00_6392); } 
BgL_arg1200z00_100 = 
(BgL_za71za7_1478-((long)4)); } 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 95 */
obj_t BgL_list1202z00_102;
BgL_list1202z00_102 = 
MAKE_PAIR(BgL_tripletz00_98, BNIL); 
BgL_arg1201z00_101 = BgL_list1202z00_102; } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1485;
BgL_newzd2catzd2_1485 = BGl_symbol3663z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1488;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1494;int BgL_kz00_1495;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1494 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6404;
BgL_auxz00_6404 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6404,BFALSE,BFALSE);} 
BgL_kz00_1495 = 
(int)(BgL_arg1200z00_100); 
{ /* Llib/sparql.scm 91 */
int BgL_l2791z00_3590;
BgL_l2791z00_3590 = 
VECTOR_LENGTH(BgL_vectorz00_1494); 
if(
BOUND_CHECK(BgL_kz00_1495, BgL_l2791z00_3590))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1488 = 
VECTOR_REF(BgL_vectorz00_1494,BgL_kz00_1495); }  else 
{ 
obj_t BgL_auxz00_6413;
BgL_auxz00_6413 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1494, 
BINT(BgL_kz00_1495), 
BINT(BgL_l2791z00_3590)); 
FAILURE(BgL_auxz00_6413,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1489;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1490;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1491;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1497;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6419;
if(
INTEGERP(BgL_statez00_1488))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6419 = BgL_statez00_1488
; }  else 
{ 
obj_t BgL_auxz00_6422;
BgL_auxz00_6422 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1488); 
FAILURE(BgL_auxz00_6422,BFALSE,BFALSE);} 
BgL_kz00_1497 = 
CINT(BgL_auxz00_6419); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2795z00_3594;
BgL_l2795z00_3594 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1497, BgL_l2795z00_3594))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1491 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1497); }  else 
{ 
obj_t BgL_auxz00_6431;
BgL_auxz00_6431 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1497), 
BINT(BgL_l2795z00_3594)); 
FAILURE(BgL_auxz00_6431,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6437;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_6438;
if(
PAIRP(BgL_arg1421z00_1491))
{ /* Llib/sparql.scm 91 */
BgL_testz00_6438 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_6438 = 
NULLP(BgL_arg1421z00_1491)
; } 
if(BgL_testz00_6438)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6437 = BgL_arg1421z00_1491
; }  else 
{ 
obj_t BgL_auxz00_6442;
BgL_auxz00_6442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1491); 
FAILURE(BgL_auxz00_6442,BFALSE,BFALSE);} } 
BgL_arg1418z00_1490 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1485, BgL_auxz00_6437); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1498;
if(
PAIRP(BgL_arg1418z00_1490))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1498 = BgL_arg1418z00_1490; }  else 
{ 
obj_t BgL_auxz00_6449;
BgL_auxz00_6449 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1490); 
FAILURE(BgL_auxz00_6449,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1489 = 
CDR(BgL_pairz00_1498); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1492;
BgL_newzd2spzd2_1492 = 
(BgL_arg1200z00_100+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1502;int BgL_kz00_1503;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1502 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6457;
BgL_auxz00_6457 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6457,BFALSE,BFALSE);} 
BgL_kz00_1503 = 
(int)(BgL_newzd2spzd2_1492); 
{ /* Llib/sparql.scm 91 */
int BgL_l2799z00_3598;
BgL_l2799z00_3598 = 
VECTOR_LENGTH(BgL_vectorz00_1502); 
if(
BOUND_CHECK(BgL_kz00_1503, BgL_l2799z00_3598))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1502,BgL_kz00_1503,BgL_newzd2statezd2_1489); }  else 
{ 
obj_t BgL_auxz00_6466;
BgL_auxz00_6466 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1503), BgL_vectorz00_1502, 
BINT(BgL_l2799z00_3598)); 
FAILURE(BgL_auxz00_6466,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1493;
BgL_arg1412z00_1493 = 
(BgL_newzd2spzd2_1492-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1508;int BgL_kz00_1509;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1508 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6475;
BgL_auxz00_6475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6475,BFALSE,BFALSE);} 
BgL_kz00_1509 = 
(int)(BgL_arg1412z00_1493); 
{ /* Llib/sparql.scm 91 */
int BgL_l2803z00_3602;
BgL_l2803z00_3602 = 
VECTOR_LENGTH(BgL_vectorz00_1508); 
if(
BOUND_CHECK(BgL_kz00_1509, BgL_l2803z00_3602))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1508,BgL_kz00_1509,BgL_arg1201z00_101); }  else 
{ 
obj_t BgL_auxz00_6484;
BgL_auxz00_6484 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1509), BgL_vectorz00_1508, 
BINT(BgL_l2803z00_3602)); 
FAILURE(BgL_auxz00_6484,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1492); } } } } } } } break;case ((long)4) : 

{ /* Llib/sparql.scm 91 */
long BgL_arg1205z00_106;obj_t BgL_arg1206z00_107;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1516;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6491;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6491 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6494;
BgL_auxz00_6494 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6494,BFALSE,BFALSE);} 
BgL_za71za7_1516 = 
(long)CINT(BgL_auxz00_6491); } 
BgL_arg1205z00_106 = 
(BgL_za71za7_1516-((long)2)); } 
{ /* Llib/sparql.scm 91 */

BgL_arg1206z00_107 = BNIL; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1523;
BgL_newzd2catzd2_1523 = BGl_symbol3663z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1526;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1532;int BgL_kz00_1533;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1532 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6502;
BgL_auxz00_6502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6502,BFALSE,BFALSE);} 
BgL_kz00_1533 = 
(int)(BgL_arg1205z00_106); 
{ /* Llib/sparql.scm 91 */
int BgL_l2807z00_3606;
BgL_l2807z00_3606 = 
VECTOR_LENGTH(BgL_vectorz00_1532); 
if(
BOUND_CHECK(BgL_kz00_1533, BgL_l2807z00_3606))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1526 = 
VECTOR_REF(BgL_vectorz00_1532,BgL_kz00_1533); }  else 
{ 
obj_t BgL_auxz00_6511;
BgL_auxz00_6511 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1532, 
BINT(BgL_kz00_1533), 
BINT(BgL_l2807z00_3606)); 
FAILURE(BgL_auxz00_6511,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1527;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1528;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1529;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1535;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6517;
if(
INTEGERP(BgL_statez00_1526))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6517 = BgL_statez00_1526
; }  else 
{ 
obj_t BgL_auxz00_6520;
BgL_auxz00_6520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1526); 
FAILURE(BgL_auxz00_6520,BFALSE,BFALSE);} 
BgL_kz00_1535 = 
CINT(BgL_auxz00_6517); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2811z00_3610;
BgL_l2811z00_3610 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1535, BgL_l2811z00_3610))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1529 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1535); }  else 
{ 
obj_t BgL_auxz00_6529;
BgL_auxz00_6529 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1535), 
BINT(BgL_l2811z00_3610)); 
FAILURE(BgL_auxz00_6529,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6535;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_6536;
if(
PAIRP(BgL_arg1421z00_1529))
{ /* Llib/sparql.scm 91 */
BgL_testz00_6536 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_6536 = 
NULLP(BgL_arg1421z00_1529)
; } 
if(BgL_testz00_6536)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6535 = BgL_arg1421z00_1529
; }  else 
{ 
obj_t BgL_auxz00_6540;
BgL_auxz00_6540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1529); 
FAILURE(BgL_auxz00_6540,BFALSE,BFALSE);} } 
BgL_arg1418z00_1528 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1523, BgL_auxz00_6535); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1536;
if(
PAIRP(BgL_arg1418z00_1528))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1536 = BgL_arg1418z00_1528; }  else 
{ 
obj_t BgL_auxz00_6547;
BgL_auxz00_6547 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1528); 
FAILURE(BgL_auxz00_6547,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1527 = 
CDR(BgL_pairz00_1536); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1530;
BgL_newzd2spzd2_1530 = 
(BgL_arg1205z00_106+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1540;int BgL_kz00_1541;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1540 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6555;
BgL_auxz00_6555 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6555,BFALSE,BFALSE);} 
BgL_kz00_1541 = 
(int)(BgL_newzd2spzd2_1530); 
{ /* Llib/sparql.scm 91 */
int BgL_l2815z00_3614;
BgL_l2815z00_3614 = 
VECTOR_LENGTH(BgL_vectorz00_1540); 
if(
BOUND_CHECK(BgL_kz00_1541, BgL_l2815z00_3614))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1540,BgL_kz00_1541,BgL_newzd2statezd2_1527); }  else 
{ 
obj_t BgL_auxz00_6564;
BgL_auxz00_6564 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1541), BgL_vectorz00_1540, 
BINT(BgL_l2815z00_3614)); 
FAILURE(BgL_auxz00_6564,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1531;
BgL_arg1412z00_1531 = 
(BgL_newzd2spzd2_1530-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1546;int BgL_kz00_1547;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1546 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6573;
BgL_auxz00_6573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6573,BFALSE,BFALSE);} 
BgL_kz00_1547 = 
(int)(BgL_arg1412z00_1531); 
{ /* Llib/sparql.scm 91 */
int BgL_l2819z00_3618;
BgL_l2819z00_3618 = 
VECTOR_LENGTH(BgL_vectorz00_1546); 
if(
BOUND_CHECK(BgL_kz00_1547, BgL_l2819z00_3618))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1546,BgL_kz00_1547,BgL_arg1206z00_107); }  else 
{ 
obj_t BgL_auxz00_6582;
BgL_auxz00_6582 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1547), BgL_vectorz00_1546, 
BINT(BgL_l2819z00_3618)); 
FAILURE(BgL_auxz00_6582,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1530); } } } } } } break;case ((long)5) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_subjectz00_110;obj_t BgL_predicatz00_111;obj_t BgL_objectz00_112;
{ /* Llib/sparql.scm 91 */
long BgL_arg1240z00_118;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1549;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6589;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6589 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6592;
BgL_auxz00_6592 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6592,BFALSE,BFALSE);} 
BgL_za71za7_1549 = 
(long)CINT(BgL_auxz00_6589); } 
BgL_arg1240z00_118 = 
(BgL_za71za7_1549-((long)5)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1552;int BgL_kz00_1553;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1552 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6600;
BgL_auxz00_6600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6600,BFALSE,BFALSE);} 
BgL_kz00_1553 = 
(int)(BgL_arg1240z00_118); 
BgL_subjectz00_110 = 
VECTOR_REF(BgL_vectorz00_1552,BgL_kz00_1553); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1241z00_119;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1554;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6606;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6606 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6609;
BgL_auxz00_6609 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6609,BFALSE,BFALSE);} 
BgL_za71za7_1554 = 
(long)CINT(BgL_auxz00_6606); } 
BgL_arg1241z00_119 = 
(BgL_za71za7_1554-((long)3)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1557;int BgL_kz00_1558;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1557 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6617;
BgL_auxz00_6617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6617,BFALSE,BFALSE);} 
BgL_kz00_1558 = 
(int)(BgL_arg1241z00_119); 
BgL_predicatz00_111 = 
VECTOR_REF(BgL_vectorz00_1557,BgL_kz00_1558); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1243z00_120;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1559;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6623;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6623 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6626;
BgL_auxz00_6626 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6626,BFALSE,BFALSE);} 
BgL_za71za7_1559 = 
(long)CINT(BgL_auxz00_6623); } 
BgL_arg1243z00_120 = 
(BgL_za71za7_1559-((long)1)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1562;int BgL_kz00_1563;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1562 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6634;
BgL_auxz00_6634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6634,BFALSE,BFALSE);} 
BgL_kz00_1563 = 
(int)(BgL_arg1243z00_120); 
BgL_objectz00_112 = 
VECTOR_REF(BgL_vectorz00_1562,BgL_kz00_1563); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1209z00_113;obj_t BgL_arg1210z00_114;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1564;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6640;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6640 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6643;
BgL_auxz00_6643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6643,BFALSE,BFALSE);} 
BgL_za71za7_1564 = 
(long)CINT(BgL_auxz00_6640); } 
BgL_arg1209z00_113 = 
(BgL_za71za7_1564-((long)6)); } 
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
obj_t BgL_newzd2catzd2_1571;
BgL_newzd2catzd2_1571 = BGl_symbol3666z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1574;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1580;int BgL_kz00_1581;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1580 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6654;
BgL_auxz00_6654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6654,BFALSE,BFALSE);} 
BgL_kz00_1581 = 
(int)(BgL_arg1209z00_113); 
{ /* Llib/sparql.scm 91 */
int BgL_l2823z00_3622;
BgL_l2823z00_3622 = 
VECTOR_LENGTH(BgL_vectorz00_1580); 
if(
BOUND_CHECK(BgL_kz00_1581, BgL_l2823z00_3622))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1574 = 
VECTOR_REF(BgL_vectorz00_1580,BgL_kz00_1581); }  else 
{ 
obj_t BgL_auxz00_6663;
BgL_auxz00_6663 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1580, 
BINT(BgL_kz00_1581), 
BINT(BgL_l2823z00_3622)); 
FAILURE(BgL_auxz00_6663,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1575;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1576;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1577;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1583;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6669;
if(
INTEGERP(BgL_statez00_1574))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6669 = BgL_statez00_1574
; }  else 
{ 
obj_t BgL_auxz00_6672;
BgL_auxz00_6672 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1574); 
FAILURE(BgL_auxz00_6672,BFALSE,BFALSE);} 
BgL_kz00_1583 = 
CINT(BgL_auxz00_6669); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2827z00_3626;
BgL_l2827z00_3626 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1583, BgL_l2827z00_3626))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1577 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1583); }  else 
{ 
obj_t BgL_auxz00_6681;
BgL_auxz00_6681 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1583), 
BINT(BgL_l2827z00_3626)); 
FAILURE(BgL_auxz00_6681,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6687;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_6688;
if(
PAIRP(BgL_arg1421z00_1577))
{ /* Llib/sparql.scm 91 */
BgL_testz00_6688 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_6688 = 
NULLP(BgL_arg1421z00_1577)
; } 
if(BgL_testz00_6688)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6687 = BgL_arg1421z00_1577
; }  else 
{ 
obj_t BgL_auxz00_6692;
BgL_auxz00_6692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1577); 
FAILURE(BgL_auxz00_6692,BFALSE,BFALSE);} } 
BgL_arg1418z00_1576 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1571, BgL_auxz00_6687); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1584;
if(
PAIRP(BgL_arg1418z00_1576))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1584 = BgL_arg1418z00_1576; }  else 
{ 
obj_t BgL_auxz00_6699;
BgL_auxz00_6699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1576); 
FAILURE(BgL_auxz00_6699,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1575 = 
CDR(BgL_pairz00_1584); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1578;
BgL_newzd2spzd2_1578 = 
(BgL_arg1209z00_113+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1588;int BgL_kz00_1589;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1588 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6707;
BgL_auxz00_6707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6707,BFALSE,BFALSE);} 
BgL_kz00_1589 = 
(int)(BgL_newzd2spzd2_1578); 
{ /* Llib/sparql.scm 91 */
int BgL_l2831z00_3630;
BgL_l2831z00_3630 = 
VECTOR_LENGTH(BgL_vectorz00_1588); 
if(
BOUND_CHECK(BgL_kz00_1589, BgL_l2831z00_3630))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1588,BgL_kz00_1589,BgL_newzd2statezd2_1575); }  else 
{ 
obj_t BgL_auxz00_6716;
BgL_auxz00_6716 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1589), BgL_vectorz00_1588, 
BINT(BgL_l2831z00_3630)); 
FAILURE(BgL_auxz00_6716,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1579;
BgL_arg1412z00_1579 = 
(BgL_newzd2spzd2_1578-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1594;int BgL_kz00_1595;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1594 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6725;
BgL_auxz00_6725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6725,BFALSE,BFALSE);} 
BgL_kz00_1595 = 
(int)(BgL_arg1412z00_1579); 
{ /* Llib/sparql.scm 91 */
int BgL_l2835z00_3634;
BgL_l2835z00_3634 = 
VECTOR_LENGTH(BgL_vectorz00_1594); 
if(
BOUND_CHECK(BgL_kz00_1595, BgL_l2835z00_3634))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1594,BgL_kz00_1595,BgL_arg1210z00_114); }  else 
{ 
obj_t BgL_auxz00_6734;
BgL_auxz00_6734 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1595), BgL_vectorz00_1594, 
BINT(BgL_l2835z00_3634)); 
FAILURE(BgL_auxz00_6734,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1578); } } } } } } } break;case ((long)6) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_uriz00_121;
{ /* Llib/sparql.scm 91 */
long BgL_arg1270z00_124;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1597;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6741;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6741 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6744;
BgL_auxz00_6744 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6744,BFALSE,BFALSE);} 
BgL_za71za7_1597 = 
(long)CINT(BgL_auxz00_6741); } 
BgL_arg1270z00_124 = 
(BgL_za71za7_1597-((long)1)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1600;int BgL_kz00_1601;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1600 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6752;
BgL_auxz00_6752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6752,BFALSE,BFALSE);} 
BgL_kz00_1601 = 
(int)(BgL_arg1270z00_124); 
BgL_uriz00_121 = 
VECTOR_REF(BgL_vectorz00_1600,BgL_kz00_1601); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1250z00_122;obj_t BgL_arg1252z00_123;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1602;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6758;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6758 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6761;
BgL_auxz00_6761 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6761,BFALSE,BFALSE);} 
BgL_za71za7_1602 = 
(long)CINT(BgL_auxz00_6758); } 
BgL_arg1250z00_122 = 
(BgL_za71za7_1602-((long)2)); } 
{ /* Llib/sparql.scm 91 */

BgL_arg1252z00_123 = BgL_uriz00_121; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1607;
BgL_newzd2catzd2_1607 = BGl_symbol3669z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1610;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1616;int BgL_kz00_1617;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1616 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6769;
BgL_auxz00_6769 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6769,BFALSE,BFALSE);} 
BgL_kz00_1617 = 
(int)(BgL_arg1250z00_122); 
{ /* Llib/sparql.scm 91 */
int BgL_l2839z00_3638;
BgL_l2839z00_3638 = 
VECTOR_LENGTH(BgL_vectorz00_1616); 
if(
BOUND_CHECK(BgL_kz00_1617, BgL_l2839z00_3638))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1610 = 
VECTOR_REF(BgL_vectorz00_1616,BgL_kz00_1617); }  else 
{ 
obj_t BgL_auxz00_6778;
BgL_auxz00_6778 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1616, 
BINT(BgL_kz00_1617), 
BINT(BgL_l2839z00_3638)); 
FAILURE(BgL_auxz00_6778,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1611;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1612;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1613;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1619;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6784;
if(
INTEGERP(BgL_statez00_1610))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6784 = BgL_statez00_1610
; }  else 
{ 
obj_t BgL_auxz00_6787;
BgL_auxz00_6787 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1610); 
FAILURE(BgL_auxz00_6787,BFALSE,BFALSE);} 
BgL_kz00_1619 = 
CINT(BgL_auxz00_6784); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2843z00_3642;
BgL_l2843z00_3642 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1619, BgL_l2843z00_3642))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1613 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1619); }  else 
{ 
obj_t BgL_auxz00_6796;
BgL_auxz00_6796 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1619), 
BINT(BgL_l2843z00_3642)); 
FAILURE(BgL_auxz00_6796,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6802;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_6803;
if(
PAIRP(BgL_arg1421z00_1613))
{ /* Llib/sparql.scm 91 */
BgL_testz00_6803 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_6803 = 
NULLP(BgL_arg1421z00_1613)
; } 
if(BgL_testz00_6803)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6802 = BgL_arg1421z00_1613
; }  else 
{ 
obj_t BgL_auxz00_6807;
BgL_auxz00_6807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1613); 
FAILURE(BgL_auxz00_6807,BFALSE,BFALSE);} } 
BgL_arg1418z00_1612 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1607, BgL_auxz00_6802); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1620;
if(
PAIRP(BgL_arg1418z00_1612))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1620 = BgL_arg1418z00_1612; }  else 
{ 
obj_t BgL_auxz00_6814;
BgL_auxz00_6814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1612); 
FAILURE(BgL_auxz00_6814,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1611 = 
CDR(BgL_pairz00_1620); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1614;
BgL_newzd2spzd2_1614 = 
(BgL_arg1250z00_122+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1624;int BgL_kz00_1625;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1624 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6822;
BgL_auxz00_6822 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6822,BFALSE,BFALSE);} 
BgL_kz00_1625 = 
(int)(BgL_newzd2spzd2_1614); 
{ /* Llib/sparql.scm 91 */
int BgL_l2847z00_3646;
BgL_l2847z00_3646 = 
VECTOR_LENGTH(BgL_vectorz00_1624); 
if(
BOUND_CHECK(BgL_kz00_1625, BgL_l2847z00_3646))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1624,BgL_kz00_1625,BgL_newzd2statezd2_1611); }  else 
{ 
obj_t BgL_auxz00_6831;
BgL_auxz00_6831 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1625), BgL_vectorz00_1624, 
BINT(BgL_l2847z00_3646)); 
FAILURE(BgL_auxz00_6831,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1615;
BgL_arg1412z00_1615 = 
(BgL_newzd2spzd2_1614-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1630;int BgL_kz00_1631;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1630 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6840;
BgL_auxz00_6840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6840,BFALSE,BFALSE);} 
BgL_kz00_1631 = 
(int)(BgL_arg1412z00_1615); 
{ /* Llib/sparql.scm 91 */
int BgL_l2851z00_3650;
BgL_l2851z00_3650 = 
VECTOR_LENGTH(BgL_vectorz00_1630); 
if(
BOUND_CHECK(BgL_kz00_1631, BgL_l2851z00_3650))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1630,BgL_kz00_1631,BgL_arg1252z00_123); }  else 
{ 
obj_t BgL_auxz00_6849;
BgL_auxz00_6849 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1631), BgL_vectorz00_1630, 
BINT(BgL_l2851z00_3650)); 
FAILURE(BgL_auxz00_6849,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1614); } } } } } } } break;case ((long)7) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_namednodez00_125;
{ /* Llib/sparql.scm 91 */
long BgL_arg1275z00_128;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1633;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6856;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6856 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6859;
BgL_auxz00_6859 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6859,BFALSE,BFALSE);} 
BgL_za71za7_1633 = 
(long)CINT(BgL_auxz00_6856); } 
BgL_arg1275z00_128 = 
(BgL_za71za7_1633-((long)1)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1636;int BgL_kz00_1637;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1636 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6867;
BgL_auxz00_6867 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6867,BFALSE,BFALSE);} 
BgL_kz00_1637 = 
(int)(BgL_arg1275z00_128); 
BgL_namednodez00_125 = 
VECTOR_REF(BgL_vectorz00_1636,BgL_kz00_1637); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1271z00_126;obj_t BgL_arg1273z00_127;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1638;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6873;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6873 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6876;
BgL_auxz00_6876 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6876,BFALSE,BFALSE);} 
BgL_za71za7_1638 = 
(long)CINT(BgL_auxz00_6873); } 
BgL_arg1271z00_126 = 
(BgL_za71za7_1638-((long)2)); } 
{ /* Llib/sparql.scm 91 */

BgL_arg1273z00_127 = BgL_namednodez00_125; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1643;
BgL_newzd2catzd2_1643 = BGl_symbol3669z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1646;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1652;int BgL_kz00_1653;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1652 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6884;
BgL_auxz00_6884 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6884,BFALSE,BFALSE);} 
BgL_kz00_1653 = 
(int)(BgL_arg1271z00_126); 
{ /* Llib/sparql.scm 91 */
int BgL_l2855z00_3654;
BgL_l2855z00_3654 = 
VECTOR_LENGTH(BgL_vectorz00_1652); 
if(
BOUND_CHECK(BgL_kz00_1653, BgL_l2855z00_3654))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1646 = 
VECTOR_REF(BgL_vectorz00_1652,BgL_kz00_1653); }  else 
{ 
obj_t BgL_auxz00_6893;
BgL_auxz00_6893 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1652, 
BINT(BgL_kz00_1653), 
BINT(BgL_l2855z00_3654)); 
FAILURE(BgL_auxz00_6893,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1647;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1648;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1649;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1655;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6899;
if(
INTEGERP(BgL_statez00_1646))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6899 = BgL_statez00_1646
; }  else 
{ 
obj_t BgL_auxz00_6902;
BgL_auxz00_6902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1646); 
FAILURE(BgL_auxz00_6902,BFALSE,BFALSE);} 
BgL_kz00_1655 = 
CINT(BgL_auxz00_6899); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2859z00_3658;
BgL_l2859z00_3658 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1655, BgL_l2859z00_3658))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1649 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1655); }  else 
{ 
obj_t BgL_auxz00_6911;
BgL_auxz00_6911 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1655), 
BINT(BgL_l2859z00_3658)); 
FAILURE(BgL_auxz00_6911,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6917;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_6918;
if(
PAIRP(BgL_arg1421z00_1649))
{ /* Llib/sparql.scm 91 */
BgL_testz00_6918 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_6918 = 
NULLP(BgL_arg1421z00_1649)
; } 
if(BgL_testz00_6918)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6917 = BgL_arg1421z00_1649
; }  else 
{ 
obj_t BgL_auxz00_6922;
BgL_auxz00_6922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1649); 
FAILURE(BgL_auxz00_6922,BFALSE,BFALSE);} } 
BgL_arg1418z00_1648 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1643, BgL_auxz00_6917); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1656;
if(
PAIRP(BgL_arg1418z00_1648))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1656 = BgL_arg1418z00_1648; }  else 
{ 
obj_t BgL_auxz00_6929;
BgL_auxz00_6929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1648); 
FAILURE(BgL_auxz00_6929,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1647 = 
CDR(BgL_pairz00_1656); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1650;
BgL_newzd2spzd2_1650 = 
(BgL_arg1271z00_126+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1660;int BgL_kz00_1661;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1660 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6937;
BgL_auxz00_6937 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6937,BFALSE,BFALSE);} 
BgL_kz00_1661 = 
(int)(BgL_newzd2spzd2_1650); 
{ /* Llib/sparql.scm 91 */
int BgL_l2863z00_3662;
BgL_l2863z00_3662 = 
VECTOR_LENGTH(BgL_vectorz00_1660); 
if(
BOUND_CHECK(BgL_kz00_1661, BgL_l2863z00_3662))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1660,BgL_kz00_1661,BgL_newzd2statezd2_1647); }  else 
{ 
obj_t BgL_auxz00_6946;
BgL_auxz00_6946 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1661), BgL_vectorz00_1660, 
BINT(BgL_l2863z00_3662)); 
FAILURE(BgL_auxz00_6946,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1651;
BgL_arg1412z00_1651 = 
(BgL_newzd2spzd2_1650-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1666;int BgL_kz00_1667;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1666 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6955;
BgL_auxz00_6955 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6955,BFALSE,BFALSE);} 
BgL_kz00_1667 = 
(int)(BgL_arg1412z00_1651); 
{ /* Llib/sparql.scm 91 */
int BgL_l2867z00_3666;
BgL_l2867z00_3666 = 
VECTOR_LENGTH(BgL_vectorz00_1666); 
if(
BOUND_CHECK(BgL_kz00_1667, BgL_l2867z00_3666))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1666,BgL_kz00_1667,BgL_arg1273z00_127); }  else 
{ 
obj_t BgL_auxz00_6964;
BgL_auxz00_6964 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1667), BgL_vectorz00_1666, 
BINT(BgL_l2867z00_3666)); 
FAILURE(BgL_auxz00_6964,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1650); } } } } } } } break;case ((long)8) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_uriz00_129;
{ /* Llib/sparql.scm 91 */
long BgL_arg1280z00_132;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1669;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6971;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6971 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6974;
BgL_auxz00_6974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6974,BFALSE,BFALSE);} 
BgL_za71za7_1669 = 
(long)CINT(BgL_auxz00_6971); } 
BgL_arg1280z00_132 = 
(BgL_za71za7_1669-((long)1)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1672;int BgL_kz00_1673;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1672 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6982;
BgL_auxz00_6982 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6982,BFALSE,BFALSE);} 
BgL_kz00_1673 = 
(int)(BgL_arg1280z00_132); 
BgL_uriz00_129 = 
VECTOR_REF(BgL_vectorz00_1672,BgL_kz00_1673); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1276z00_130;obj_t BgL_arg1278z00_131;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1674;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_6988;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_6988 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_6991;
BgL_auxz00_6991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_6991,BFALSE,BFALSE);} 
BgL_za71za7_1674 = 
(long)CINT(BgL_auxz00_6988); } 
BgL_arg1276z00_130 = 
(BgL_za71za7_1674-((long)2)); } 
{ /* Llib/sparql.scm 91 */

BgL_arg1278z00_131 = BgL_uriz00_129; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1679;
BgL_newzd2catzd2_1679 = BGl_symbol3673z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1682;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1688;int BgL_kz00_1689;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1688 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_6999;
BgL_auxz00_6999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_6999,BFALSE,BFALSE);} 
BgL_kz00_1689 = 
(int)(BgL_arg1276z00_130); 
{ /* Llib/sparql.scm 91 */
int BgL_l2871z00_3670;
BgL_l2871z00_3670 = 
VECTOR_LENGTH(BgL_vectorz00_1688); 
if(
BOUND_CHECK(BgL_kz00_1689, BgL_l2871z00_3670))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1682 = 
VECTOR_REF(BgL_vectorz00_1688,BgL_kz00_1689); }  else 
{ 
obj_t BgL_auxz00_7008;
BgL_auxz00_7008 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1688, 
BINT(BgL_kz00_1689), 
BINT(BgL_l2871z00_3670)); 
FAILURE(BgL_auxz00_7008,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1683;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1684;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1685;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1691;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7014;
if(
INTEGERP(BgL_statez00_1682))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7014 = BgL_statez00_1682
; }  else 
{ 
obj_t BgL_auxz00_7017;
BgL_auxz00_7017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1682); 
FAILURE(BgL_auxz00_7017,BFALSE,BFALSE);} 
BgL_kz00_1691 = 
CINT(BgL_auxz00_7014); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2875z00_3674;
BgL_l2875z00_3674 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1691, BgL_l2875z00_3674))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1685 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1691); }  else 
{ 
obj_t BgL_auxz00_7026;
BgL_auxz00_7026 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1691), 
BINT(BgL_l2875z00_3674)); 
FAILURE(BgL_auxz00_7026,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7032;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_7033;
if(
PAIRP(BgL_arg1421z00_1685))
{ /* Llib/sparql.scm 91 */
BgL_testz00_7033 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_7033 = 
NULLP(BgL_arg1421z00_1685)
; } 
if(BgL_testz00_7033)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7032 = BgL_arg1421z00_1685
; }  else 
{ 
obj_t BgL_auxz00_7037;
BgL_auxz00_7037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1685); 
FAILURE(BgL_auxz00_7037,BFALSE,BFALSE);} } 
BgL_arg1418z00_1684 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1679, BgL_auxz00_7032); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1692;
if(
PAIRP(BgL_arg1418z00_1684))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1692 = BgL_arg1418z00_1684; }  else 
{ 
obj_t BgL_auxz00_7044;
BgL_auxz00_7044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1684); 
FAILURE(BgL_auxz00_7044,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1683 = 
CDR(BgL_pairz00_1692); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1686;
BgL_newzd2spzd2_1686 = 
(BgL_arg1276z00_130+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1696;int BgL_kz00_1697;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1696 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7052;
BgL_auxz00_7052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7052,BFALSE,BFALSE);} 
BgL_kz00_1697 = 
(int)(BgL_newzd2spzd2_1686); 
{ /* Llib/sparql.scm 91 */
int BgL_l2879z00_3678;
BgL_l2879z00_3678 = 
VECTOR_LENGTH(BgL_vectorz00_1696); 
if(
BOUND_CHECK(BgL_kz00_1697, BgL_l2879z00_3678))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1696,BgL_kz00_1697,BgL_newzd2statezd2_1683); }  else 
{ 
obj_t BgL_auxz00_7061;
BgL_auxz00_7061 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1697), BgL_vectorz00_1696, 
BINT(BgL_l2879z00_3678)); 
FAILURE(BgL_auxz00_7061,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1687;
BgL_arg1412z00_1687 = 
(BgL_newzd2spzd2_1686-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1702;int BgL_kz00_1703;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1702 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7070;
BgL_auxz00_7070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7070,BFALSE,BFALSE);} 
BgL_kz00_1703 = 
(int)(BgL_arg1412z00_1687); 
{ /* Llib/sparql.scm 91 */
int BgL_l2883z00_3682;
BgL_l2883z00_3682 = 
VECTOR_LENGTH(BgL_vectorz00_1702); 
if(
BOUND_CHECK(BgL_kz00_1703, BgL_l2883z00_3682))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1702,BgL_kz00_1703,BgL_arg1278z00_131); }  else 
{ 
obj_t BgL_auxz00_7079;
BgL_auxz00_7079 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1703), BgL_vectorz00_1702, 
BINT(BgL_l2883z00_3682)); 
FAILURE(BgL_auxz00_7079,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1686); } } } } } } } break;case ((long)9) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_uriz00_133;
{ /* Llib/sparql.scm 91 */
long BgL_arg1386z00_136;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1705;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7086;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7086 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_7089;
BgL_auxz00_7089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_7089,BFALSE,BFALSE);} 
BgL_za71za7_1705 = 
(long)CINT(BgL_auxz00_7086); } 
BgL_arg1386z00_136 = 
(BgL_za71za7_1705-((long)1)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1708;int BgL_kz00_1709;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1708 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7097;
BgL_auxz00_7097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7097,BFALSE,BFALSE);} 
BgL_kz00_1709 = 
(int)(BgL_arg1386z00_136); 
BgL_uriz00_133 = 
VECTOR_REF(BgL_vectorz00_1708,BgL_kz00_1709); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1281z00_134;obj_t BgL_arg1378z00_135;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1710;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7103;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7103 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_7106;
BgL_auxz00_7106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_7106,BFALSE,BFALSE);} 
BgL_za71za7_1710 = 
(long)CINT(BgL_auxz00_7103); } 
BgL_arg1281z00_134 = 
(BgL_za71za7_1710-((long)2)); } 
{ /* Llib/sparql.scm 91 */

BgL_arg1378z00_135 = BgL_uriz00_133; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1715;
BgL_newzd2catzd2_1715 = BGl_symbol3677z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1718;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1724;int BgL_kz00_1725;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1724 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7114;
BgL_auxz00_7114 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7114,BFALSE,BFALSE);} 
BgL_kz00_1725 = 
(int)(BgL_arg1281z00_134); 
{ /* Llib/sparql.scm 91 */
int BgL_l2887z00_3686;
BgL_l2887z00_3686 = 
VECTOR_LENGTH(BgL_vectorz00_1724); 
if(
BOUND_CHECK(BgL_kz00_1725, BgL_l2887z00_3686))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1718 = 
VECTOR_REF(BgL_vectorz00_1724,BgL_kz00_1725); }  else 
{ 
obj_t BgL_auxz00_7123;
BgL_auxz00_7123 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1724, 
BINT(BgL_kz00_1725), 
BINT(BgL_l2887z00_3686)); 
FAILURE(BgL_auxz00_7123,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1719;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1720;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1721;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1727;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7129;
if(
INTEGERP(BgL_statez00_1718))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7129 = BgL_statez00_1718
; }  else 
{ 
obj_t BgL_auxz00_7132;
BgL_auxz00_7132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1718); 
FAILURE(BgL_auxz00_7132,BFALSE,BFALSE);} 
BgL_kz00_1727 = 
CINT(BgL_auxz00_7129); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2891z00_3690;
BgL_l2891z00_3690 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1727, BgL_l2891z00_3690))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1721 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1727); }  else 
{ 
obj_t BgL_auxz00_7141;
BgL_auxz00_7141 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1727), 
BINT(BgL_l2891z00_3690)); 
FAILURE(BgL_auxz00_7141,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7147;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_7148;
if(
PAIRP(BgL_arg1421z00_1721))
{ /* Llib/sparql.scm 91 */
BgL_testz00_7148 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_7148 = 
NULLP(BgL_arg1421z00_1721)
; } 
if(BgL_testz00_7148)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7147 = BgL_arg1421z00_1721
; }  else 
{ 
obj_t BgL_auxz00_7152;
BgL_auxz00_7152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1721); 
FAILURE(BgL_auxz00_7152,BFALSE,BFALSE);} } 
BgL_arg1418z00_1720 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1715, BgL_auxz00_7147); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1728;
if(
PAIRP(BgL_arg1418z00_1720))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1728 = BgL_arg1418z00_1720; }  else 
{ 
obj_t BgL_auxz00_7159;
BgL_auxz00_7159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1720); 
FAILURE(BgL_auxz00_7159,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1719 = 
CDR(BgL_pairz00_1728); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1722;
BgL_newzd2spzd2_1722 = 
(BgL_arg1281z00_134+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1732;int BgL_kz00_1733;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1732 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7167;
BgL_auxz00_7167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7167,BFALSE,BFALSE);} 
BgL_kz00_1733 = 
(int)(BgL_newzd2spzd2_1722); 
{ /* Llib/sparql.scm 91 */
int BgL_l2895z00_3694;
BgL_l2895z00_3694 = 
VECTOR_LENGTH(BgL_vectorz00_1732); 
if(
BOUND_CHECK(BgL_kz00_1733, BgL_l2895z00_3694))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1732,BgL_kz00_1733,BgL_newzd2statezd2_1719); }  else 
{ 
obj_t BgL_auxz00_7176;
BgL_auxz00_7176 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1733), BgL_vectorz00_1732, 
BINT(BgL_l2895z00_3694)); 
FAILURE(BgL_auxz00_7176,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1723;
BgL_arg1412z00_1723 = 
(BgL_newzd2spzd2_1722-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1738;int BgL_kz00_1739;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1738 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7185;
BgL_auxz00_7185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7185,BFALSE,BFALSE);} 
BgL_kz00_1739 = 
(int)(BgL_arg1412z00_1723); 
{ /* Llib/sparql.scm 91 */
int BgL_l2899z00_3698;
BgL_l2899z00_3698 = 
VECTOR_LENGTH(BgL_vectorz00_1738); 
if(
BOUND_CHECK(BgL_kz00_1739, BgL_l2899z00_3698))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1738,BgL_kz00_1739,BgL_arg1378z00_135); }  else 
{ 
obj_t BgL_auxz00_7194;
BgL_auxz00_7194 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1739), BgL_vectorz00_1738, 
BINT(BgL_l2899z00_3698)); 
FAILURE(BgL_auxz00_7194,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1722); } } } } } } } break;case ((long)10) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_namednodez00_137;
{ /* Llib/sparql.scm 91 */
long BgL_arg1397z00_140;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1741;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7201;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7201 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_7204;
BgL_auxz00_7204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_7204,BFALSE,BFALSE);} 
BgL_za71za7_1741 = 
(long)CINT(BgL_auxz00_7201); } 
BgL_arg1397z00_140 = 
(BgL_za71za7_1741-((long)1)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1744;int BgL_kz00_1745;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1744 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7212;
BgL_auxz00_7212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7212,BFALSE,BFALSE);} 
BgL_kz00_1745 = 
(int)(BgL_arg1397z00_140); 
BgL_namednodez00_137 = 
VECTOR_REF(BgL_vectorz00_1744,BgL_kz00_1745); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1388z00_138;obj_t BgL_arg1391z00_139;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1746;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7218;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7218 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_7221;
BgL_auxz00_7221 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_7221,BFALSE,BFALSE);} 
BgL_za71za7_1746 = 
(long)CINT(BgL_auxz00_7218); } 
BgL_arg1388z00_138 = 
(BgL_za71za7_1746-((long)2)); } 
{ /* Llib/sparql.scm 91 */

BgL_arg1391z00_139 = BgL_namednodez00_137; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1751;
BgL_newzd2catzd2_1751 = BGl_symbol3677z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1754;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1760;int BgL_kz00_1761;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1760 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7229;
BgL_auxz00_7229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7229,BFALSE,BFALSE);} 
BgL_kz00_1761 = 
(int)(BgL_arg1388z00_138); 
{ /* Llib/sparql.scm 91 */
int BgL_l2903z00_3702;
BgL_l2903z00_3702 = 
VECTOR_LENGTH(BgL_vectorz00_1760); 
if(
BOUND_CHECK(BgL_kz00_1761, BgL_l2903z00_3702))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1754 = 
VECTOR_REF(BgL_vectorz00_1760,BgL_kz00_1761); }  else 
{ 
obj_t BgL_auxz00_7238;
BgL_auxz00_7238 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1760, 
BINT(BgL_kz00_1761), 
BINT(BgL_l2903z00_3702)); 
FAILURE(BgL_auxz00_7238,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1755;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1756;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1757;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1763;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7244;
if(
INTEGERP(BgL_statez00_1754))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7244 = BgL_statez00_1754
; }  else 
{ 
obj_t BgL_auxz00_7247;
BgL_auxz00_7247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1754); 
FAILURE(BgL_auxz00_7247,BFALSE,BFALSE);} 
BgL_kz00_1763 = 
CINT(BgL_auxz00_7244); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2907z00_3706;
BgL_l2907z00_3706 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1763, BgL_l2907z00_3706))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1757 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1763); }  else 
{ 
obj_t BgL_auxz00_7256;
BgL_auxz00_7256 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1763), 
BINT(BgL_l2907z00_3706)); 
FAILURE(BgL_auxz00_7256,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7262;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_7263;
if(
PAIRP(BgL_arg1421z00_1757))
{ /* Llib/sparql.scm 91 */
BgL_testz00_7263 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_7263 = 
NULLP(BgL_arg1421z00_1757)
; } 
if(BgL_testz00_7263)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7262 = BgL_arg1421z00_1757
; }  else 
{ 
obj_t BgL_auxz00_7267;
BgL_auxz00_7267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1757); 
FAILURE(BgL_auxz00_7267,BFALSE,BFALSE);} } 
BgL_arg1418z00_1756 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1751, BgL_auxz00_7262); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1764;
if(
PAIRP(BgL_arg1418z00_1756))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1764 = BgL_arg1418z00_1756; }  else 
{ 
obj_t BgL_auxz00_7274;
BgL_auxz00_7274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1756); 
FAILURE(BgL_auxz00_7274,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1755 = 
CDR(BgL_pairz00_1764); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1758;
BgL_newzd2spzd2_1758 = 
(BgL_arg1388z00_138+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1768;int BgL_kz00_1769;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1768 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7282;
BgL_auxz00_7282 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7282,BFALSE,BFALSE);} 
BgL_kz00_1769 = 
(int)(BgL_newzd2spzd2_1758); 
{ /* Llib/sparql.scm 91 */
int BgL_l2911z00_3710;
BgL_l2911z00_3710 = 
VECTOR_LENGTH(BgL_vectorz00_1768); 
if(
BOUND_CHECK(BgL_kz00_1769, BgL_l2911z00_3710))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1768,BgL_kz00_1769,BgL_newzd2statezd2_1755); }  else 
{ 
obj_t BgL_auxz00_7291;
BgL_auxz00_7291 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1769), BgL_vectorz00_1768, 
BINT(BgL_l2911z00_3710)); 
FAILURE(BgL_auxz00_7291,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1759;
BgL_arg1412z00_1759 = 
(BgL_newzd2spzd2_1758-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1774;int BgL_kz00_1775;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1774 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7300;
BgL_auxz00_7300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7300,BFALSE,BFALSE);} 
BgL_kz00_1775 = 
(int)(BgL_arg1412z00_1759); 
{ /* Llib/sparql.scm 91 */
int BgL_l2915z00_3714;
BgL_l2915z00_3714 = 
VECTOR_LENGTH(BgL_vectorz00_1774); 
if(
BOUND_CHECK(BgL_kz00_1775, BgL_l2915z00_3714))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1774,BgL_kz00_1775,BgL_arg1391z00_139); }  else 
{ 
obj_t BgL_auxz00_7309;
BgL_auxz00_7309 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1775), BgL_vectorz00_1774, 
BINT(BgL_l2915z00_3714)); 
FAILURE(BgL_auxz00_7309,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1758); } } } } } } } break;case ((long)11) : 

{ /* Llib/sparql.scm 91 */
obj_t BgL_litteralz00_141;
{ /* Llib/sparql.scm 91 */
long BgL_arg1409z00_144;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1777;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7316;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7316 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_7319;
BgL_auxz00_7319 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_7319,BFALSE,BFALSE);} 
BgL_za71za7_1777 = 
(long)CINT(BgL_auxz00_7316); } 
BgL_arg1409z00_144 = 
(BgL_za71za7_1777-((long)1)); } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1780;int BgL_kz00_1781;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1780 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7327;
BgL_auxz00_7327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7327,BFALSE,BFALSE);} 
BgL_kz00_1781 = 
(int)(BgL_arg1409z00_144); 
BgL_litteralz00_141 = 
VECTOR_REF(BgL_vectorz00_1780,BgL_kz00_1781); } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1400z00_142;obj_t BgL_arg1403z00_143;
{ /* Llib/sparql.scm 91 */
long BgL_za71za7_1782;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7333;
if(
INTEGERP(BgL___spz00_81))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7333 = BgL___spz00_81
; }  else 
{ 
obj_t BgL_auxz00_7336;
BgL_auxz00_7336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL___spz00_81); 
FAILURE(BgL_auxz00_7336,BFALSE,BFALSE);} 
BgL_za71za7_1782 = 
(long)CINT(BgL_auxz00_7333); } 
BgL_arg1400z00_142 = 
(BgL_za71za7_1782-((long)2)); } 
{ /* Llib/sparql.scm 91 */

BgL_arg1403z00_143 = BgL_litteralz00_141; } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2catzd2_1787;
BgL_newzd2catzd2_1787 = BGl_symbol3677z00zzsparqlz00; 
{ /* Llib/sparql.scm 91 */
obj_t BgL_statez00_1790;
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1796;int BgL_kz00_1797;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1796 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7344;
BgL_auxz00_7344 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7344,BFALSE,BFALSE);} 
BgL_kz00_1797 = 
(int)(BgL_arg1400z00_142); 
{ /* Llib/sparql.scm 91 */
int BgL_l2919z00_3718;
BgL_l2919z00_3718 = 
VECTOR_LENGTH(BgL_vectorz00_1796); 
if(
BOUND_CHECK(BgL_kz00_1797, BgL_l2919z00_3718))
{ /* Llib/sparql.scm 91 */
BgL_statez00_1790 = 
VECTOR_REF(BgL_vectorz00_1796,BgL_kz00_1797); }  else 
{ 
obj_t BgL_auxz00_7353;
BgL_auxz00_7353 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL_vectorz00_1796, 
BINT(BgL_kz00_1797), 
BINT(BgL_l2919z00_3718)); 
FAILURE(BgL_auxz00_7353,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_newzd2statezd2_1791;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1418z00_1792;
{ /* Llib/sparql.scm 91 */
obj_t BgL_arg1421z00_1793;
{ /* Llib/sparql.scm 91 */
int BgL_kz00_1799;
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7359;
if(
INTEGERP(BgL_statez00_1790))
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7359 = BgL_statez00_1790
; }  else 
{ 
obj_t BgL_auxz00_7362;
BgL_auxz00_7362 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_statez00_1790); 
FAILURE(BgL_auxz00_7362,BFALSE,BFALSE);} 
BgL_kz00_1799 = 
CINT(BgL_auxz00_7359); } 
{ /* Llib/sparql.scm 91 */
int BgL_l2923z00_3722;
BgL_l2923z00_3722 = 
VECTOR_LENGTH(BgL___gotozd2tablezd2_3447); 
if(
BOUND_CHECK(BgL_kz00_1799, BgL_l2923z00_3722))
{ /* Llib/sparql.scm 91 */
BgL_arg1421z00_1793 = 
VECTOR_REF(BgL___gotozd2tablezd2_3447,BgL_kz00_1799); }  else 
{ 
obj_t BgL_auxz00_7371;
BgL_auxz00_7371 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3739z00zzsparqlz00, BgL___gotozd2tablezd2_3447, 
BINT(BgL_kz00_1799), 
BINT(BgL_l2923z00_3722)); 
FAILURE(BgL_auxz00_7371,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_auxz00_7377;
{ /* Llib/sparql.scm 91 */
bool_t BgL_testz00_7378;
if(
PAIRP(BgL_arg1421z00_1793))
{ /* Llib/sparql.scm 91 */
BgL_testz00_7378 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 91 */
BgL_testz00_7378 = 
NULLP(BgL_arg1421z00_1793)
; } 
if(BgL_testz00_7378)
{ /* Llib/sparql.scm 91 */
BgL_auxz00_7377 = BgL_arg1421z00_1793
; }  else 
{ 
obj_t BgL_auxz00_7382;
BgL_auxz00_7382 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1421z00_1793); 
FAILURE(BgL_auxz00_7382,BFALSE,BFALSE);} } 
BgL_arg1418z00_1792 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_newzd2catzd2_1787, BgL_auxz00_7377); } } 
{ /* Llib/sparql.scm 91 */
obj_t BgL_pairz00_1800;
if(
PAIRP(BgL_arg1418z00_1792))
{ /* Llib/sparql.scm 91 */
BgL_pairz00_1800 = BgL_arg1418z00_1792; }  else 
{ 
obj_t BgL_auxz00_7389;
BgL_auxz00_7389 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg1418z00_1792); 
FAILURE(BgL_auxz00_7389,BFALSE,BFALSE);} 
BgL_newzd2statezd2_1791 = 
CDR(BgL_pairz00_1800); } } 
{ /* Llib/sparql.scm 91 */
long BgL_newzd2spzd2_1794;
BgL_newzd2spzd2_1794 = 
(BgL_arg1400z00_142+((long)2)); 
{ /* Llib/sparql.scm 91 */

{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1804;int BgL_kz00_1805;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1804 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7397;
BgL_auxz00_7397 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7397,BFALSE,BFALSE);} 
BgL_kz00_1805 = 
(int)(BgL_newzd2spzd2_1794); 
{ /* Llib/sparql.scm 91 */
int BgL_l2927z00_3726;
BgL_l2927z00_3726 = 
VECTOR_LENGTH(BgL_vectorz00_1804); 
if(
BOUND_CHECK(BgL_kz00_1805, BgL_l2927z00_3726))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1804,BgL_kz00_1805,BgL_newzd2statezd2_1791); }  else 
{ 
obj_t BgL_auxz00_7406;
BgL_auxz00_7406 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1805), BgL_vectorz00_1804, 
BINT(BgL_l2927z00_3726)); 
FAILURE(BgL_auxz00_7406,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 91 */
long BgL_arg1412z00_1795;
BgL_arg1412z00_1795 = 
(BgL_newzd2spzd2_1794-((long)1)); 
{ /* Llib/sparql.scm 91 */
obj_t BgL_vectorz00_1810;int BgL_kz00_1811;
if(
VECTORP(BgL___stackz00_80))
{ /* Llib/sparql.scm 91 */
BgL_vectorz00_1810 = BgL___stackz00_80; }  else 
{ 
obj_t BgL_auxz00_7415;
BgL_auxz00_7415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3736z00zzsparqlz00, BGl_string3738z00zzsparqlz00, BgL___stackz00_80); 
FAILURE(BgL_auxz00_7415,BFALSE,BFALSE);} 
BgL_kz00_1811 = 
(int)(BgL_arg1412z00_1795); 
{ /* Llib/sparql.scm 91 */
int BgL_l2931z00_3730;
BgL_l2931z00_3730 = 
VECTOR_LENGTH(BgL_vectorz00_1810); 
if(
BOUND_CHECK(BgL_kz00_1811, BgL_l2931z00_3730))
{ /* Llib/sparql.scm 91 */
VECTOR_SET(BgL_vectorz00_1810,BgL_kz00_1811,BgL_arg1403z00_143); }  else 
{ 
obj_t BgL_auxz00_7424;
BgL_auxz00_7424 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2506)), BGl_string3742z00zzsparqlz00, 
BINT(BgL_kz00_1811), BgL_vectorz00_1810, 
BINT(BgL_l2931z00_3730)); 
FAILURE(BgL_auxz00_7424,BFALSE,BFALSE);} } } } 
BgL_aux2651z00_3325 = 
BINT(BgL_newzd2spzd2_1794); } } } } } } } break;
default: 
BgL_aux2651z00_3325 = BUNSPEC; } }  else 
{ /* Llib/sparql.scm 91 */
BgL_aux2651z00_3325 = BUNSPEC; } 
BGL_ENV_POP_TRACE(BgL_env2654z00_3324); 
return BgL_aux2651z00_3325;} } } } } } 
}



/* append-21010 */
obj_t BGl_appendzd221010zd2zzsparqlz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
{ AN_OBJECT;
{ 
{ 
obj_t BgL_name2664z00_3334;obj_t BgL_env2666z00_3336;
BgL_name2664z00_3334 = BGl_symbol3743z00zzsparqlz00; 
BgL_env2666z00_3336 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ 

BGL_ENV_PUSH_TRACE(BgL_env2666z00_3336, BgL_name2664z00_3334, BFALSE); 
{ 
obj_t BgL_aux2663z00_3337;
{ 
obj_t BgL_headz00_755;
BgL_headz00_755 = 
MAKE_PAIR(BNIL, BgL_l2z00_2); 
{ 
obj_t BgL_prevz00_756;obj_t BgL_tailz00_757;
BgL_prevz00_756 = BgL_headz00_755; 
BgL_tailz00_757 = BgL_l1z00_1; 
BgL_loopz00_758:
if(
PAIRP(BgL_tailz00_757))
{ 
obj_t BgL_newzd2prevzd2_760;
BgL_newzd2prevzd2_760 = 
MAKE_PAIR(
CAR(BgL_tailz00_757), BgL_l2z00_2); 
SET_CDR(BgL_prevz00_756, BgL_newzd2prevzd2_760); 
{ 
obj_t BgL_tailz00_7443;obj_t BgL_prevz00_7442;
BgL_prevz00_7442 = BgL_newzd2prevzd2_760; 
BgL_tailz00_7443 = 
CDR(BgL_tailz00_757); 
BgL_tailz00_757 = BgL_tailz00_7443; 
BgL_prevz00_756 = BgL_prevz00_7442; 
goto BgL_loopz00_758;} }  else 
{ BNIL; } 
BgL_aux2663z00_3337 = 
CDR(BgL_headz00_755); } } 
BGL_ENV_POP_TRACE(BgL_env2666z00_3336); 
return BgL_aux2663z00_3337;} } } } 
}



/* mlist */
BGL_EXPORTED_DEF obj_t BGl_mlistz00zzsparqlz00(obj_t BgL_listsz00_3)
{ AN_OBJECT;
{ /* Llib/sparql.scm 40 */
{ /* Llib/sparql.scm 41 */
obj_t BgL_name2668z00_3338;obj_t BgL_loc2669z00_3339;obj_t BgL_env2670z00_3340;
BgL_name2668z00_3338 = BGl_symbol3745z00zzsparqlz00; 
BgL_loc2669z00_3339 = BGl_list3747z00zzsparqlz00; 
BgL_env2670z00_3340 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 41 */

BGL_ENV_PUSH_TRACE(BgL_env2670z00_3340, BgL_name2668z00_3338, BgL_loc2669z00_3339); 
{ /* Llib/sparql.scm 41 */
obj_t BgL_aux2667z00_3341;
if(
PAIRP(BgL_listsz00_3))
{ /* Llib/sparql.scm 42 */
obj_t BgL_l1084z00_764;
{ /* Llib/sparql.scm 43 */
obj_t BgL_l1079z00_777;
BgL_l1079z00_777 = 
CAR(BgL_listsz00_3); 
if(
NULLP(BgL_l1079z00_777))
{ /* Llib/sparql.scm 43 */
BgL_l1084z00_764 = BNIL; }  else 
{ /* Llib/sparql.scm 43 */
obj_t BgL_head1081z00_779;
{ /* Llib/sparql.scm 43 */
obj_t BgL_res2541z00_2636;
BgL_res2541z00_2636 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1081z00_779 = BgL_res2541z00_2636; } 
{ 
obj_t BgL_l1079z00_781;obj_t BgL_tail1082z00_782;
BgL_l1079z00_781 = BgL_l1079z00_777; 
BgL_tail1082z00_782 = BgL_head1081z00_779; 
BgL_zc3anonymousza31798za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza343ze3z41_783:
if(
PAIRP(BgL_l1079z00_781))
{ /* Llib/sparql.scm 43 */
obj_t BgL_newtail1083z00_785;
{ /* Llib/sparql.scm 43 */
obj_t BgL_arg1801z00_787;
{ /* Llib/sparql.scm 43 */
obj_t BgL_vz00_788;
BgL_vz00_788 = 
CAR(BgL_l1079z00_781); 
{ /* Llib/sparql.scm 44 */
obj_t BgL_l1074z00_789;
BgL_l1074z00_789 = 
BGl_mlistz00zzsparqlz00(
CDR(BgL_listsz00_3)); 
if(
NULLP(BgL_l1074z00_789))
{ /* Llib/sparql.scm 44 */
BgL_arg1801z00_787 = BNIL; }  else 
{ /* Llib/sparql.scm 44 */
obj_t BgL_head1076z00_791;
{ /* Llib/sparql.scm 44 */
obj_t BgL_res2544z00_2645;
BgL_res2544z00_2645 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1076z00_791 = BgL_res2544z00_2645; } 
{ 
obj_t BgL_l1074z00_793;obj_t BgL_tail1077z00_794;
BgL_l1074z00_793 = BgL_l1074z00_789; 
BgL_tail1077z00_794 = BgL_head1076z00_791; 
BgL_zc3anonymousza31803za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza344ze3z41_795:
if(
PAIRP(BgL_l1074z00_793))
{ /* Llib/sparql.scm 44 */
obj_t BgL_newtail1078z00_797;
{ /* Llib/sparql.scm 44 */
obj_t BgL_arg1806z00_799;
BgL_arg1806z00_799 = 
MAKE_PAIR(BgL_vz00_788, 
CAR(BgL_l1074z00_793)); 
{ /* Llib/sparql.scm 44 */
obj_t BgL_res2546z00_2651;
BgL_res2546z00_2651 = 
MAKE_PAIR(BgL_arg1806z00_799, BNIL); 
BgL_newtail1078z00_797 = BgL_res2546z00_2651; } } 
SET_CDR(BgL_tail1077z00_794, BgL_newtail1078z00_797); 
{ 
obj_t BgL_tail1077z00_7471;obj_t BgL_l1074z00_7469;
BgL_l1074z00_7469 = 
CDR(BgL_l1074z00_793); 
BgL_tail1077z00_7471 = BgL_newtail1078z00_797; 
BgL_tail1077z00_794 = BgL_tail1077z00_7471; 
BgL_l1074z00_793 = BgL_l1074z00_7469; 
goto BgL_zc3anonymousza31803za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza344ze3z41_795;} }  else 
{ /* Llib/sparql.scm 44 */
if(
NULLP(BgL_l1074z00_793))
{ /* Llib/sparql.scm 44 */
BgL_arg1801z00_787 = 
CDR(BgL_head1076z00_791); }  else 
{ /* Llib/sparql.scm 44 */
BgL_arg1801z00_787 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1074z00_793, BGl_string3582z00zzsparqlz00, 
BINT(((long)1448))); } } } } } } 
{ /* Llib/sparql.scm 43 */
obj_t BgL_res2548z00_2660;
BgL_res2548z00_2660 = 
MAKE_PAIR(BgL_arg1801z00_787, BNIL); 
BgL_newtail1083z00_785 = BgL_res2548z00_2660; } } 
SET_CDR(BgL_tail1082z00_782, BgL_newtail1083z00_785); 
{ 
obj_t BgL_tail1082z00_7481;obj_t BgL_l1079z00_7479;
BgL_l1079z00_7479 = 
CDR(BgL_l1079z00_781); 
BgL_tail1082z00_7481 = BgL_newtail1083z00_785; 
BgL_tail1082z00_782 = BgL_tail1082z00_7481; 
BgL_l1079z00_781 = BgL_l1079z00_7479; 
goto BgL_zc3anonymousza31798za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza343ze3z41_783;} }  else 
{ /* Llib/sparql.scm 43 */
if(
NULLP(BgL_l1079z00_781))
{ /* Llib/sparql.scm 43 */
BgL_l1084z00_764 = 
CDR(BgL_head1081z00_779); }  else 
{ /* Llib/sparql.scm 43 */
BgL_l1084z00_764 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1079z00_781, BGl_string3582z00zzsparqlz00, 
BINT(((long)1427))); } } } } } 
if(
NULLP(BgL_l1084z00_764))
{ /* Llib/sparql.scm 42 */
BgL_aux2667z00_3341 = BNIL; }  else 
{ /* Llib/sparql.scm 42 */
obj_t BgL_g1087z00_766;obj_t BgL_g1088z00_767;
{ /* Llib/sparql.scm 42 */
obj_t BgL_pairz00_2669;
if(
PAIRP(BgL_l1084z00_764))
{ /* Llib/sparql.scm 42 */
BgL_pairz00_2669 = BgL_l1084z00_764; }  else 
{ 
obj_t BgL_auxz00_7491;
BgL_auxz00_7491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)1421)), BGl_string3750z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_l1084z00_764); 
FAILURE(BgL_auxz00_7491,BFALSE,BFALSE);} 
BgL_g1087z00_766 = 
CDR(BgL_pairz00_2669); } 
{ /* Llib/sparql.scm 42 */
obj_t BgL_pairz00_2670;
if(
PAIRP(BgL_l1084z00_764))
{ /* Llib/sparql.scm 42 */
BgL_pairz00_2670 = BgL_l1084z00_764; }  else 
{ 
obj_t BgL_auxz00_7498;
BgL_auxz00_7498 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)1421)), BGl_string3750z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_l1084z00_764); 
FAILURE(BgL_auxz00_7498,BFALSE,BFALSE);} 
BgL_g1088z00_767 = 
CAR(BgL_pairz00_2670); } 
{ 
obj_t BgL_l1084z00_2690;obj_t BgL_ans1085z00_2691;
BgL_l1084z00_2690 = BgL_g1087z00_766; 
BgL_ans1085z00_2691 = BgL_g1088z00_767; 
BgL_zc3anonymousza31792za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza342ze3z41_2689:
if(
PAIRP(BgL_l1084z00_2690))
{ /* Llib/sparql.scm 42 */
obj_t BgL_arg1794z00_2697;obj_t BgL_arg1795z00_2698;
BgL_arg1794z00_2697 = 
CDR(BgL_l1084z00_2690); 
{ /* Llib/sparql.scm 42 */
obj_t BgL_arg1796z00_2699;
BgL_arg1796z00_2699 = 
CAR(BgL_l1084z00_2690); 
{ /* Llib/sparql.scm 42 */
obj_t BgL_auxz00_7507;
{ /* Llib/sparql.scm 42 */
bool_t BgL_testz00_7508;
if(
PAIRP(BgL_arg1796z00_2699))
{ /* Llib/sparql.scm 42 */
BgL_testz00_7508 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 42 */
BgL_testz00_7508 = 
NULLP(BgL_arg1796z00_2699)
; } 
if(BgL_testz00_7508)
{ /* Llib/sparql.scm 42 */
BgL_auxz00_7507 = BgL_arg1796z00_2699
; }  else 
{ 
obj_t BgL_auxz00_7512;
BgL_auxz00_7512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)1421)), BGl_string3751z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_arg1796z00_2699); 
FAILURE(BgL_auxz00_7512,BFALSE,BFALSE);} } 
BgL_arg1795z00_2698 = 
BGl_appendzd221010zd2zzsparqlz00(BgL_auxz00_7507, BgL_ans1085z00_2691); } } 
{ 
obj_t BgL_ans1085z00_7518;obj_t BgL_l1084z00_7517;
BgL_l1084z00_7517 = BgL_arg1794z00_2697; 
BgL_ans1085z00_7518 = BgL_arg1795z00_2698; 
BgL_ans1085z00_2691 = BgL_ans1085z00_7518; 
BgL_l1084z00_2690 = BgL_l1084z00_7517; 
goto BgL_zc3anonymousza31792za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza342ze3z41_2689;} }  else 
{ /* Llib/sparql.scm 42 */
BgL_aux2667z00_3341 = BgL_ans1085z00_2691; } } } }  else 
{ /* Llib/sparql.scm 41 */
BgL_aux2667z00_3341 = BGl_list3752z00zzsparqlz00; } 
BGL_ENV_POP_TRACE(BgL_env2670z00_3340); 
return BgL_aux2667z00_3341;} } } } 
}



/* &mlist */
obj_t BGl_z62mlistz62zzsparqlz00(obj_t BgL_envz00_3451, obj_t BgL_listsz00_3452)
{ AN_OBJECT;
{ /* Llib/sparql.scm 40 */
return 
BGl_mlistz00zzsparqlz00(BgL_listsz00_3452);} 
}



/* _tee */
obj_t BGl__teez00zzsparqlz00(obj_t BgL_envz00_8, obj_t BgL_optz00_7)
{ AN_OBJECT;
{ /* Llib/sparql.scm 51 */
{ /* Llib/sparql.scm 51 */
obj_t BgL_name2672z00_3342;obj_t BgL_loc2673z00_3343;obj_t BgL_env2674z00_3344;
BgL_name2672z00_3342 = BGl_symbol3753z00zzsparqlz00; 
BgL_loc2673z00_3343 = BGl_list3755z00zzsparqlz00; 
BgL_env2674z00_3344 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 51 */

BGL_ENV_PUSH_TRACE(BgL_env2674z00_3344, BgL_name2672z00_3342, BgL_loc2673z00_3343); 
{ /* Llib/sparql.scm 51 */
obj_t BgL_aux2671z00_3345;
{ /* Llib/sparql.scm 51 */
obj_t BgL_inputz00_806;obj_t BgL_outputz00_807;
BgL_inputz00_806 = 
VECTOR_REF(BgL_optz00_7,
(int)(((long)0))); 
BgL_outputz00_807 = 
VECTOR_REF(BgL_optz00_7,
(int)(((long)1))); 
{ 

{ /* Llib/sparql.scm 51 */
int BgL_aux1162z00_809;
BgL_aux1162z00_809 = 
VECTOR_LENGTH(BgL_optz00_7); 
switch( 
(long)(BgL_aux1162z00_809)) { case ((long)2) : 

{ /* Llib/sparql.scm 51 */

BgL_aux2671z00_3345 = 
BGl_teez00zzsparqlz00(
VECTOR_REF(BgL_optz00_7,
(int)(((long)0))), 
VECTOR_REF(BgL_optz00_7,
(int)(((long)1))), BTRUE); } break;case ((long)3) : 

{ /* Llib/sparql.scm 51 */
obj_t BgL_activez00_814;
BgL_activez00_814 = 
VECTOR_REF(BgL_optz00_7,
(int)(((long)2))); 
{ /* Llib/sparql.scm 51 */

BgL_aux2671z00_3345 = 
BGl_teez00zzsparqlz00(
VECTOR_REF(BgL_optz00_7,
(int)(((long)0))), 
VECTOR_REF(BgL_optz00_7,
(int)(((long)1))), BgL_activez00_814); } } break;
default: 
{ /* Llib/sparql.scm 51 */
int BgL_arg1815z00_817;
BgL_arg1815z00_817 = 
VECTOR_LENGTH(BgL_optz00_7); 
BgL_aux2671z00_3345 = 
BGl_errorzf2locationzf2zz__errorz00(BGl_symbol3756z00zzsparqlz00, BGl_string3758z00zzsparqlz00, 
BINT(BgL_arg1815z00_817), BGl_string3582z00zzsparqlz00, 
BINT(((long)1567))); } } } } } 
BGL_ENV_POP_TRACE(BgL_env2674z00_3344); 
return BgL_aux2671z00_3345;} } } } 
}



/* tee */
BGL_EXPORTED_DEF obj_t BGl_teez00zzsparqlz00(obj_t BgL_inputz00_4, obj_t BgL_outputz00_5, obj_t BgL_activez00_6)
{ AN_OBJECT;
{ /* Llib/sparql.scm 51 */
{ /* Llib/sparql.scm 54 */
obj_t BgL_name2676z00_3346;obj_t BgL_loc2677z00_3347;obj_t BgL_env2678z00_3348;
BgL_name2676z00_3346 = BGl_symbol3759z00zzsparqlz00; 
BgL_loc2677z00_3347 = BGl_list3761z00zzsparqlz00; 
BgL_env2678z00_3348 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 54 */

BGL_ENV_PUSH_TRACE(BgL_env2678z00_3348, BgL_name2676z00_3346, BgL_loc2677z00_3347); 
{ /* Llib/sparql.scm 54 */
obj_t BgL_aux2675z00_3349;
{ /* Llib/sparql.scm 54 */
obj_t BgL_zc3anonymousza31817za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza352ze3z41_3453;
BgL_zc3anonymousza31817za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza352ze3z41_3453 = 
MAKE_FX_PROCEDURE(BGl_z62zc3anonymousza31817za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza352ze3z23zzsparqlz00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3anonymousza31817za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza352ze3z41_3453, 
(int)(((long)0)), BgL_inputz00_4); 
PROCEDURE_SET(BgL_zc3anonymousza31817za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza352ze3z41_3453, 
(int)(((long)1)), BgL_outputz00_5); 
PROCEDURE_SET(BgL_zc3anonymousza31817za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza352ze3z41_3453, 
(int)(((long)2)), BgL_activez00_6); 
{ /* Llib/sparql.scm 52 */

BgL_aux2675z00_3349 = 
BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_zc3anonymousza31817za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza352ze3z41_3453, BTRUE); } } 
BGL_ENV_POP_TRACE(BgL_env2678z00_3348); 
return BgL_aux2675z00_3349;} } } } 
}



/* &<anonymous:1817:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:52> */
obj_t BGl_z62zc3anonymousza31817za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza352ze3z23zzsparqlz00(obj_t BgL_envz00_3454)
{ AN_OBJECT;
{ /* Llib/sparql.scm 53 */
{ /* Llib/sparql.scm 54 */
obj_t BgL_inputz00_3455;obj_t BgL_outputz00_3456;obj_t BgL_activez00_3457;
BgL_inputz00_3455 = 
PROCEDURE_REF(BgL_envz00_3454, 
(int)(((long)0))); 
BgL_outputz00_3456 = 
PROCEDURE_REF(BgL_envz00_3454, 
(int)(((long)1))); 
BgL_activez00_3457 = 
PROCEDURE_REF(BgL_envz00_3454, 
(int)(((long)2))); 
{ 

{ /* Llib/sparql.scm 54 */
obj_t BgL_cz00_822;
BgL_cz00_822 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_inputz00_3455); 
{ /* Llib/sparql.scm 55 */
bool_t BgL_testz00_7567;
{ /* Llib/sparql.scm 55 */
bool_t BgL_res2554z00_2705;
BgL_res2554z00_2705 = 
EOF_OBJECTP(BgL_cz00_822); 
BgL_testz00_7567 = BgL_res2554z00_2705; } 
if(BgL_testz00_7567)
{ /* Llib/sparql.scm 55 */
{ /* Llib/sparql.scm 62 */
obj_t BgL_port1090z00_824;
{ /* Llib/sparql.scm 62 */
obj_t BgL_res2555z00_2707;
{ /* Llib/sparql.scm 62 */
obj_t BgL_auxz00_7569;
BgL_auxz00_7569 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2555z00_2707 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_7569); } 
BgL_port1090z00_824 = BgL_res2555z00_2707; } 
BGL_DISPLAY_STRING(BGl_string3762z00zzsparqlz00, BgL_port1090z00_824); 
bgl_display_char(((unsigned char)'\n'), BgL_port1090z00_824); } 
return BFALSE;}  else 
{ /* Llib/sparql.scm 55 */
if(
CBOOL(BgL_activez00_3457))
{ /* Llib/sparql.scm 57 */
{ /* Llib/sparql.scm 59 */
unsigned char BgL_charz00_2711;obj_t BgL_portz00_2712;
{ /* Llib/sparql.scm 59 */
obj_t BgL_auxz00_7576;
if(
CHARP(BgL_cz00_822))
{ /* Llib/sparql.scm 59 */
BgL_auxz00_7576 = BgL_cz00_822
; }  else 
{ 
obj_t BgL_auxz00_7579;
BgL_auxz00_7579 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)1844)), BGl_string3763z00zzsparqlz00, BGl_string3764z00zzsparqlz00, BgL_cz00_822); 
FAILURE(BgL_auxz00_7579,BFALSE,BFALSE);} 
BgL_charz00_2711 = 
CCHAR(BgL_auxz00_7576); } 
if(
OUTPUT_PORTP(BgL_outputz00_3456))
{ /* Llib/sparql.scm 59 */
BgL_portz00_2712 = BgL_outputz00_3456; }  else 
{ 
obj_t BgL_auxz00_7586;
BgL_auxz00_7586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)1844)), BGl_string3763z00zzsparqlz00, BGl_string3765z00zzsparqlz00, BgL_outputz00_3456); 
FAILURE(BgL_auxz00_7586,BFALSE,BFALSE);} 
bgl_display_char(BgL_charz00_2711, BgL_portz00_2712); } 
{ /* Llib/sparql.scm 60 */
obj_t BgL_portz00_2713;
if(
OUTPUT_PORTP(BgL_outputz00_3456))
{ /* Llib/sparql.scm 60 */
BgL_portz00_2713 = BgL_outputz00_3456; }  else 
{ 
obj_t BgL_auxz00_7593;
BgL_auxz00_7593 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)1911)), BGl_string3763z00zzsparqlz00, BGl_string3765z00zzsparqlz00, BgL_outputz00_3456); 
FAILURE(BgL_auxz00_7593,BFALSE,BFALSE);} 
FLUSH_OUTPUT_PORT(BgL_portz00_2713); } }  else 
{ /* Llib/sparql.scm 57 */BFALSE; } 
{ /* Llib/sparql.scm 61 */
obj_t BgL_list1819z00_825;
BgL_list1819z00_825 = 
MAKE_PAIR(BgL_cz00_822, BNIL); 
return 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list1819z00_825);} } } } } } } 
}



/* pipe */
BGL_EXPORTED_DEF obj_t BGl_pipez00zzsparqlz00(obj_t BgL_xz00_9, obj_t BgL_fsz00_10)
{ AN_OBJECT;
{ /* Llib/sparql.scm 65 */
{ /* Llib/sparql.scm 70 */
obj_t BgL_name2680z00_3350;obj_t BgL_loc2681z00_3351;obj_t BgL_env2682z00_3352;
BgL_name2680z00_3350 = BGl_symbol3766z00zzsparqlz00; 
BgL_loc2681z00_3351 = BGl_list3768z00zzsparqlz00; 
BgL_env2682z00_3352 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 70 */

BGL_ENV_PUSH_TRACE(BgL_env2682z00_3352, BgL_name2680z00_3350, BgL_loc2681z00_3351); 
{ /* Llib/sparql.scm 70 */
obj_t BgL_aux2679z00_3353;
{ 
obj_t BgL_xz00_2735;obj_t BgL_fsz00_2736;
BgL_xz00_2735 = BgL_xz00_9; 
BgL_fsz00_2736 = BgL_fsz00_10; 
BgL_pipezd2auxzd2_2734:
if(
PAIRP(BgL_fsz00_2736))
{ /* Llib/sparql.scm 70 */
obj_t BgL_arg1822z00_2742;obj_t BgL_arg1823z00_2743;
{ /* Llib/sparql.scm 70 */
obj_t BgL_fun1824z00_2744;
BgL_fun1824z00_2744 = 
CAR(BgL_fsz00_2736); 
{ /* Llib/sparql.scm 70 */
obj_t BgL_funz00_4192;
if(
PROCEDUREP(BgL_fun1824z00_2744))
{ /* Llib/sparql.scm 70 */
BgL_funz00_4192 = BgL_fun1824z00_2744; }  else 
{ 
obj_t BgL_auxz00_7607;
BgL_auxz00_7607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2147)), BGl_string3769z00zzsparqlz00, BGl_string3770z00zzsparqlz00, BgL_fun1824z00_2744); 
FAILURE(BgL_auxz00_7607,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4192, ((long)1)))
{ /* Llib/sparql.scm 70 */
BgL_arg1822z00_2742 = 
PROCEDURE_ENTRY(BgL_funz00_4192)(BgL_fun1824z00_2744, BgL_xz00_2735, BEOA); }  else 
{ /* Llib/sparql.scm 70 */
BGl_errorzf2locationzf2zz__errorz00(BGl_string3771z00zzsparqlz00, BGl_list3772z00zzsparqlz00, BgL_funz00_4192, BGl_string3582z00zzsparqlz00, 
BINT(((long)2147))); 
FAILURE(BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00);} } } 
BgL_arg1823z00_2743 = 
CDR(BgL_fsz00_2736); 
{ 
obj_t BgL_fsz00_7622;obj_t BgL_xz00_7621;
BgL_xz00_7621 = BgL_arg1822z00_2742; 
BgL_fsz00_7622 = BgL_arg1823z00_2743; 
BgL_fsz00_2736 = BgL_fsz00_7622; 
BgL_xz00_2735 = BgL_xz00_7621; 
goto BgL_pipezd2auxzd2_2734;} }  else 
{ /* Llib/sparql.scm 70 */
BgL_aux2679z00_3353 = BgL_xz00_2735; } } 
BGL_ENV_POP_TRACE(BgL_env2682z00_3352); 
return BgL_aux2679z00_3353;} } } } 
}



/* &pipe */
obj_t BGl_z62pipez62zzsparqlz00(obj_t BgL_envz00_3458, obj_t BgL_xz00_3459, obj_t BgL_fsz00_3460)
{ AN_OBJECT;
{ /* Llib/sparql.scm 65 */
return 
BGl_pipez00zzsparqlz00(BgL_xz00_3459, BgL_fsz00_3460);} 
}



/* pipe-map */
BGL_EXPORTED_DEF obj_t BGl_pipezd2mapzd2zzsparqlz00(obj_t BgL_xz00_11, obj_t BgL_fsz00_12)
{ AN_OBJECT;
{ /* Llib/sparql.scm 72 */
{ /* Llib/sparql.scm 74 */
obj_t BgL_name2684z00_3354;obj_t BgL_loc2685z00_3355;obj_t BgL_env2686z00_3356;
BgL_name2684z00_3354 = BGl_symbol3781z00zzsparqlz00; 
BgL_loc2685z00_3355 = BGl_list3783z00zzsparqlz00; 
BgL_env2686z00_3356 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 74 */

BGL_ENV_PUSH_TRACE(BgL_env2686z00_3356, BgL_name2684z00_3354, BgL_loc2685z00_3355); 
{ /* Llib/sparql.scm 74 */
obj_t BgL_aux2683z00_3357;
{ 
obj_t BgL_xz00_837;obj_t BgL_fsz00_838;
BgL_xz00_837 = BgL_xz00_11; 
BgL_fsz00_838 = BgL_fsz00_12; 
BgL_zc3anonymousza31825za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza377ze3z41_839:
if(
PAIRP(BgL_fsz00_838))
{ /* Llib/sparql.scm 75 */
obj_t BgL_arg1827z00_841;obj_t BgL_arg1828z00_842;
{ /* Llib/sparql.scm 75 */
obj_t BgL_fun1096z00_843;
BgL_fun1096z00_843 = 
CAR(BgL_fsz00_838); 
if(
NULLP(BgL_xz00_837))
{ /* Llib/sparql.scm 75 */
BgL_arg1827z00_841 = BNIL; }  else 
{ /* Llib/sparql.scm 75 */
obj_t BgL_head1093z00_846;
{ /* Llib/sparql.scm 75 */
obj_t BgL_res2562z00_2756;
BgL_res2562z00_2756 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1093z00_846 = BgL_res2562z00_2756; } 
{ 
obj_t BgL_l1091z00_848;obj_t BgL_tail1094z00_849;
BgL_l1091z00_848 = BgL_xz00_837; 
BgL_tail1094z00_849 = BgL_head1093z00_846; 
BgL_zc3anonymousza31830za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza375ze3z41_850:
if(
PAIRP(BgL_l1091z00_848))
{ /* Llib/sparql.scm 75 */
obj_t BgL_newtail1095z00_852;
{ /* Llib/sparql.scm 75 */
obj_t BgL_arg1833z00_854;
{ /* Llib/sparql.scm 75 */
obj_t BgL_arg1834z00_855;
BgL_arg1834z00_855 = 
CAR(BgL_l1091z00_848); 
{ /* Llib/sparql.scm 75 */
obj_t BgL_funz00_4197;
if(
PROCEDUREP(BgL_fun1096z00_843))
{ /* Llib/sparql.scm 75 */
BgL_funz00_4197 = BgL_fun1096z00_843; }  else 
{ 
obj_t BgL_auxz00_7638;
BgL_auxz00_7638 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2259)), BGl_string3784z00zzsparqlz00, BGl_string3770z00zzsparqlz00, BgL_fun1096z00_843); 
FAILURE(BgL_auxz00_7638,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4197, ((long)1)))
{ /* Llib/sparql.scm 75 */
BgL_arg1833z00_854 = 
PROCEDURE_ENTRY(BgL_funz00_4197)(BgL_fun1096z00_843, BgL_arg1834z00_855, BEOA); }  else 
{ /* Llib/sparql.scm 75 */
BGl_errorzf2locationzf2zz__errorz00(BGl_string3785z00zzsparqlz00, BGl_list3786z00zzsparqlz00, BgL_funz00_4197, BGl_string3582z00zzsparqlz00, 
BINT(((long)2259))); 
FAILURE(BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00);} } } 
{ /* Llib/sparql.scm 75 */
obj_t BgL_res2564z00_2762;
BgL_res2564z00_2762 = 
MAKE_PAIR(BgL_arg1833z00_854, BNIL); 
BgL_newtail1095z00_852 = BgL_res2564z00_2762; } } 
SET_CDR(BgL_tail1094z00_849, BgL_newtail1095z00_852); 
{ 
obj_t BgL_tail1094z00_7655;obj_t BgL_l1091z00_7653;
BgL_l1091z00_7653 = 
CDR(BgL_l1091z00_848); 
BgL_tail1094z00_7655 = BgL_newtail1095z00_852; 
BgL_tail1094z00_849 = BgL_tail1094z00_7655; 
BgL_l1091z00_848 = BgL_l1091z00_7653; 
goto BgL_zc3anonymousza31830za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza375ze3z41_850;} }  else 
{ /* Llib/sparql.scm 75 */
if(
NULLP(BgL_l1091z00_848))
{ /* Llib/sparql.scm 75 */
BgL_arg1827z00_841 = 
CDR(BgL_head1093z00_846); }  else 
{ /* Llib/sparql.scm 75 */
BgL_arg1827z00_841 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1091z00_848, BGl_string3582z00zzsparqlz00, 
BINT(((long)2259))); } } } } } 
BgL_arg1828z00_842 = 
CDR(BgL_fsz00_838); 
{ 
obj_t BgL_fsz00_7663;obj_t BgL_xz00_7662;
BgL_xz00_7662 = BgL_arg1827z00_841; 
BgL_fsz00_7663 = BgL_arg1828z00_842; 
BgL_fsz00_838 = BgL_fsz00_7663; 
BgL_xz00_837 = BgL_xz00_7662; 
goto BgL_zc3anonymousza31825za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza377ze3z41_839;} }  else 
{ /* Llib/sparql.scm 74 */
BgL_aux2683z00_3357 = BgL_xz00_837; } } 
BGL_ENV_POP_TRACE(BgL_env2686z00_3356); 
return BgL_aux2683z00_3357;} } } } 
}



/* &pipe-map */
obj_t BGl_z62pipezd2mapzb0zzsparqlz00(obj_t BgL_envz00_3461, obj_t BgL_xz00_3462, obj_t BgL_fsz00_3463)
{ AN_OBJECT;
{ /* Llib/sparql.scm 72 */
return 
BGl_pipezd2mapzd2zzsparqlz00(BgL_xz00_3462, BgL_fsz00_3463);} 
}



/* fold */
BGL_EXPORTED_DEF obj_t BGl_foldz00zzsparqlz00(obj_t BgL_fonctz00_13, obj_t BgL_accuz00_14, obj_t BgL_listz00_15)
{ AN_OBJECT;
{ /* Llib/sparql.scm 80 */
{ /* Llib/sparql.scm 81 */
obj_t BgL_name2688z00_3358;obj_t BgL_loc2689z00_3359;obj_t BgL_env2690z00_3360;
BgL_name2688z00_3358 = BGl_symbol3791z00zzsparqlz00; 
BgL_loc2689z00_3359 = BGl_list3793z00zzsparqlz00; 
BgL_env2690z00_3360 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 81 */

BGL_ENV_PUSH_TRACE(BgL_env2690z00_3360, BgL_name2688z00_3358, BgL_loc2689z00_3359); 
{ /* Llib/sparql.scm 81 */
obj_t BgL_aux2687z00_3361;
if(
PAIRP(BgL_listz00_15))
{ /* Llib/sparql.scm 81 */
obj_t BgL_arg1837z00_2771;obj_t BgL_arg1838z00_2772;
{ /* Llib/sparql.scm 81 */
obj_t BgL_arg1839z00_2773;
BgL_arg1839z00_2773 = 
CAR(BgL_listz00_15); 
{ /* Llib/sparql.scm 81 */
obj_t BgL_funz00_4202;
if(
PROCEDUREP(BgL_fonctz00_13))
{ /* Llib/sparql.scm 81 */
BgL_funz00_4202 = BgL_fonctz00_13; }  else 
{ 
obj_t BgL_auxz00_7673;
BgL_auxz00_7673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2355)), BGl_string3794z00zzsparqlz00, BGl_string3770z00zzsparqlz00, BgL_fonctz00_13); 
FAILURE(BgL_auxz00_7673,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4202, ((long)2)))
{ /* Llib/sparql.scm 81 */
BgL_arg1837z00_2771 = 
PROCEDURE_ENTRY(BgL_funz00_4202)(BgL_fonctz00_13, BgL_accuz00_14, BgL_arg1839z00_2773, BEOA); }  else 
{ /* Llib/sparql.scm 81 */
BGl_errorzf2locationzf2zz__errorz00(BGl_string3795z00zzsparqlz00, BGl_list3796z00zzsparqlz00, BgL_funz00_4202, BGl_string3582z00zzsparqlz00, 
BINT(((long)2355))); 
FAILURE(BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00);} } } 
BgL_arg1838z00_2772 = 
CDR(BgL_listz00_15); 
if(
PAIRP(BgL_arg1838z00_2772))
{ /* Llib/sparql.scm 81 */
obj_t BgL_arg1837z00_2782;obj_t BgL_arg1838z00_2783;
{ /* Llib/sparql.scm 81 */
obj_t BgL_arg1839z00_2784;
BgL_arg1839z00_2784 = 
CAR(BgL_arg1838z00_2772); 
{ /* Llib/sparql.scm 81 */
obj_t BgL_funz00_4207;
if(
PROCEDUREP(BgL_fonctz00_13))
{ /* Llib/sparql.scm 81 */
BgL_funz00_4207 = BgL_fonctz00_13; }  else 
{ 
obj_t BgL_auxz00_7693;
BgL_auxz00_7693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)2355)), BGl_string3794z00zzsparqlz00, BGl_string3770z00zzsparqlz00, BgL_fonctz00_13); 
FAILURE(BgL_auxz00_7693,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4207, ((long)2)))
{ /* Llib/sparql.scm 81 */
BgL_arg1837z00_2782 = 
PROCEDURE_ENTRY(BgL_funz00_4207)(BgL_fonctz00_13, BgL_arg1837z00_2771, BgL_arg1839z00_2784, BEOA); }  else 
{ /* Llib/sparql.scm 81 */
BGl_errorzf2locationzf2zz__errorz00(BGl_string3795z00zzsparqlz00, BGl_list3796z00zzsparqlz00, BgL_funz00_4207, BGl_string3582z00zzsparqlz00, 
BINT(((long)2355))); 
FAILURE(BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00);} } } 
BgL_arg1838z00_2783 = 
CDR(BgL_arg1838z00_2772); 
BgL_aux2687z00_3361 = 
BGl_foldz00zzsparqlz00(BgL_fonctz00_13, BgL_arg1837z00_2782, BgL_arg1838z00_2783); }  else 
{ /* Llib/sparql.scm 81 */
BgL_aux2687z00_3361 = BgL_arg1837z00_2771; } }  else 
{ /* Llib/sparql.scm 81 */
BgL_aux2687z00_3361 = BgL_accuz00_14; } 
BGL_ENV_POP_TRACE(BgL_env2690z00_3360); 
return BgL_aux2687z00_3361;} } } } 
}



/* &fold */
obj_t BGl_z62foldz62zzsparqlz00(obj_t BgL_envz00_3464, obj_t BgL_fonctz00_3465, obj_t BgL_accuz00_3466, obj_t BgL_listz00_3467)
{ AN_OBJECT;
{ /* Llib/sparql.scm 80 */
return 
BGl_foldz00zzsparqlz00(BgL_fonctz00_3465, BgL_accuz00_3466, BgL_listz00_3467);} 
}



/* sparql-query */
BGL_EXPORTED_DEF obj_t BGl_sparqlzd2queryzd2zzsparqlz00(obj_t BgL_urlz00_16, obj_t BgL_mimez00_17, obj_t BgL_queryz00_18)
{ AN_OBJECT;
{ /* Llib/sparql.scm 127 */
{ /* Llib/sparql.scm 129 */
obj_t BgL_name2692z00_3362;obj_t BgL_loc2693z00_3363;obj_t BgL_env2694z00_3364;
BgL_name2692z00_3362 = BGl_symbol3803z00zzsparqlz00; 
BgL_loc2693z00_3363 = BGl_list3805z00zzsparqlz00; 
BgL_env2694z00_3364 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 129 */

BGL_ENV_PUSH_TRACE(BgL_env2694z00_3364, BgL_name2692z00_3362, BgL_loc2693z00_3363); 
{ /* Llib/sparql.scm 129 */
obj_t BgL_aux2691z00_3365;
{ /* Llib/sparql.scm 139 */
obj_t BgL_protocolz00_864;
BgL_protocolz00_864 = 
BGl_urlzd2parsezd2zz__urlz00(BgL_urlz00_16); 
{ /* Llib/sparql.scm 141 */
obj_t BgL_loginz00_865;obj_t BgL_hostz00_866;obj_t BgL_portz00_867;obj_t BgL_abspathz00_868;
{ /* Llib/sparql.scm 141 */
int BgL_auxz00_7714;
BgL_auxz00_7714 = 
(int)(((long)1)); 
BgL_loginz00_865 = 
BGL_MVALUES_VAL(BgL_auxz00_7714); } 
{ /* Llib/sparql.scm 141 */
int BgL_auxz00_7717;
BgL_auxz00_7717 = 
(int)(((long)2)); 
BgL_hostz00_866 = 
BGL_MVALUES_VAL(BgL_auxz00_7717); } 
{ /* Llib/sparql.scm 141 */
int BgL_auxz00_7720;
BgL_auxz00_7720 = 
(int)(((long)3)); 
BgL_portz00_867 = 
BGL_MVALUES_VAL(BgL_auxz00_7720); } 
{ /* Llib/sparql.scm 141 */
int BgL_auxz00_7723;
BgL_auxz00_7723 = 
(int)(((long)4)); 
BgL_abspathz00_868 = 
BGL_MVALUES_VAL(BgL_auxz00_7723); } 
{ /* Llib/sparql.scm 141 */
obj_t BgL_socketz00_869;
{ /* Llib/sparql.scm 144 */
obj_t BgL_arg1840z00_873;obj_t BgL_arg1841z00_874;
{ /* Llib/sparql.scm 144 */
obj_t BgL_arg1842z00_895;obj_t BgL_arg1843z00_896;
{ /* Llib/sparql.scm 144 */
obj_t BgL_arg1844z00_897;
BgL_arg1844z00_897 = 
MAKE_PAIR(BgL_hostz00_866, BNIL); 
BgL_arg1842z00_895 = 
MAKE_PAIR(BGl_keyword3807z00zzsparqlz00, BgL_arg1844z00_897); } 
{ /* Llib/sparql.scm 145 */
obj_t BgL_arg1845z00_898;obj_t BgL_arg1846z00_899;
{ /* Llib/sparql.scm 145 */
obj_t BgL_arg1847z00_900;
BgL_arg1847z00_900 = 
MAKE_PAIR(BgL_mimez00_17, BNIL); 
BgL_arg1845z00_898 = 
MAKE_PAIR(BGl_keyword3809z00zzsparqlz00, BgL_arg1847z00_900); } 
{ /* Llib/sparql.scm 146 */
obj_t BgL_arg1848z00_901;
{ /* Llib/sparql.scm 146 */
obj_t BgL_arg1849z00_902;
BgL_arg1849z00_902 = 
MAKE_PAIR(BGl_string3811z00zzsparqlz00, BNIL); 
BgL_arg1848z00_901 = 
MAKE_PAIR(BGl_keyword3812z00zzsparqlz00, BgL_arg1849z00_902); } 
BgL_arg1846z00_899 = 
MAKE_PAIR(BgL_arg1848z00_901, BNIL); } 
BgL_arg1843z00_896 = 
MAKE_PAIR(BgL_arg1845z00_898, BgL_arg1846z00_899); } 
BgL_arg1840z00_873 = 
MAKE_PAIR(BgL_arg1842z00_895, BgL_arg1843z00_896); } 
{ /* Llib/sparql.scm 148 */
obj_t BgL_arg1850z00_903;
{ /* Llib/sparql.scm 148 */
obj_t BgL_auxz00_7735;
if(
STRINGP(BgL_queryz00_18))
{ /* Llib/sparql.scm 148 */
BgL_auxz00_7735 = BgL_queryz00_18
; }  else 
{ 
obj_t BgL_auxz00_7738;
BgL_auxz00_7738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)4641)), BGl_string3814z00zzsparqlz00, BGl_string3815z00zzsparqlz00, BgL_queryz00_18); 
FAILURE(BgL_auxz00_7738,BFALSE,BFALSE);} 
BgL_arg1850z00_903 = 
BGl_urlzd2pathzd2encodez00zz__urlz00(BgL_auxz00_7735); } 
{ /* Llib/sparql.scm 147 */
obj_t BgL_auxz00_7743;
if(
STRINGP(BgL_abspathz00_868))
{ /* Llib/sparql.scm 147 */
BgL_auxz00_7743 = BgL_abspathz00_868
; }  else 
{ 
obj_t BgL_auxz00_7746;
BgL_auxz00_7746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)4555)), BGl_string3814z00zzsparqlz00, BGl_string3815z00zzsparqlz00, BgL_abspathz00_868); 
FAILURE(BgL_auxz00_7746,BFALSE,BFALSE);} 
BgL_arg1841z00_874 = 
string_append_3(BgL_auxz00_7743, BGl_string3816z00zzsparqlz00, BgL_arg1850z00_903); } } 
{ /* Llib/sparql.scm 141 */
obj_t BgL_methodz00_885;
BgL_methodz00_885 = BGl_symbol3817z00zzsparqlz00; 
BgL_socketz00_869 = 
BGl_httpz00zz__httpz00(BNIL, BFALSE, BFALSE, BUNSPEC, BFALSE, BgL_arg1840z00_873, BgL_hostz00_866, BGl_string3821z00zzsparqlz00, BFALSE, BFALSE, BgL_methodz00_885, BFALSE, BFALSE, BgL_arg1841z00_874, BgL_portz00_867, BGl_symbol3819z00zzsparqlz00, BFALSE, BFALSE, 
BINT(((long)0)), BFALSE); } } 
{ /* Llib/sparql.scm 141 */
obj_t BgL_inz00_870;
{ /* Llib/sparql.scm 149 */
obj_t BgL_res2568z00_2795;
{ /* Llib/sparql.scm 149 */
obj_t BgL_socketz00_2794;
if(
SOCKETP(BgL_socketz00_869))
{ /* Llib/sparql.scm 149 */
BgL_socketz00_2794 = BgL_socketz00_869; }  else 
{ 
obj_t BgL_auxz00_7755;
BgL_auxz00_7755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)4685)), BGl_string3814z00zzsparqlz00, BGl_string3822z00zzsparqlz00, BgL_socketz00_869); 
FAILURE(BgL_auxz00_7755,BFALSE,BFALSE);} 
BgL_res2568z00_2795 = 
SOCKET_INPUT(BgL_socketz00_2794); } 
BgL_inz00_870 = BgL_res2568z00_2795; } 
{ /* Llib/sparql.scm 149 */
obj_t BgL_outz00_871;
{ /* Llib/sparql.scm 150 */
obj_t BgL_res2569z00_2797;
{ /* Llib/sparql.scm 150 */
obj_t BgL_socketz00_2796;
if(
SOCKETP(BgL_socketz00_869))
{ /* Llib/sparql.scm 150 */
BgL_socketz00_2796 = BgL_socketz00_869; }  else 
{ 
obj_t BgL_auxz00_7762;
BgL_auxz00_7762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)4730)), BGl_string3814z00zzsparqlz00, BGl_string3822z00zzsparqlz00, BgL_socketz00_869); 
FAILURE(BgL_auxz00_7762,BFALSE,BFALSE);} 
BgL_res2569z00_2797 = 
SOCKET_OUTPUT(BgL_socketz00_2796); } 
BgL_outz00_871 = BgL_res2569z00_2797; } 
{ /* Llib/sparql.scm 150 */
obj_t BgL_responsez00_872;
BgL_responsez00_872 = 
BGl_httpzd2parsezd2responsez00zz__httpz00(BgL_inz00_870, BgL_outz00_871, BGl_proc3806z00zzsparqlz00); 
{ /* Llib/sparql.scm 151 */

{ /* Llib/sparql.scm 154 */
obj_t BgL_socketz00_2798;
if(
SOCKETP(BgL_socketz00_869))
{ /* Llib/sparql.scm 154 */
BgL_socketz00_2798 = BgL_socketz00_869; }  else 
{ 
obj_t BgL_auxz00_7770;
BgL_auxz00_7770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)4929)), BGl_string3814z00zzsparqlz00, BGl_string3822z00zzsparqlz00, BgL_socketz00_869); 
FAILURE(BgL_auxz00_7770,BFALSE,BFALSE);} 
socket_close(BgL_socketz00_2798); } 
BgL_aux2691z00_3365 = BgL_responsez00_872; } } } } } } } 
BGL_ENV_POP_TRACE(BgL_env2694z00_3364); 
return BgL_aux2691z00_3365;} } } } 
}



/* &sparql-query */
obj_t BGl_z62sparqlzd2queryzb0zzsparqlz00(obj_t BgL_envz00_3469, obj_t BgL_urlz00_3470, obj_t BgL_mimez00_3471, obj_t BgL_queryz00_3472)
{ AN_OBJECT;
{ /* Llib/sparql.scm 127 */
return 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_3470, BgL_mimez00_3471, BgL_queryz00_3472);} 
}



/* &parser */
obj_t BGl_z62parserz62zzsparqlz00(obj_t BgL_envz00_3473, obj_t BgL_inz00_3474, obj_t BgL_statusz00_3475, obj_t BgL_headerz00_3476, obj_t BgL_contentzd2lengthzd2_3477, obj_t BgL_encodingz00_3478)
{ AN_OBJECT;
{ /* Llib/sparql.scm 138 */
{ 
obj_t BgL_inz00_904;obj_t BgL_statusz00_905;obj_t BgL_headerz00_906;obj_t BgL_contentzd2lengthzd2_907;obj_t BgL_encodingz00_908;
BgL_inz00_904 = BgL_inz00_3474; 
BgL_statusz00_905 = BgL_statusz00_3475; 
BgL_headerz00_906 = BgL_headerz00_3476; 
BgL_contentzd2lengthzd2_907 = BgL_contentzd2lengthzd2_3477; 
BgL_encodingz00_908 = BgL_encodingz00_3478; 
if(
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_statusz00_905, 
BINT(((long)200))))
{ /* Llib/sparql.scm 130 */
obj_t BgL_formatz00_911;
{ /* Llib/sparql.scm 130 */
obj_t BgL_pairz00_2789;
{ /* Llib/sparql.scm 130 */
obj_t BgL_aux3419z00_4222;
{ /* Llib/sparql.scm 130 */
obj_t BgL_auxz00_7780;
{ /* Llib/sparql.scm 130 */
bool_t BgL_testz00_7781;
if(
PAIRP(BgL_headerz00_906))
{ /* Llib/sparql.scm 130 */
BgL_testz00_7781 = ((bool_t)1)
; }  else 
{ /* Llib/sparql.scm 130 */
BgL_testz00_7781 = 
NULLP(BgL_headerz00_906)
; } 
if(BgL_testz00_7781)
{ /* Llib/sparql.scm 130 */
BgL_auxz00_7780 = BgL_headerz00_906
; }  else 
{ 
obj_t BgL_auxz00_7785;
BgL_auxz00_7785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3819)), BGl_string3824z00zzsparqlz00, BGl_string3740z00zzsparqlz00, BgL_headerz00_906); 
FAILURE(BgL_auxz00_7785,BFALSE,BFALSE);} } 
BgL_aux3419z00_4222 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BGl_keyword3823z00zzsparqlz00, BgL_auxz00_7780); } 
if(
PAIRP(BgL_aux3419z00_4222))
{ /* Llib/sparql.scm 130 */
BgL_pairz00_2789 = BgL_aux3419z00_4222; }  else 
{ 
obj_t BgL_auxz00_7792;
BgL_auxz00_7792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3804)), BGl_string3824z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3419z00_4222); 
FAILURE(BgL_auxz00_7792,BFALSE,BFALSE);} } 
BgL_formatz00_911 = 
CDR(BgL_pairz00_2789); } 
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_formatz00_911, BGl_string3825z00zzsparqlz00))
{ /* Llib/sparql.scm 133 */
obj_t BgL_auxz00_7806;obj_t BgL_auxz00_7799;
if(
INPUT_PORTP(BgL_inz00_904))
{ /* Llib/sparql.scm 133 */
BgL_auxz00_7806 = BgL_inz00_904
; }  else 
{ 
obj_t BgL_auxz00_7809;
BgL_auxz00_7809 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3912)), BGl_string3824z00zzsparqlz00, BGl_string3688z00zzsparqlz00, BgL_inz00_904); 
FAILURE(BgL_auxz00_7809,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 133 */
obj_t BgL_aux3421z00_4224;
BgL_aux3421z00_4224 = BGl_sparqlzd2grammarzd2rulesz00zzsparqlz00; 
if(
PROCEDUREP(BgL_aux3421z00_4224))
{ /* Llib/sparql.scm 133 */
BgL_auxz00_7799 = BgL_aux3421z00_4224
; }  else 
{ 
obj_t BgL_auxz00_7802;
BgL_auxz00_7802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)3912)), BGl_string3824z00zzsparqlz00, BGl_string3770z00zzsparqlz00, BgL_aux3421z00_4224); 
FAILURE(BgL_auxz00_7802,BFALSE,BFALSE);} } 
return 
BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(BgL_auxz00_7799, BGl_sparqlzd2grammarzd2tokensz00zzsparqlz00, BgL_auxz00_7806, BNIL);}  else 
{ /* Llib/sparql.scm 132 */
BGl_errorzf2czd2locationz20zz__errorz00(BGl_string3814z00zzsparqlz00, BGl_string3826z00zzsparqlz00, BgL_formatz00_911, 
BSTRING_TO_STRING(BGl_string3582z00zzsparqlz00), ((long)4054)); 
return 
BGl_errorzf2locationzf2zz__errorz00(BFALSE, BFALSE, BFALSE, BGl_string3582z00zzsparqlz00, 
BINT(((long)4054)));} }  else 
{ /* Llib/sparql.scm 129 */
BGl_errorzf2czd2locationz20zz__errorz00(BGl_string3814z00zzsparqlz00, BGl_string3827z00zzsparqlz00, BgL_statusz00_905, 
BSTRING_TO_STRING(BGl_string3582z00zzsparqlz00), ((long)4122)); 
return 
BGl_errorzf2locationzf2zz__errorz00(BFALSE, BFALSE, BFALSE, BGl_string3582z00zzsparqlz00, 
BINT(((long)4122)));} } } 
}



/* from */
BGL_EXPORTED_DEF obj_t BGl_fromz00zzsparqlz00(obj_t BgL_listsz00_19, obj_t BgL_procz00_20)
{ AN_OBJECT;
{ /* Llib/sparql.scm 158 */
{ /* Llib/sparql.scm 159 */
obj_t BgL_name2696z00_3366;obj_t BgL_loc2697z00_3367;obj_t BgL_env2698z00_3368;
BgL_name2696z00_3366 = BGl_symbol3828z00zzsparqlz00; 
BgL_loc2697z00_3367 = BGl_list3830z00zzsparqlz00; 
BgL_env2698z00_3368 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 159 */

BGL_ENV_PUSH_TRACE(BgL_env2698z00_3368, BgL_name2696z00_3366, BgL_loc2697z00_3367); 
{ /* Llib/sparql.scm 159 */
obj_t BgL_aux2695z00_3369;
{ /* Llib/sparql.scm 159 */
obj_t BgL_g1107z00_916;
{ /* Llib/sparql.scm 160 */
obj_t BgL_l1097z00_929;
BgL_l1097z00_929 = 
BGl_mlistz00zzsparqlz00(BgL_listsz00_19); 
if(
NULLP(BgL_l1097z00_929))
{ /* Llib/sparql.scm 160 */
BgL_g1107z00_916 = BNIL; }  else 
{ /* Llib/sparql.scm 160 */
obj_t BgL_head1099z00_931;
{ /* Llib/sparql.scm 160 */
obj_t BgL_res2571z00_2803;
BgL_res2571z00_2803 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1099z00_931 = BgL_res2571z00_2803; } 
{ 
obj_t BgL_l1097z00_933;obj_t BgL_tail1100z00_934;
BgL_l1097z00_933 = BgL_l1097z00_929; 
BgL_tail1100z00_934 = BgL_head1099z00_931; 
BgL_zc3anonymousza31862za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3160ze3z41_935:
if(
PAIRP(BgL_l1097z00_933))
{ /* Llib/sparql.scm 160 */
obj_t BgL_newtail1101z00_937;
{ /* Llib/sparql.scm 160 */
obj_t BgL_arg1865z00_939;
{ /* Llib/sparql.scm 160 */
obj_t BgL_argsz00_940;
BgL_argsz00_940 = 
CAR(BgL_l1097z00_933); 
{ /* Llib/sparql.scm 160 */
obj_t BgL_funz00_4230;obj_t BgL_valz00_4231;
if(
PROCEDUREP(BgL_procz00_20))
{ /* Llib/sparql.scm 160 */
BgL_funz00_4230 = BgL_procz00_20; }  else 
{ 
obj_t BgL_auxz00_7833;
BgL_auxz00_7833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5085)), BGl_string3831z00zzsparqlz00, BGl_string3770z00zzsparqlz00, BgL_procz00_20); 
FAILURE(BgL_auxz00_7833,BFALSE,BFALSE);} 
BgL_valz00_4231 = BgL_argsz00_940; 
{ /* Llib/sparql.scm 160 */
int BgL_len3427z00_4232;
BgL_len3427z00_4232 = 
(int)(
bgl_list_length(BgL_valz00_4231)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4230, BgL_len3427z00_4232))
{ /* Llib/sparql.scm 160 */
BgL_arg1865z00_939 = 
apply(BgL_funz00_4230, BgL_valz00_4231); }  else 
{ /* Llib/sparql.scm 160 */
BGl_errorzf2locationzf2zz__errorz00(BGl_symbol3832z00zzsparqlz00, BGl_string3833z00zzsparqlz00, BGl_list3834z00zzsparqlz00, BGl_string3582z00zzsparqlz00, 
BINT(((long)5085))); 
FAILURE(BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00,BGl_symbol3779z00zzsparqlz00);} } } } 
{ /* Llib/sparql.scm 160 */
obj_t BgL_res2573z00_2809;
BgL_res2573z00_2809 = 
MAKE_PAIR(BgL_arg1865z00_939, BNIL); 
BgL_newtail1101z00_937 = BgL_res2573z00_2809; } } 
SET_CDR(BgL_tail1100z00_934, BgL_newtail1101z00_937); 
{ 
obj_t BgL_tail1100z00_7850;obj_t BgL_l1097z00_7848;
BgL_l1097z00_7848 = 
CDR(BgL_l1097z00_933); 
BgL_tail1100z00_7850 = BgL_newtail1101z00_937; 
BgL_tail1100z00_934 = BgL_tail1100z00_7850; 
BgL_l1097z00_933 = BgL_l1097z00_7848; 
goto BgL_zc3anonymousza31862za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3160ze3z41_935;} }  else 
{ /* Llib/sparql.scm 160 */
if(
NULLP(BgL_l1097z00_933))
{ /* Llib/sparql.scm 160 */
BgL_g1107z00_916 = 
CDR(BgL_head1099z00_931); }  else 
{ /* Llib/sparql.scm 160 */
BgL_g1107z00_916 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1097z00_933, BGl_string3582z00zzsparqlz00, 
BINT(((long)5065))); } } } } } 
BgL_aux2695z00_3369 = 
BGl_zc3anonymousza31856za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3160ze3z41zzsparqlz00(BgL_g1107z00_916); } 
BGL_ENV_POP_TRACE(BgL_env2698z00_3368); 
return BgL_aux2695z00_3369;} } } } 
}



/* <anonymous:1856:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:160> */
obj_t BGl_zc3anonymousza31856za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3160ze3z41zzsparqlz00(obj_t BgL_lis1103z00_918)
{ AN_OBJECT;
{ /* Llib/sparql.scm 160 */
BGl_zc3anonymousza31856za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3160ze3z41zzsparqlz00:
if(
NULLP(BgL_lis1103z00_918))
{ /* Llib/sparql.scm 160 */
return BgL_lis1103z00_918;}  else 
{ /* Llib/sparql.scm 160 */
obj_t BgL_head1104z00_921;obj_t BgL_tail1105z00_922;
{ /* Llib/sparql.scm 160 */
obj_t BgL_pairz00_2818;
if(
PAIRP(BgL_lis1103z00_918))
{ /* Llib/sparql.scm 160 */
BgL_pairz00_2818 = BgL_lis1103z00_918; }  else 
{ 
obj_t BgL_auxz00_7862;
BgL_auxz00_7862 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5065)), BGl_string3841z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lis1103z00_918); 
FAILURE(BgL_auxz00_7862,BFALSE,BFALSE);} 
BgL_head1104z00_921 = 
CAR(BgL_pairz00_2818); } 
{ /* Llib/sparql.scm 160 */
obj_t BgL_pairz00_2819;
if(
PAIRP(BgL_lis1103z00_918))
{ /* Llib/sparql.scm 160 */
BgL_pairz00_2819 = BgL_lis1103z00_918; }  else 
{ 
obj_t BgL_auxz00_7869;
BgL_auxz00_7869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5065)), BGl_string3841z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lis1103z00_918); 
FAILURE(BgL_auxz00_7869,BFALSE,BFALSE);} 
BgL_tail1105z00_922 = 
CDR(BgL_pairz00_2819); } 
{ /* Llib/sparql.scm 160 */
bool_t BgL_testz00_7874;
if(
(BgL_head1104z00_921==BFALSE))
{ /* Llib/sparql.scm 159 */
BgL_testz00_7874 = ((bool_t)0)
; }  else 
{ /* Llib/sparql.scm 159 */
BgL_testz00_7874 = ((bool_t)1)
; } 
if(BgL_testz00_7874)
{ /* Llib/sparql.scm 160 */
obj_t BgL_newzd2tail1106zd2_924;
BgL_newzd2tail1106zd2_924 = 
BGl_zc3anonymousza31856za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3160ze3z41zzsparqlz00(BgL_tail1105z00_922); 
if(
(BgL_tail1105z00_922==BgL_newzd2tail1106zd2_924))
{ /* Llib/sparql.scm 160 */
return BgL_lis1103z00_918;}  else 
{ /* Llib/sparql.scm 160 */
obj_t BgL_res2577z00_2825;
BgL_res2577z00_2825 = 
MAKE_PAIR(BgL_head1104z00_921, BgL_newzd2tail1106zd2_924); 
return BgL_res2577z00_2825;} }  else 
{ 
obj_t BgL_lis1103z00_7881;
BgL_lis1103z00_7881 = BgL_tail1105z00_922; 
BgL_lis1103z00_918 = BgL_lis1103z00_7881; 
goto BGl_zc3anonymousza31856za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3160ze3z41zzsparqlz00;} } } } 
}



/* &from */
obj_t BGl_z62fromz62zzsparqlz00(obj_t BgL_envz00_3479, obj_t BgL_listsz00_3480, obj_t BgL_procz00_3481)
{ AN_OBJECT;
{ /* Llib/sparql.scm 158 */
return 
BGl_fromz00zzsparqlz00(BgL_listsz00_3480, BgL_procz00_3481);} 
}



/* construct-string */
obj_t BGl_constructzd2stringzd2zzsparqlz00(obj_t BgL_prefixsz00_21, obj_t BgL_cz00_22, obj_t BgL_wz00_23, obj_t BgL_optionsz00_24)
{ AN_OBJECT;
{ /* Llib/sparql.scm 163 */
{ /* Llib/sparql.scm 167 */
obj_t BgL_name2700z00_3370;obj_t BgL_loc2701z00_3371;obj_t BgL_env2702z00_3372;
BgL_name2700z00_3370 = BGl_symbol3842z00zzsparqlz00; 
BgL_loc2701z00_3371 = BGl_list3844z00zzsparqlz00; 
BgL_env2702z00_3372 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 167 */

BGL_ENV_PUSH_TRACE(BgL_env2702z00_3372, BgL_name2700z00_3370, BgL_loc2701z00_3371); 
{ /* Llib/sparql.scm 167 */
obj_t BgL_aux2699z00_3373;
{ /* Llib/sparql.scm 167 */
obj_t BgL_arg1867z00_943;obj_t BgL_arg1868z00_944;obj_t BgL_arg1869z00_945;obj_t BgL_arg1870z00_946;obj_t BgL_arg1871z00_947;obj_t BgL_arg1872z00_948;
{ 
obj_t BgL_accuz00_961;obj_t BgL_prefixz00_962;
{ 
obj_t BgL_accuz00_2832;obj_t BgL_listz00_2833;
BgL_accuz00_2832 = BGl_string3848z00zzsparqlz00; 
BgL_listz00_2833 = BgL_prefixsz00_21; 
BgL_foldz00_2831:
if(
PAIRP(BgL_listz00_2833))
{ 
obj_t BgL_listz00_7917;obj_t BgL_accuz00_7887;
BgL_accuz00_961 = BgL_accuz00_2832; 
BgL_prefixz00_962 = 
CAR(BgL_listz00_2833); 
{ /* Llib/sparql.scm 167 */
obj_t BgL_arg1886z00_964;obj_t BgL_arg1887z00_965;
{ /* Llib/sparql.scm 167 */
obj_t BgL_pairz00_2826;
if(
PAIRP(BgL_prefixz00_962))
{ /* Llib/sparql.scm 167 */
BgL_pairz00_2826 = BgL_prefixz00_962; }  else 
{ 
obj_t BgL_auxz00_7890;
BgL_auxz00_7890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5284)), BGl_string3845z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_prefixz00_962); 
FAILURE(BgL_auxz00_7890,BFALSE,BFALSE);} 
BgL_arg1886z00_964 = 
CAR(BgL_pairz00_2826); } 
{ /* Llib/sparql.scm 167 */
obj_t BgL_pairz00_2827;
if(
PAIRP(BgL_prefixz00_962))
{ /* Llib/sparql.scm 167 */
BgL_pairz00_2827 = BgL_prefixz00_962; }  else 
{ 
obj_t BgL_auxz00_7897;
BgL_auxz00_7897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5302)), BGl_string3845z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_prefixz00_962); 
FAILURE(BgL_auxz00_7897,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 167 */
obj_t BgL_pairz00_2830;
{ /* Llib/sparql.scm 167 */
obj_t BgL_aux3437z00_4242;
BgL_aux3437z00_4242 = 
CDR(BgL_pairz00_2827); 
if(
PAIRP(BgL_aux3437z00_4242))
{ /* Llib/sparql.scm 167 */
BgL_pairz00_2830 = BgL_aux3437z00_4242; }  else 
{ 
obj_t BgL_auxz00_7904;
BgL_auxz00_7904 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5296)), BGl_string3845z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3437z00_4242); 
FAILURE(BgL_auxz00_7904,BFALSE,BFALSE);} } 
BgL_arg1887z00_965 = 
CAR(BgL_pairz00_2830); } } 
{ /* Llib/sparql.scm 166 */
obj_t BgL_list1888z00_966;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1889z00_967;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1890z00_968;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1891z00_969;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1892z00_970;
{ /* Llib/sparql.scm 166 */
obj_t BgL_arg1893z00_971;
BgL_arg1893z00_971 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BNIL); 
BgL_arg1892z00_970 = 
MAKE_PAIR(BgL_arg1887z00_965, BgL_arg1893z00_971); } 
BgL_arg1891z00_969 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1892z00_970); } 
BgL_arg1890z00_968 = 
MAKE_PAIR(BgL_arg1886z00_964, BgL_arg1891z00_969); } 
BgL_arg1889z00_967 = 
MAKE_PAIR(BGl_string3847z00zzsparqlz00, BgL_arg1890z00_968); } 
BgL_list1888z00_966 = 
MAKE_PAIR(BgL_accuz00_961, BgL_arg1889z00_967); } 
BgL_accuz00_7887 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1888z00_966); } } 
BgL_listz00_7917 = 
CDR(BgL_listz00_2833); 
BgL_listz00_2833 = BgL_listz00_7917; 
BgL_accuz00_2832 = BgL_accuz00_7887; 
goto BgL_foldz00_2831;}  else 
{ /* Llib/sparql.scm 165 */
BgL_arg1867z00_943 = BgL_accuz00_2832; } } } 
{ /* Llib/sparql.scm 169 */
obj_t BgL_pairz00_2846;
if(
PAIRP(BgL_cz00_22))
{ /* Llib/sparql.scm 169 */
BgL_pairz00_2846 = BgL_cz00_22; }  else 
{ 
obj_t BgL_auxz00_7921;
BgL_auxz00_7921 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5354)), BGl_string3849z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_cz00_22); 
FAILURE(BgL_auxz00_7921,BFALSE,BFALSE);} 
BgL_arg1868z00_944 = 
CAR(BgL_pairz00_2846); } 
{ /* Llib/sparql.scm 169 */
obj_t BgL_pairz00_2847;
if(
PAIRP(BgL_cz00_22))
{ /* Llib/sparql.scm 169 */
BgL_pairz00_2847 = BgL_cz00_22; }  else 
{ 
obj_t BgL_auxz00_7928;
BgL_auxz00_7928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5367)), BGl_string3849z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_cz00_22); 
FAILURE(BgL_auxz00_7928,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 169 */
obj_t BgL_pairz00_2850;
{ /* Llib/sparql.scm 169 */
obj_t BgL_aux3443z00_4248;
BgL_aux3443z00_4248 = 
CDR(BgL_pairz00_2847); 
if(
PAIRP(BgL_aux3443z00_4248))
{ /* Llib/sparql.scm 169 */
BgL_pairz00_2850 = BgL_aux3443z00_4248; }  else 
{ 
obj_t BgL_auxz00_7935;
BgL_auxz00_7935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5361)), BGl_string3849z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3443z00_4248); 
FAILURE(BgL_auxz00_7935,BFALSE,BFALSE);} } 
BgL_arg1869z00_945 = 
CAR(BgL_pairz00_2850); } } 
{ /* Llib/sparql.scm 169 */
obj_t BgL_pairz00_2851;
if(
PAIRP(BgL_cz00_22))
{ /* Llib/sparql.scm 169 */
BgL_pairz00_2851 = BgL_cz00_22; }  else 
{ 
obj_t BgL_auxz00_7942;
BgL_auxz00_7942 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5381)), BGl_string3849z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_cz00_22); 
FAILURE(BgL_auxz00_7942,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 169 */
obj_t BgL_pairz00_2856;
{ /* Llib/sparql.scm 169 */
obj_t BgL_pairz00_2855;
{ /* Llib/sparql.scm 169 */
obj_t BgL_aux3447z00_4252;
BgL_aux3447z00_4252 = 
CDR(BgL_pairz00_2851); 
if(
PAIRP(BgL_aux3447z00_4252))
{ /* Llib/sparql.scm 169 */
BgL_pairz00_2855 = BgL_aux3447z00_4252; }  else 
{ 
obj_t BgL_auxz00_7949;
BgL_auxz00_7949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5374)), BGl_string3849z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3447z00_4252); 
FAILURE(BgL_auxz00_7949,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 169 */
obj_t BgL_aux3449z00_4254;
BgL_aux3449z00_4254 = 
CDR(BgL_pairz00_2855); 
if(
PAIRP(BgL_aux3449z00_4254))
{ /* Llib/sparql.scm 169 */
BgL_pairz00_2856 = BgL_aux3449z00_4254; }  else 
{ 
obj_t BgL_auxz00_7956;
BgL_auxz00_7956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5374)), BGl_string3849z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3449z00_4254); 
FAILURE(BgL_auxz00_7956,BFALSE,BFALSE);} } } 
BgL_arg1870z00_946 = 
CAR(BgL_pairz00_2856); } } 
{ 
obj_t BgL_accuz00_974;obj_t BgL_tz00_975;
{ 
obj_t BgL_accuz00_2869;obj_t BgL_listz00_2870;
BgL_accuz00_2869 = BGl_string3848z00zzsparqlz00; 
BgL_listz00_2870 = BgL_wz00_23; 
BgL_foldz00_2868:
if(
PAIRP(BgL_listz00_2870))
{ 
obj_t BgL_listz00_8015;obj_t BgL_accuz00_7963;
BgL_accuz00_974 = BgL_accuz00_2869; 
BgL_tz00_975 = 
CAR(BgL_listz00_2870); 
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1896z00_977;obj_t BgL_arg1897z00_978;obj_t BgL_arg1898z00_979;
{ /* Llib/sparql.scm 171 */
obj_t BgL_pairz00_2857;
if(
PAIRP(BgL_tz00_975))
{ /* Llib/sparql.scm 171 */
BgL_pairz00_2857 = BgL_tz00_975; }  else 
{ 
obj_t BgL_auxz00_7966;
BgL_auxz00_7966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5456)), BGl_string3850z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_tz00_975); 
FAILURE(BgL_auxz00_7966,BFALSE,BFALSE);} 
BgL_arg1896z00_977 = 
CAR(BgL_pairz00_2857); } 
{ /* Llib/sparql.scm 171 */
obj_t BgL_pairz00_2858;
if(
PAIRP(BgL_tz00_975))
{ /* Llib/sparql.scm 171 */
BgL_pairz00_2858 = BgL_tz00_975; }  else 
{ 
obj_t BgL_auxz00_7973;
BgL_auxz00_7973 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5469)), BGl_string3850z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_tz00_975); 
FAILURE(BgL_auxz00_7973,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 171 */
obj_t BgL_pairz00_2861;
{ /* Llib/sparql.scm 171 */
obj_t BgL_aux3455z00_4260;
BgL_aux3455z00_4260 = 
CDR(BgL_pairz00_2858); 
if(
PAIRP(BgL_aux3455z00_4260))
{ /* Llib/sparql.scm 171 */
BgL_pairz00_2861 = BgL_aux3455z00_4260; }  else 
{ 
obj_t BgL_auxz00_7980;
BgL_auxz00_7980 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5463)), BGl_string3850z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3455z00_4260); 
FAILURE(BgL_auxz00_7980,BFALSE,BFALSE);} } 
BgL_arg1897z00_978 = 
CAR(BgL_pairz00_2861); } } 
{ /* Llib/sparql.scm 171 */
obj_t BgL_pairz00_2862;
if(
PAIRP(BgL_tz00_975))
{ /* Llib/sparql.scm 171 */
BgL_pairz00_2862 = BgL_tz00_975; }  else 
{ 
obj_t BgL_auxz00_7987;
BgL_auxz00_7987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5483)), BGl_string3850z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_tz00_975); 
FAILURE(BgL_auxz00_7987,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 171 */
obj_t BgL_pairz00_2867;
{ /* Llib/sparql.scm 171 */
obj_t BgL_pairz00_2866;
{ /* Llib/sparql.scm 171 */
obj_t BgL_aux3459z00_4264;
BgL_aux3459z00_4264 = 
CDR(BgL_pairz00_2862); 
if(
PAIRP(BgL_aux3459z00_4264))
{ /* Llib/sparql.scm 171 */
BgL_pairz00_2866 = BgL_aux3459z00_4264; }  else 
{ 
obj_t BgL_auxz00_7994;
BgL_auxz00_7994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5476)), BGl_string3850z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3459z00_4264); 
FAILURE(BgL_auxz00_7994,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 171 */
obj_t BgL_aux3461z00_4266;
BgL_aux3461z00_4266 = 
CDR(BgL_pairz00_2866); 
if(
PAIRP(BgL_aux3461z00_4266))
{ /* Llib/sparql.scm 171 */
BgL_pairz00_2867 = BgL_aux3461z00_4266; }  else 
{ 
obj_t BgL_auxz00_8001;
BgL_auxz00_8001 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5476)), BGl_string3850z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3461z00_4266); 
FAILURE(BgL_auxz00_8001,BFALSE,BFALSE);} } } 
BgL_arg1898z00_979 = 
CAR(BgL_pairz00_2867); } } 
{ /* Llib/sparql.scm 171 */
obj_t BgL_list1899z00_980;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1900z00_981;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1901z00_982;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1902z00_983;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1903z00_984;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1904z00_985;
{ /* Llib/sparql.scm 171 */
obj_t BgL_arg1905z00_986;
BgL_arg1905z00_986 = 
MAKE_PAIR(BGl_string3851z00zzsparqlz00, BNIL); 
BgL_arg1904z00_985 = 
MAKE_PAIR(BgL_arg1898z00_979, BgL_arg1905z00_986); } 
BgL_arg1903z00_984 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1904z00_985); } 
BgL_arg1902z00_983 = 
MAKE_PAIR(BgL_arg1897z00_978, BgL_arg1903z00_984); } 
BgL_arg1901z00_982 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1902z00_983); } 
BgL_arg1900z00_981 = 
MAKE_PAIR(BgL_arg1896z00_977, BgL_arg1901z00_982); } 
BgL_list1899z00_980 = 
MAKE_PAIR(BgL_accuz00_974, BgL_arg1900z00_981); } 
BgL_accuz00_7963 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1899z00_980); } } 
BgL_listz00_8015 = 
CDR(BgL_listz00_2870); 
BgL_listz00_2870 = BgL_listz00_8015; 
BgL_accuz00_2869 = BgL_accuz00_7963; 
goto BgL_foldz00_2868;}  else 
{ /* Llib/sparql.scm 170 */
BgL_arg1871z00_947 = BgL_accuz00_2869; } } } 
{ 
obj_t BgL_accuz00_989;obj_t BgL_optionz00_990;
{ 
obj_t BgL_accuz00_2892;obj_t BgL_listz00_2893;
BgL_accuz00_2892 = BGl_string3848z00zzsparqlz00; 
BgL_listz00_2893 = BgL_optionsz00_24; 
BgL_foldz00_2891:
if(
PAIRP(BgL_listz00_2893))
{ 
obj_t BgL_listz00_8066;obj_t BgL_accuz00_8019;
BgL_accuz00_989 = BgL_accuz00_2892; 
BgL_optionz00_990 = 
CAR(BgL_listz00_2893); 
{ /* Llib/sparql.scm 176 */
obj_t BgL_arg1908z00_992;obj_t BgL_arg1909z00_993;
{ /* Llib/sparql.scm 176 */
obj_t BgL_arg1915z00_999;
{ /* Llib/sparql.scm 176 */
obj_t BgL_pairz00_2883;
if(
PAIRP(BgL_optionz00_990))
{ /* Llib/sparql.scm 176 */
BgL_pairz00_2883 = BgL_optionz00_990; }  else 
{ 
obj_t BgL_auxz00_8022;
BgL_auxz00_8022 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5613)), BGl_string3852z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_optionz00_990); 
FAILURE(BgL_auxz00_8022,BFALSE,BFALSE);} 
BgL_arg1915z00_999 = 
CAR(BgL_pairz00_2883); } 
{ /* Llib/sparql.scm 176 */
obj_t BgL_res2580z00_2886;
{ /* Llib/sparql.scm 176 */
obj_t BgL_symbolz00_2884;
if(
SYMBOLP(BgL_arg1915z00_999))
{ /* Llib/sparql.scm 176 */
BgL_symbolz00_2884 = BgL_arg1915z00_999; }  else 
{ 
obj_t BgL_auxz00_8029;
BgL_auxz00_8029 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5619)), BGl_string3852z00zzsparqlz00, BGl_string3853z00zzsparqlz00, BgL_arg1915z00_999); 
FAILURE(BgL_auxz00_8029,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 176 */
obj_t BgL_arg1283z00_2885;
BgL_arg1283z00_2885 = 
SYMBOL_TO_STRING(BgL_symbolz00_2884); 
BgL_res2580z00_2886 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1283z00_2885); } } 
BgL_arg1908z00_992 = BgL_res2580z00_2886; } } 
{ /* Llib/sparql.scm 178 */

{ /* Llib/sparql.scm 178 */
long BgL_auxz00_8035;
{ /* Llib/sparql.scm 178 */
obj_t BgL_pairz00_2887;
if(
PAIRP(BgL_optionz00_990))
{ /* Llib/sparql.scm 178 */
BgL_pairz00_2887 = BgL_optionz00_990; }  else 
{ 
obj_t BgL_auxz00_8038;
BgL_auxz00_8038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5685)), BGl_string3852z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_optionz00_990); 
FAILURE(BgL_auxz00_8038,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 178 */
obj_t BgL_pairz00_2890;
{ /* Llib/sparql.scm 178 */
obj_t BgL_aux3469z00_4274;
BgL_aux3469z00_4274 = 
CDR(BgL_pairz00_2887); 
if(
PAIRP(BgL_aux3469z00_4274))
{ /* Llib/sparql.scm 178 */
BgL_pairz00_2890 = BgL_aux3469z00_4274; }  else 
{ 
obj_t BgL_auxz00_8045;
BgL_auxz00_8045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5679)), BGl_string3852z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3469z00_4274); 
FAILURE(BgL_auxz00_8045,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 178 */
obj_t BgL_auxz00_8049;
{ /* Llib/sparql.scm 178 */
obj_t BgL_aux3471z00_4276;
BgL_aux3471z00_4276 = 
CAR(BgL_pairz00_2890); 
if(
INTEGERP(BgL_aux3471z00_4276))
{ /* Llib/sparql.scm 178 */
BgL_auxz00_8049 = BgL_aux3471z00_4276
; }  else 
{ 
obj_t BgL_auxz00_8053;
BgL_auxz00_8053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5679)), BGl_string3852z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_aux3471z00_4276); 
FAILURE(BgL_auxz00_8053,BFALSE,BFALSE);} } 
BgL_auxz00_8035 = 
(long)CINT(BgL_auxz00_8049); } } } 
BgL_arg1909z00_993 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_8035, ((long)10)); } } 
{ /* Llib/sparql.scm 175 */
obj_t BgL_list1910z00_994;
{ /* Llib/sparql.scm 175 */
obj_t BgL_arg1911z00_995;
{ /* Llib/sparql.scm 175 */
obj_t BgL_arg1912z00_996;
{ /* Llib/sparql.scm 175 */
obj_t BgL_arg1913z00_997;
{ /* Llib/sparql.scm 175 */
obj_t BgL_arg1914z00_998;
BgL_arg1914z00_998 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BNIL); 
BgL_arg1913z00_997 = 
MAKE_PAIR(BgL_arg1909z00_993, BgL_arg1914z00_998); } 
BgL_arg1912z00_996 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1913z00_997); } 
BgL_arg1911z00_995 = 
MAKE_PAIR(BgL_arg1908z00_992, BgL_arg1912z00_996); } 
BgL_list1910z00_994 = 
MAKE_PAIR(BgL_accuz00_989, BgL_arg1911z00_995); } 
BgL_accuz00_8019 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1910z00_994); } } 
BgL_listz00_8066 = 
CDR(BgL_listz00_2893); 
BgL_listz00_2893 = BgL_listz00_8066; 
BgL_accuz00_2892 = BgL_accuz00_8019; 
goto BgL_foldz00_2891;}  else 
{ /* Llib/sparql.scm 174 */
BgL_arg1872z00_948 = BgL_accuz00_2892; } } } 
{ /* Llib/sparql.scm 164 */
obj_t BgL_list1873z00_949;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1874z00_950;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1875z00_951;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1876z00_952;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1877z00_953;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1878z00_954;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1879z00_955;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1880z00_956;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1881z00_957;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1882z00_958;
{ /* Llib/sparql.scm 164 */
obj_t BgL_arg1883z00_959;
BgL_arg1883z00_959 = 
MAKE_PAIR(BgL_arg1872z00_948, BNIL); 
BgL_arg1882z00_958 = 
MAKE_PAIR(BGl_string3854z00zzsparqlz00, BgL_arg1883z00_959); } 
BgL_arg1881z00_957 = 
MAKE_PAIR(BgL_arg1871z00_947, BgL_arg1882z00_958); } 
BgL_arg1880z00_956 = 
MAKE_PAIR(BGl_string3855z00zzsparqlz00, BgL_arg1881z00_957); } 
BgL_arg1879z00_955 = 
MAKE_PAIR(BgL_arg1870z00_946, BgL_arg1880z00_956); } 
BgL_arg1878z00_954 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1879z00_955); } 
BgL_arg1877z00_953 = 
MAKE_PAIR(BgL_arg1869z00_945, BgL_arg1878z00_954); } 
BgL_arg1876z00_952 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1877z00_953); } 
BgL_arg1875z00_951 = 
MAKE_PAIR(BgL_arg1868z00_944, BgL_arg1876z00_952); } 
BgL_arg1874z00_950 = 
MAKE_PAIR(BGl_string3856z00zzsparqlz00, BgL_arg1875z00_951); } 
BgL_list1873z00_949 = 
MAKE_PAIR(BgL_arg1867z00_943, BgL_arg1874z00_950); } 
BgL_aux2699z00_3373 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1873z00_949); } } 
BGL_ENV_POP_TRACE(BgL_env2702z00_3372); 
return BgL_aux2699z00_3373;} } } } 
}



/* select-string */
obj_t BGl_selectzd2stringzd2zzsparqlz00(obj_t BgL_distinctz00_25, obj_t BgL_prefixsz00_26, obj_t BgL_sz00_27, obj_t BgL_wz00_28, obj_t BgL_optionsz00_29)
{ AN_OBJECT;
{ /* Llib/sparql.scm 183 */
{ /* Llib/sparql.scm 186 */
obj_t BgL_name2704z00_3374;obj_t BgL_loc2705z00_3375;obj_t BgL_env2706z00_3376;
BgL_name2704z00_3374 = BGl_symbol3857z00zzsparqlz00; 
BgL_loc2705z00_3375 = BGl_list3859z00zzsparqlz00; 
BgL_env2706z00_3376 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 186 */

BGL_ENV_PUSH_TRACE(BgL_env2706z00_3376, BgL_name2704z00_3374, BgL_loc2705z00_3375); 
{ /* Llib/sparql.scm 186 */
obj_t BgL_aux2703z00_3377;
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1917z00_1004;obj_t BgL_arg1918z00_1005;obj_t BgL_arg1919z00_1006;obj_t BgL_arg1920z00_1007;
{ 
obj_t BgL_accuz00_1017;obj_t BgL_prefixz00_1018;
{ 
obj_t BgL_accuz00_2912;obj_t BgL_listz00_2913;
BgL_accuz00_2912 = BGl_string3848z00zzsparqlz00; 
BgL_listz00_2913 = BgL_prefixsz00_26; 
BgL_foldz00_2911:
if(
PAIRP(BgL_listz00_2913))
{ 
obj_t BgL_listz00_8114;obj_t BgL_accuz00_8085;
BgL_accuz00_1017 = BgL_accuz00_2912; 
BgL_prefixz00_1018 = 
CAR(BgL_listz00_2913); 
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1931z00_1020;obj_t BgL_arg1932z00_1021;
{ /* Llib/sparql.scm 186 */
obj_t BgL_pairz00_2906;
if(
PAIRP(BgL_prefixz00_1018))
{ /* Llib/sparql.scm 186 */
BgL_pairz00_2906 = BgL_prefixz00_1018; }  else 
{ 
obj_t BgL_auxz00_8088;
BgL_auxz00_8088 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5892)), BGl_string3860z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_prefixz00_1018); 
FAILURE(BgL_auxz00_8088,BFALSE,BFALSE);} 
BgL_arg1931z00_1020 = 
CAR(BgL_pairz00_2906); } 
{ /* Llib/sparql.scm 186 */
obj_t BgL_pairz00_2907;
if(
PAIRP(BgL_prefixz00_1018))
{ /* Llib/sparql.scm 186 */
BgL_pairz00_2907 = BgL_prefixz00_1018; }  else 
{ 
obj_t BgL_auxz00_8095;
BgL_auxz00_8095 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5910)), BGl_string3860z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_prefixz00_1018); 
FAILURE(BgL_auxz00_8095,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 186 */
obj_t BgL_pairz00_2910;
{ /* Llib/sparql.scm 186 */
obj_t BgL_aux3477z00_4282;
BgL_aux3477z00_4282 = 
CDR(BgL_pairz00_2907); 
if(
PAIRP(BgL_aux3477z00_4282))
{ /* Llib/sparql.scm 186 */
BgL_pairz00_2910 = BgL_aux3477z00_4282; }  else 
{ 
obj_t BgL_auxz00_8102;
BgL_auxz00_8102 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)5904)), BGl_string3860z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3477z00_4282); 
FAILURE(BgL_auxz00_8102,BFALSE,BFALSE);} } 
BgL_arg1932z00_1021 = 
CAR(BgL_pairz00_2910); } } 
{ /* Llib/sparql.scm 186 */
obj_t BgL_list1933z00_1022;
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1934z00_1023;
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1935z00_1024;
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1936z00_1025;
{ /* Llib/sparql.scm 186 */
obj_t BgL_arg1937z00_1026;
BgL_arg1937z00_1026 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BNIL); 
BgL_arg1936z00_1025 = 
MAKE_PAIR(BgL_arg1932z00_1021, BgL_arg1937z00_1026); } 
BgL_arg1935z00_1024 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1936z00_1025); } 
BgL_arg1934z00_1023 = 
MAKE_PAIR(BgL_arg1931z00_1020, BgL_arg1935z00_1024); } 
BgL_list1933z00_1022 = 
MAKE_PAIR(BGl_string3847z00zzsparqlz00, BgL_arg1934z00_1023); } 
BgL_accuz00_8085 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1933z00_1022); } } 
BgL_listz00_8114 = 
CDR(BgL_listz00_2913); 
BgL_listz00_2913 = BgL_listz00_8114; 
BgL_accuz00_2912 = BgL_accuz00_8085; 
goto BgL_foldz00_2911;}  else 
{ /* Llib/sparql.scm 185 */
BgL_arg1917z00_1004 = BgL_accuz00_2912; } } } 
if(
CBOOL(BgL_distinctz00_25))
{ /* Llib/sparql.scm 188 */
BgL_arg1918z00_1005 = BGl_string3861z00zzsparqlz00; }  else 
{ /* Llib/sparql.scm 188 */
BgL_arg1918z00_1005 = BGl_string3848z00zzsparqlz00; } 
{ 
obj_t BgL_accuz00_1029;obj_t BgL_tz00_1030;
{ 
obj_t BgL_accuz00_2938;obj_t BgL_listz00_2939;
BgL_accuz00_2938 = BGl_string3848z00zzsparqlz00; 
BgL_listz00_2939 = BgL_wz00_28; 
BgL_foldz00_2937:
if(
PAIRP(BgL_listz00_2939))
{ 
obj_t BgL_listz00_8172;obj_t BgL_accuz00_8120;
BgL_accuz00_1029 = BgL_accuz00_2938; 
BgL_tz00_1030 = 
CAR(BgL_listz00_2939); 
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1940z00_1032;obj_t BgL_arg1941z00_1033;obj_t BgL_arg1942z00_1034;
{ /* Llib/sparql.scm 190 */
obj_t BgL_pairz00_2926;
if(
PAIRP(BgL_tz00_1030))
{ /* Llib/sparql.scm 190 */
BgL_pairz00_2926 = BgL_tz00_1030; }  else 
{ 
obj_t BgL_auxz00_8123;
BgL_auxz00_8123 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6057)), BGl_string3862z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_tz00_1030); 
FAILURE(BgL_auxz00_8123,BFALSE,BFALSE);} 
BgL_arg1940z00_1032 = 
CAR(BgL_pairz00_2926); } 
{ /* Llib/sparql.scm 190 */
obj_t BgL_pairz00_2927;
if(
PAIRP(BgL_tz00_1030))
{ /* Llib/sparql.scm 190 */
BgL_pairz00_2927 = BgL_tz00_1030; }  else 
{ 
obj_t BgL_auxz00_8130;
BgL_auxz00_8130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6070)), BGl_string3862z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_tz00_1030); 
FAILURE(BgL_auxz00_8130,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 190 */
obj_t BgL_pairz00_2930;
{ /* Llib/sparql.scm 190 */
obj_t BgL_aux3483z00_4288;
BgL_aux3483z00_4288 = 
CDR(BgL_pairz00_2927); 
if(
PAIRP(BgL_aux3483z00_4288))
{ /* Llib/sparql.scm 190 */
BgL_pairz00_2930 = BgL_aux3483z00_4288; }  else 
{ 
obj_t BgL_auxz00_8137;
BgL_auxz00_8137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6064)), BGl_string3862z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3483z00_4288); 
FAILURE(BgL_auxz00_8137,BFALSE,BFALSE);} } 
BgL_arg1941z00_1033 = 
CAR(BgL_pairz00_2930); } } 
{ /* Llib/sparql.scm 190 */
obj_t BgL_pairz00_2931;
if(
PAIRP(BgL_tz00_1030))
{ /* Llib/sparql.scm 190 */
BgL_pairz00_2931 = BgL_tz00_1030; }  else 
{ 
obj_t BgL_auxz00_8144;
BgL_auxz00_8144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6084)), BGl_string3862z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_tz00_1030); 
FAILURE(BgL_auxz00_8144,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 190 */
obj_t BgL_pairz00_2936;
{ /* Llib/sparql.scm 190 */
obj_t BgL_pairz00_2935;
{ /* Llib/sparql.scm 190 */
obj_t BgL_aux3487z00_4292;
BgL_aux3487z00_4292 = 
CDR(BgL_pairz00_2931); 
if(
PAIRP(BgL_aux3487z00_4292))
{ /* Llib/sparql.scm 190 */
BgL_pairz00_2935 = BgL_aux3487z00_4292; }  else 
{ 
obj_t BgL_auxz00_8151;
BgL_auxz00_8151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6077)), BGl_string3862z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3487z00_4292); 
FAILURE(BgL_auxz00_8151,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 190 */
obj_t BgL_aux3489z00_4294;
BgL_aux3489z00_4294 = 
CDR(BgL_pairz00_2935); 
if(
PAIRP(BgL_aux3489z00_4294))
{ /* Llib/sparql.scm 190 */
BgL_pairz00_2936 = BgL_aux3489z00_4294; }  else 
{ 
obj_t BgL_auxz00_8158;
BgL_auxz00_8158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6077)), BGl_string3862z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3489z00_4294); 
FAILURE(BgL_auxz00_8158,BFALSE,BFALSE);} } } 
BgL_arg1942z00_1034 = 
CAR(BgL_pairz00_2936); } } 
{ /* Llib/sparql.scm 190 */
obj_t BgL_list1943z00_1035;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1944z00_1036;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1945z00_1037;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1946z00_1038;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1947z00_1039;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1948z00_1040;
{ /* Llib/sparql.scm 190 */
obj_t BgL_arg1949z00_1041;
BgL_arg1949z00_1041 = 
MAKE_PAIR(BGl_string3851z00zzsparqlz00, BNIL); 
BgL_arg1948z00_1040 = 
MAKE_PAIR(BgL_arg1942z00_1034, BgL_arg1949z00_1041); } 
BgL_arg1947z00_1039 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1948z00_1040); } 
BgL_arg1946z00_1038 = 
MAKE_PAIR(BgL_arg1941z00_1033, BgL_arg1947z00_1039); } 
BgL_arg1945z00_1037 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1946z00_1038); } 
BgL_arg1944z00_1036 = 
MAKE_PAIR(BgL_arg1940z00_1032, BgL_arg1945z00_1037); } 
BgL_list1943z00_1035 = 
MAKE_PAIR(BgL_accuz00_1029, BgL_arg1944z00_1036); } 
BgL_accuz00_8120 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1943z00_1035); } } 
BgL_listz00_8172 = 
CDR(BgL_listz00_2939); 
BgL_listz00_2939 = BgL_listz00_8172; 
BgL_accuz00_2938 = BgL_accuz00_8120; 
goto BgL_foldz00_2937;}  else 
{ /* Llib/sparql.scm 189 */
BgL_arg1919z00_1006 = BgL_accuz00_2938; } } } 
{ 
obj_t BgL_accuz00_1044;obj_t BgL_optionz00_1045;
{ 
obj_t BgL_accuz00_2961;obj_t BgL_listz00_2962;
BgL_accuz00_2961 = BGl_string3848z00zzsparqlz00; 
BgL_listz00_2962 = BgL_optionsz00_29; 
BgL_foldz00_2960:
if(
PAIRP(BgL_listz00_2962))
{ 
obj_t BgL_listz00_8223;obj_t BgL_accuz00_8176;
BgL_accuz00_1044 = BgL_accuz00_2961; 
BgL_optionz00_1045 = 
CAR(BgL_listz00_2962); 
{ /* Llib/sparql.scm 195 */
obj_t BgL_arg1952z00_1047;obj_t BgL_arg1953z00_1048;
{ /* Llib/sparql.scm 195 */
obj_t BgL_arg1959z00_1054;
{ /* Llib/sparql.scm 195 */
obj_t BgL_pairz00_2952;
if(
PAIRP(BgL_optionz00_1045))
{ /* Llib/sparql.scm 195 */
BgL_pairz00_2952 = BgL_optionz00_1045; }  else 
{ 
obj_t BgL_auxz00_8179;
BgL_auxz00_8179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6214)), BGl_string3863z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_optionz00_1045); 
FAILURE(BgL_auxz00_8179,BFALSE,BFALSE);} 
BgL_arg1959z00_1054 = 
CAR(BgL_pairz00_2952); } 
{ /* Llib/sparql.scm 195 */
obj_t BgL_res2584z00_2955;
{ /* Llib/sparql.scm 195 */
obj_t BgL_symbolz00_2953;
if(
SYMBOLP(BgL_arg1959z00_1054))
{ /* Llib/sparql.scm 195 */
BgL_symbolz00_2953 = BgL_arg1959z00_1054; }  else 
{ 
obj_t BgL_auxz00_8186;
BgL_auxz00_8186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6220)), BGl_string3863z00zzsparqlz00, BGl_string3853z00zzsparqlz00, BgL_arg1959z00_1054); 
FAILURE(BgL_auxz00_8186,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 195 */
obj_t BgL_arg1283z00_2954;
BgL_arg1283z00_2954 = 
SYMBOL_TO_STRING(BgL_symbolz00_2953); 
BgL_res2584z00_2955 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1283z00_2954); } } 
BgL_arg1952z00_1047 = BgL_res2584z00_2955; } } 
{ /* Llib/sparql.scm 197 */

{ /* Llib/sparql.scm 197 */
long BgL_auxz00_8192;
{ /* Llib/sparql.scm 197 */
obj_t BgL_pairz00_2956;
if(
PAIRP(BgL_optionz00_1045))
{ /* Llib/sparql.scm 197 */
BgL_pairz00_2956 = BgL_optionz00_1045; }  else 
{ 
obj_t BgL_auxz00_8195;
BgL_auxz00_8195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6286)), BGl_string3863z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_optionz00_1045); 
FAILURE(BgL_auxz00_8195,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 197 */
obj_t BgL_pairz00_2959;
{ /* Llib/sparql.scm 197 */
obj_t BgL_aux3497z00_4302;
BgL_aux3497z00_4302 = 
CDR(BgL_pairz00_2956); 
if(
PAIRP(BgL_aux3497z00_4302))
{ /* Llib/sparql.scm 197 */
BgL_pairz00_2959 = BgL_aux3497z00_4302; }  else 
{ 
obj_t BgL_auxz00_8202;
BgL_auxz00_8202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6280)), BGl_string3863z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3497z00_4302); 
FAILURE(BgL_auxz00_8202,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 197 */
obj_t BgL_auxz00_8206;
{ /* Llib/sparql.scm 197 */
obj_t BgL_aux3499z00_4304;
BgL_aux3499z00_4304 = 
CAR(BgL_pairz00_2959); 
if(
INTEGERP(BgL_aux3499z00_4304))
{ /* Llib/sparql.scm 197 */
BgL_auxz00_8206 = BgL_aux3499z00_4304
; }  else 
{ 
obj_t BgL_auxz00_8210;
BgL_auxz00_8210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)6280)), BGl_string3863z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_aux3499z00_4304); 
FAILURE(BgL_auxz00_8210,BFALSE,BFALSE);} } 
BgL_auxz00_8192 = 
(long)CINT(BgL_auxz00_8206); } } } 
BgL_arg1953z00_1048 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_8192, ((long)10)); } } 
{ /* Llib/sparql.scm 194 */
obj_t BgL_list1954z00_1049;
{ /* Llib/sparql.scm 194 */
obj_t BgL_arg1955z00_1050;
{ /* Llib/sparql.scm 194 */
obj_t BgL_arg1956z00_1051;
{ /* Llib/sparql.scm 194 */
obj_t BgL_arg1957z00_1052;
{ /* Llib/sparql.scm 194 */
obj_t BgL_arg1958z00_1053;
BgL_arg1958z00_1053 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BNIL); 
BgL_arg1957z00_1052 = 
MAKE_PAIR(BgL_arg1953z00_1048, BgL_arg1958z00_1053); } 
BgL_arg1956z00_1051 = 
MAKE_PAIR(BGl_string3846z00zzsparqlz00, BgL_arg1957z00_1052); } 
BgL_arg1955z00_1050 = 
MAKE_PAIR(BgL_arg1952z00_1047, BgL_arg1956z00_1051); } 
BgL_list1954z00_1049 = 
MAKE_PAIR(BgL_accuz00_1044, BgL_arg1955z00_1050); } 
BgL_accuz00_8176 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1954z00_1049); } } 
BgL_listz00_8223 = 
CDR(BgL_listz00_2962); 
BgL_listz00_2962 = BgL_listz00_8223; 
BgL_accuz00_2961 = BgL_accuz00_8176; 
goto BgL_foldz00_2960;}  else 
{ /* Llib/sparql.scm 193 */
BgL_arg1920z00_1007 = BgL_accuz00_2961; } } } 
{ /* Llib/sparql.scm 184 */
obj_t BgL_list1921z00_1008;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1922z00_1009;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1923z00_1010;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1924z00_1011;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1925z00_1012;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1926z00_1013;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1927z00_1014;
{ /* Llib/sparql.scm 184 */
obj_t BgL_arg1928z00_1015;
BgL_arg1928z00_1015 = 
MAKE_PAIR(BgL_arg1920z00_1007, BNIL); 
BgL_arg1927z00_1014 = 
MAKE_PAIR(BGl_string3854z00zzsparqlz00, BgL_arg1928z00_1015); } 
BgL_arg1926z00_1013 = 
MAKE_PAIR(BgL_arg1919z00_1006, BgL_arg1927z00_1014); } 
BgL_arg1925z00_1012 = 
MAKE_PAIR(BGl_string3864z00zzsparqlz00, BgL_arg1926z00_1013); } 
BgL_arg1924z00_1011 = 
MAKE_PAIR(BgL_sz00_27, BgL_arg1925z00_1012); } 
BgL_arg1923z00_1010 = 
MAKE_PAIR(BgL_arg1918z00_1005, BgL_arg1924z00_1011); } 
BgL_arg1922z00_1009 = 
MAKE_PAIR(BGl_string3865z00zzsparqlz00, BgL_arg1923z00_1010); } 
BgL_list1921z00_1008 = 
MAKE_PAIR(BgL_arg1917z00_1004, BgL_arg1922z00_1009); } 
BgL_aux2703z00_3377 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1921z00_1008); } } 
BGL_ENV_POP_TRACE(BgL_env2706z00_3376); 
return BgL_aux2703z00_3377;} } } } 
}



/* construct */
BGL_EXPORTED_DEF obj_t BGl_constructz00zzsparqlz00(obj_t BgL_urlz00_30, obj_t BgL_mimez00_31, obj_t BgL_prefixsz00_32, obj_t BgL_cz00_33, obj_t BgL_wz00_34, obj_t BgL_optionsz00_35)
{ AN_OBJECT;
{ /* Llib/sparql.scm 202 */
{ /* Llib/sparql.scm 203 */
obj_t BgL_name2708z00_3378;obj_t BgL_loc2709z00_3379;obj_t BgL_env2710z00_3380;
BgL_name2708z00_3378 = BGl_symbol3866z00zzsparqlz00; 
BgL_loc2709z00_3379 = BGl_list3868z00zzsparqlz00; 
BgL_env2710z00_3380 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 203 */

BGL_ENV_PUSH_TRACE(BgL_env2710z00_3380, BgL_name2708z00_3378, BgL_loc2709z00_3379); 
{ /* Llib/sparql.scm 203 */
obj_t BgL_aux2707z00_3381;
BgL_aux2707z00_3381 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_30, BgL_mimez00_31, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_prefixsz00_32, BgL_cz00_33, BgL_wz00_34, BgL_optionsz00_35)); 
BGL_ENV_POP_TRACE(BgL_env2710z00_3380); 
return BgL_aux2707z00_3381;} } } } 
}



/* &construct */
obj_t BGl_z62constructz62zzsparqlz00(obj_t BgL_envz00_3482, obj_t BgL_urlz00_3483, obj_t BgL_mimez00_3484, obj_t BgL_prefixsz00_3485, obj_t BgL_cz00_3486, obj_t BgL_wz00_3487, obj_t BgL_optionsz00_3488)
{ AN_OBJECT;
{ /* Llib/sparql.scm 202 */
return 
BGl_constructz00zzsparqlz00(BgL_urlz00_3483, BgL_mimez00_3484, BgL_prefixsz00_3485, BgL_cz00_3486, BgL_wz00_3487, BgL_optionsz00_3488);} 
}



/* select */
BGL_EXPORTED_DEF obj_t BGl_selectz00zzsparqlz00(obj_t BgL_urlz00_36, obj_t BgL_mimez00_37, obj_t BgL_distinctz00_38, obj_t BgL_prefixsz00_39, obj_t BgL_sz00_40, obj_t BgL_wz00_41, obj_t BgL_optionsz00_42)
{ AN_OBJECT;
{ /* Llib/sparql.scm 206 */
{ /* Llib/sparql.scm 208 */
obj_t BgL_name2712z00_3382;obj_t BgL_loc2713z00_3383;obj_t BgL_env2714z00_3384;
BgL_name2712z00_3382 = BGl_symbol3869z00zzsparqlz00; 
BgL_loc2713z00_3383 = BGl_list3871z00zzsparqlz00; 
BgL_env2714z00_3384 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 208 */

BGL_ENV_PUSH_TRACE(BgL_env2714z00_3384, BgL_name2712z00_3382, BgL_loc2713z00_3383); 
{ /* Llib/sparql.scm 208 */
obj_t BgL_aux2711z00_3385;
BgL_aux2711z00_3385 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_36, BgL_mimez00_37, 
BGl_selectzd2stringzd2zzsparqlz00(BgL_distinctz00_38, BgL_prefixsz00_39, BgL_sz00_40, BgL_wz00_41, BgL_optionsz00_42)); 
BGL_ENV_POP_TRACE(BgL_env2714z00_3384); 
return BgL_aux2711z00_3385;} } } } 
}



/* &select */
obj_t BGl_z62selectz62zzsparqlz00(obj_t BgL_envz00_3489, obj_t BgL_urlz00_3490, obj_t BgL_mimez00_3491, obj_t BgL_distinctz00_3492, obj_t BgL_prefixsz00_3493, obj_t BgL_sz00_3494, obj_t BgL_wz00_3495, obj_t BgL_optionsz00_3496)
{ AN_OBJECT;
{ /* Llib/sparql.scm 206 */
return 
BGl_selectz00zzsparqlz00(BgL_urlz00_3490, BgL_mimez00_3491, BgL_distinctz00_3492, BgL_prefixsz00_3493, BgL_sz00_3494, BgL_wz00_3495, BgL_optionsz00_3496);} 
}



/* construct-nt */
BGL_EXPORTED_DEF obj_t BGl_constructzd2ntzd2zzsparqlz00(obj_t BgL_urlz00_43, obj_t BgL_optionsz00_44, obj_t BgL_cz00_45, obj_t BgL_wz00_46)
{ AN_OBJECT;
{ /* Llib/sparql.scm 210 */
{ /* Llib/sparql.scm 211 */
obj_t BgL_name2716z00_3386;obj_t BgL_loc2717z00_3387;obj_t BgL_env2718z00_3388;
BgL_name2716z00_3386 = BGl_symbol3872z00zzsparqlz00; 
BgL_loc2717z00_3387 = BGl_list3874z00zzsparqlz00; 
BgL_env2718z00_3388 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 211 */

BGL_ENV_PUSH_TRACE(BgL_env2718z00_3388, BgL_name2716z00_3386, BgL_loc2717z00_3387); 
{ /* Llib/sparql.scm 211 */
obj_t BgL_aux2715z00_3389;
{ /* Llib/sparql.scm 211 */
obj_t BgL_prefixsz00_2979;
BgL_prefixsz00_2979 = BGl_prefixsz00zzsparqlz00; 
BgL_aux2715z00_3389 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_43, BGl_string3825z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_prefixsz00_2979, BgL_cz00_45, BgL_wz00_46, BgL_optionsz00_44)); } 
BGL_ENV_POP_TRACE(BgL_env2718z00_3388); 
return BgL_aux2715z00_3389;} } } } 
}



/* &construct-nt */
obj_t BGl_z62constructzd2ntzb0zzsparqlz00(obj_t BgL_envz00_3497, obj_t BgL_urlz00_3498, obj_t BgL_optionsz00_3499, obj_t BgL_cz00_3500, obj_t BgL_wz00_3501)
{ AN_OBJECT;
{ /* Llib/sparql.scm 210 */
return 
BGl_constructzd2ntzd2zzsparqlz00(BgL_urlz00_3498, BgL_optionsz00_3499, BgL_cz00_3500, BgL_wz00_3501);} 
}



/* select-nt */
BGL_EXPORTED_DEF obj_t BGl_selectzd2ntzd2zzsparqlz00(obj_t BgL_urlz00_47, obj_t BgL_optionsz00_48, obj_t BgL_sz00_49, obj_t BgL_wz00_50)
{ AN_OBJECT;
{ /* Llib/sparql.scm 213 */
{ /* Llib/sparql.scm 214 */
obj_t BgL_name2720z00_3390;obj_t BgL_loc2721z00_3391;obj_t BgL_env2722z00_3392;
BgL_name2720z00_3390 = BGl_symbol3875z00zzsparqlz00; 
BgL_loc2721z00_3391 = BGl_list3877z00zzsparqlz00; 
BgL_env2722z00_3392 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 214 */

BGL_ENV_PUSH_TRACE(BgL_env2722z00_3392, BgL_name2720z00_3390, BgL_loc2721z00_3391); 
{ /* Llib/sparql.scm 214 */
obj_t BgL_aux2719z00_3393;
{ /* Llib/sparql.scm 214 */
obj_t BgL_prefixsz00_2987;
BgL_prefixsz00_2987 = BGl_prefixsz00zzsparqlz00; 
BgL_aux2719z00_3393 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_47, BGl_string3825z00zzsparqlz00, 
BGl_selectzd2stringzd2zzsparqlz00(BTRUE, BgL_prefixsz00_2987, BgL_sz00_49, BgL_wz00_50, BgL_optionsz00_48)); } 
BGL_ENV_POP_TRACE(BgL_env2722z00_3392); 
return BgL_aux2719z00_3393;} } } } 
}



/* &select-nt */
obj_t BGl_z62selectzd2ntzb0zzsparqlz00(obj_t BgL_envz00_3502, obj_t BgL_urlz00_3503, obj_t BgL_optionsz00_3504, obj_t BgL_sz00_3505, obj_t BgL_wz00_3506)
{ AN_OBJECT;
{ /* Llib/sparql.scm 213 */
return 
BGl_selectzd2ntzd2zzsparqlz00(BgL_urlz00_3503, BgL_optionsz00_3504, BgL_sz00_3505, BgL_wz00_3506);} 
}



/* construct-dbpedia */
BGL_EXPORTED_DEF obj_t BGl_constructzd2dbpediazd2zzsparqlz00(obj_t BgL_optionsz00_51, obj_t BgL_cz00_52, obj_t BgL_wz00_53)
{ AN_OBJECT;
{ /* Llib/sparql.scm 216 */
{ /* Llib/sparql.scm 219 */
obj_t BgL_name2724z00_3394;obj_t BgL_loc2725z00_3395;obj_t BgL_env2726z00_3396;
BgL_name2724z00_3394 = BGl_symbol3878z00zzsparqlz00; 
BgL_loc2725z00_3395 = BGl_list3880z00zzsparqlz00; 
BgL_env2726z00_3396 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 219 */

BGL_ENV_PUSH_TRACE(BgL_env2726z00_3396, BgL_name2724z00_3394, BgL_loc2725z00_3395); 
{ /* Llib/sparql.scm 219 */
obj_t BgL_aux2723z00_3397;
{ /* Llib/sparql.scm 219 */
obj_t BgL_arg1963z00_1061;
{ /* Llib/sparql.scm 219 */
obj_t BgL_arg1964z00_1062;obj_t BgL_arg1965z00_1063;
{ /* Llib/sparql.scm 219 */
obj_t BgL_list1968z00_1066;
{ /* Llib/sparql.scm 219 */
obj_t BgL_arg1969z00_1067;
BgL_arg1969z00_1067 = 
MAKE_PAIR(BGl_string3586z00zzsparqlz00, BNIL); 
BgL_list1968z00_1066 = 
MAKE_PAIR(BGl_string3585z00zzsparqlz00, BgL_arg1969z00_1067); } 
BgL_arg1964z00_1062 = BgL_list1968z00_1066; } 
{ /* Llib/sparql.scm 220 */
obj_t BgL_list1970z00_1068;
{ /* Llib/sparql.scm 220 */
obj_t BgL_arg1971z00_1069;
BgL_arg1971z00_1069 = 
MAKE_PAIR(BGl_string3589z00zzsparqlz00, BNIL); 
BgL_list1970z00_1068 = 
MAKE_PAIR(BGl_string3588z00zzsparqlz00, BgL_arg1971z00_1069); } 
BgL_arg1965z00_1063 = BgL_list1970z00_1068; } 
{ /* Llib/sparql.scm 218 */
obj_t BgL_list1966z00_1064;
{ /* Llib/sparql.scm 218 */
obj_t BgL_arg1967z00_1065;
BgL_arg1967z00_1065 = 
MAKE_PAIR(BgL_arg1965z00_1063, BNIL); 
BgL_list1966z00_1064 = 
MAKE_PAIR(BgL_arg1964z00_1062, BgL_arg1967z00_1065); } 
BgL_arg1963z00_1061 = BgL_list1966z00_1064; } } 
BgL_aux2723z00_3397 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BGl_string3881z00zzsparqlz00, BGl_string3825z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_arg1963z00_1061, BgL_cz00_52, BgL_wz00_53, BgL_optionsz00_51)); } 
BGL_ENV_POP_TRACE(BgL_env2726z00_3396); 
return BgL_aux2723z00_3397;} } } } 
}



/* &construct-dbpedia */
obj_t BGl_z62constructzd2dbpediazb0zzsparqlz00(obj_t BgL_envz00_3507, obj_t BgL_optionsz00_3508, obj_t BgL_cz00_3509, obj_t BgL_wz00_3510)
{ AN_OBJECT;
{ /* Llib/sparql.scm 216 */
return 
BGl_constructzd2dbpediazd2zzsparqlz00(BgL_optionsz00_3508, BgL_cz00_3509, BgL_wz00_3510);} 
}



/* children-select */
BGL_EXPORTED_DEF obj_t BGl_childrenzd2selectzd2zzsparqlz00(obj_t BgL_urlz00_54, obj_t BgL_optionsz00_55, obj_t BgL_rootz00_56)
{ AN_OBJECT;
{ /* Llib/sparql.scm 223 */
{ /* Llib/sparql.scm 227 */
obj_t BgL_name2728z00_3398;obj_t BgL_loc2729z00_3399;obj_t BgL_env2730z00_3400;
BgL_name2728z00_3398 = BGl_symbol3882z00zzsparqlz00; 
BgL_loc2729z00_3399 = BGl_list3884z00zzsparqlz00; 
BgL_env2730z00_3400 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 227 */

BGL_ENV_PUSH_TRACE(BgL_env2730z00_3400, BgL_name2728z00_3398, BgL_loc2729z00_3399); 
{ /* Llib/sparql.scm 227 */
obj_t BgL_aux2727z00_3401;
{ /* Llib/sparql.scm 227 */
obj_t BgL_arg1972z00_1070;
{ /* Llib/sparql.scm 227 */
obj_t BgL_arg1977z00_1075;
{ /* Llib/sparql.scm 227 */
obj_t BgL_list1979z00_1077;
{ /* Llib/sparql.scm 227 */
obj_t BgL_arg1980z00_1078;
{ /* Llib/sparql.scm 227 */
obj_t BgL_arg1981z00_1079;
BgL_arg1981z00_1079 = 
MAKE_PAIR(BgL_rootz00_56, BNIL); 
BgL_arg1980z00_1078 = 
MAKE_PAIR(BGl_string3885z00zzsparqlz00, BgL_arg1981z00_1079); } 
BgL_list1979z00_1077 = 
MAKE_PAIR(BGl_string3886z00zzsparqlz00, BgL_arg1980z00_1078); } 
BgL_arg1977z00_1075 = BgL_list1979z00_1077; } 
{ /* Llib/sparql.scm 225 */
obj_t BgL_list1978z00_1076;
BgL_list1978z00_1076 = 
MAKE_PAIR(BgL_arg1977z00_1075, BNIL); 
{ /* Llib/sparql.scm 225 */
obj_t BgL_prefixsz00_3014;
BgL_prefixsz00_3014 = BGl_prefixsz00zzsparqlz00; 
BgL_arg1972z00_1070 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_54, BGl_string3825z00zzsparqlz00, 
BGl_selectzd2stringzd2zzsparqlz00(BTRUE, BgL_prefixsz00_3014, BGl_string3886z00zzsparqlz00, BgL_list1978z00_1076, BgL_optionsz00_55)); } } } 
{ /* Llib/sparql.scm 224 */
obj_t BgL_list1975z00_1073;
{ /* Llib/sparql.scm 224 */
obj_t BgL_arg1976z00_1074;
BgL_arg1976z00_1074 = 
MAKE_PAIR(BGl_proc3887z00zzsparqlz00, BNIL); 
BgL_list1975z00_1073 = 
MAKE_PAIR(BGl_proc3888z00zzsparqlz00, BgL_arg1976z00_1074); } 
BgL_aux2727z00_3401 = 
BGl_pipez00zzsparqlz00(BgL_arg1972z00_1070, BgL_list1975z00_1073); } } 
BGL_ENV_POP_TRACE(BgL_env2730z00_3400); 
return BgL_aux2727z00_3401;} } } } 
}



/* &children-select */
obj_t BGl_z62childrenzd2selectzb0zzsparqlz00(obj_t BgL_envz00_3513, obj_t BgL_urlz00_3514, obj_t BgL_optionsz00_3515, obj_t BgL_rootz00_3516)
{ AN_OBJECT;
{ /* Llib/sparql.scm 223 */
return 
BGl_childrenzd2selectzd2zzsparqlz00(BgL_urlz00_3514, BgL_optionsz00_3515, BgL_rootz00_3516);} 
}



/* &<anonymous:1982:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:224> */
obj_t BGl_z62zc3anonymousza31982za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3224ze3z23zzsparqlz00(obj_t BgL_envz00_3517, obj_t BgL_lz00_3518)
{ AN_OBJECT;
{ /* Llib/sparql.scm 228 */
return 
BGl_zc3anonymousza31983za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3228ze3z41zzsparqlz00(BgL_lz00_3518);} 
}



/* <anonymous:1983:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:228> */
obj_t BGl_zc3anonymousza31983za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3228ze3z41zzsparqlz00(obj_t BgL_lis1109z00_1083)
{ AN_OBJECT;
{ /* Llib/sparql.scm 228 */
BGl_zc3anonymousza31983za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3228ze3z41zzsparqlz00:
if(
NULLP(BgL_lis1109z00_1083))
{ /* Llib/sparql.scm 228 */
return BgL_lis1109z00_1083;}  else 
{ /* Llib/sparql.scm 228 */
obj_t BgL_head1110z00_1086;obj_t BgL_tail1111z00_1087;
{ /* Llib/sparql.scm 228 */
obj_t BgL_pairz00_3021;
if(
PAIRP(BgL_lis1109z00_1083))
{ /* Llib/sparql.scm 228 */
BgL_pairz00_3021 = BgL_lis1109z00_1083; }  else 
{ 
obj_t BgL_auxz00_8289;
BgL_auxz00_8289 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7245)), BGl_string3889z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lis1109z00_1083); 
FAILURE(BgL_auxz00_8289,BFALSE,BFALSE);} 
BgL_head1110z00_1086 = 
CAR(BgL_pairz00_3021); } 
{ /* Llib/sparql.scm 228 */
obj_t BgL_pairz00_3022;
if(
PAIRP(BgL_lis1109z00_1083))
{ /* Llib/sparql.scm 228 */
BgL_pairz00_3022 = BgL_lis1109z00_1083; }  else 
{ 
obj_t BgL_auxz00_8296;
BgL_auxz00_8296 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7245)), BGl_string3889z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lis1109z00_1083); 
FAILURE(BgL_auxz00_8296,BFALSE,BFALSE);} 
BgL_tail1111z00_1087 = 
CDR(BgL_pairz00_3022); } 
{ /* Llib/sparql.scm 228 */
bool_t BgL_testz00_8301;
{ /* Llib/sparql.scm 230 */
obj_t BgL_auxz00_8302;
{ /* Llib/sparql.scm 230 */
obj_t BgL_pairz00_3023;
if(
PAIRP(BgL_head1110z00_1086))
{ /* Llib/sparql.scm 230 */
BgL_pairz00_3023 = BgL_head1110z00_1086; }  else 
{ 
obj_t BgL_auxz00_8305;
BgL_auxz00_8305 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7289)), BGl_string3889z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_head1110z00_1086); 
FAILURE(BgL_auxz00_8305,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 230 */
obj_t BgL_pairz00_3026;
{ /* Llib/sparql.scm 230 */
obj_t BgL_aux3507z00_4312;
BgL_aux3507z00_4312 = 
CDR(BgL_pairz00_3023); 
if(
PAIRP(BgL_aux3507z00_4312))
{ /* Llib/sparql.scm 230 */
BgL_pairz00_3026 = BgL_aux3507z00_4312; }  else 
{ 
obj_t BgL_auxz00_8312;
BgL_auxz00_8312 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7283)), BGl_string3889z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3507z00_4312); 
FAILURE(BgL_auxz00_8312,BFALSE,BFALSE);} } 
BgL_auxz00_8302 = 
CAR(BgL_pairz00_3026); } } 
BgL_testz00_8301 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_8302, BGl_string3890z00zzsparqlz00); } 
if(BgL_testz00_8301)
{ /* Llib/sparql.scm 228 */
obj_t BgL_newzd2tail1112zd2_1089;
BgL_newzd2tail1112zd2_1089 = 
BGl_zc3anonymousza31983za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3228ze3z41zzsparqlz00(BgL_tail1111z00_1087); 
if(
(BgL_tail1111z00_1087==BgL_newzd2tail1112zd2_1089))
{ /* Llib/sparql.scm 228 */
return BgL_lis1109z00_1083;}  else 
{ /* Llib/sparql.scm 228 */
obj_t BgL_res2592z00_3032;
BgL_res2592z00_3032 = 
MAKE_PAIR(BgL_head1110z00_1086, BgL_newzd2tail1112zd2_1089); 
return BgL_res2592z00_3032;} }  else 
{ 
obj_t BgL_lis1109z00_8322;
BgL_lis1109z00_8322 = BgL_tail1111z00_1087; 
BgL_lis1109z00_1083 = BgL_lis1109z00_8322; 
goto BGl_zc3anonymousza31983za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3228ze3z41zzsparqlz00;} } } } 
}



/* &<anonymous:1988:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:224> */
obj_t BGl_z62zc3anonymousza31988za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3224ze3z23zzsparqlz00(obj_t BgL_envz00_3519, obj_t BgL_lz00_3520)
{ AN_OBJECT;
{ /* Llib/sparql.scm 233 */
{ 
obj_t BgL_lz00_1094;
BgL_lz00_1094 = BgL_lz00_3520; 
if(
NULLP(BgL_lz00_1094))
{ /* Llib/sparql.scm 233 */
return BNIL;}  else 
{ /* Llib/sparql.scm 233 */
obj_t BgL_head1115z00_1098;
{ /* Llib/sparql.scm 233 */
obj_t BgL_arg1996z00_1111;
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3036;
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3035;
if(
PAIRP(BgL_lz00_1094))
{ /* Llib/sparql.scm 233 */
BgL_pairz00_3035 = BgL_lz00_1094; }  else 
{ 
obj_t BgL_auxz00_8327;
BgL_auxz00_8327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7377)), BGl_string3891z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lz00_1094); 
FAILURE(BgL_auxz00_8327,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 233 */
obj_t BgL_aux3511z00_4316;
BgL_aux3511z00_4316 = 
CAR(BgL_pairz00_3035); 
if(
PAIRP(BgL_aux3511z00_4316))
{ /* Llib/sparql.scm 233 */
BgL_pairz00_3036 = BgL_aux3511z00_4316; }  else 
{ 
obj_t BgL_auxz00_8334;
BgL_auxz00_8334 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7377)), BGl_string3891z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3511z00_4316); 
FAILURE(BgL_auxz00_8334,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3041;
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3040;
{ /* Llib/sparql.scm 233 */
obj_t BgL_aux3513z00_4318;
BgL_aux3513z00_4318 = 
CDR(BgL_pairz00_3036); 
if(
PAIRP(BgL_aux3513z00_4318))
{ /* Llib/sparql.scm 233 */
BgL_pairz00_3040 = BgL_aux3513z00_4318; }  else 
{ 
obj_t BgL_auxz00_8341;
BgL_auxz00_8341 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7377)), BGl_string3891z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3513z00_4318); 
FAILURE(BgL_auxz00_8341,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_aux3515z00_4320;
BgL_aux3515z00_4320 = 
CDR(BgL_pairz00_3040); 
if(
PAIRP(BgL_aux3515z00_4320))
{ /* Llib/sparql.scm 233 */
BgL_pairz00_3041 = BgL_aux3515z00_4320; }  else 
{ 
obj_t BgL_auxz00_8348;
BgL_auxz00_8348 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7377)), BGl_string3891z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3515z00_4320); 
FAILURE(BgL_auxz00_8348,BFALSE,BFALSE);} } } 
BgL_arg1996z00_1111 = 
CAR(BgL_pairz00_3041); } } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_res2594z00_3044;
BgL_res2594z00_3044 = 
MAKE_PAIR(BgL_arg1996z00_1111, BNIL); 
BgL_head1115z00_1098 = BgL_res2594z00_3044; } } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_g1119z00_1099;
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3045;
if(
PAIRP(BgL_lz00_1094))
{ /* Llib/sparql.scm 233 */
BgL_pairz00_3045 = BgL_lz00_1094; }  else 
{ 
obj_t BgL_auxz00_8356;
BgL_auxz00_8356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7377)), BGl_string3891z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lz00_1094); 
FAILURE(BgL_auxz00_8356,BFALSE,BFALSE);} 
BgL_g1119z00_1099 = 
CDR(BgL_pairz00_3045); } 
{ 
obj_t BgL_l1113z00_1101;obj_t BgL_tail1116z00_1102;
BgL_l1113z00_1101 = BgL_g1119z00_1099; 
BgL_tail1116z00_1102 = BgL_head1115z00_1098; 
BgL_zc3anonymousza31990za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3233ze3z41_1103:
if(
PAIRP(BgL_l1113z00_1101))
{ /* Llib/sparql.scm 233 */
obj_t BgL_newtail1117z00_1105;
{ /* Llib/sparql.scm 233 */
obj_t BgL_arg1993z00_1107;
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3049;
{ /* Llib/sparql.scm 233 */
obj_t BgL_aux3519z00_4324;
BgL_aux3519z00_4324 = 
CAR(BgL_l1113z00_1101); 
if(
PAIRP(BgL_aux3519z00_4324))
{ /* Llib/sparql.scm 233 */
BgL_pairz00_3049 = BgL_aux3519z00_4324; }  else 
{ 
obj_t BgL_auxz00_8366;
BgL_auxz00_8366 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7377)), BGl_string3892z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3519z00_4324); 
FAILURE(BgL_auxz00_8366,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3054;
{ /* Llib/sparql.scm 233 */
obj_t BgL_pairz00_3053;
{ /* Llib/sparql.scm 233 */
obj_t BgL_aux3521z00_4326;
BgL_aux3521z00_4326 = 
CDR(BgL_pairz00_3049); 
if(
PAIRP(BgL_aux3521z00_4326))
{ /* Llib/sparql.scm 233 */
BgL_pairz00_3053 = BgL_aux3521z00_4326; }  else 
{ 
obj_t BgL_auxz00_8373;
BgL_auxz00_8373 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7377)), BGl_string3892z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3521z00_4326); 
FAILURE(BgL_auxz00_8373,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_aux3523z00_4328;
BgL_aux3523z00_4328 = 
CDR(BgL_pairz00_3053); 
if(
PAIRP(BgL_aux3523z00_4328))
{ /* Llib/sparql.scm 233 */
BgL_pairz00_3054 = BgL_aux3523z00_4328; }  else 
{ 
obj_t BgL_auxz00_8380;
BgL_auxz00_8380 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7377)), BGl_string3892z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3523z00_4328); 
FAILURE(BgL_auxz00_8380,BFALSE,BFALSE);} } } 
BgL_arg1993z00_1107 = 
CAR(BgL_pairz00_3054); } } 
{ /* Llib/sparql.scm 233 */
obj_t BgL_res2596z00_3057;
BgL_res2596z00_3057 = 
MAKE_PAIR(BgL_arg1993z00_1107, BNIL); 
BgL_newtail1117z00_1105 = BgL_res2596z00_3057; } } 
SET_CDR(BgL_tail1116z00_1102, BgL_newtail1117z00_1105); 
{ 
obj_t BgL_tail1116z00_8389;obj_t BgL_l1113z00_8387;
BgL_l1113z00_8387 = 
CDR(BgL_l1113z00_1101); 
BgL_tail1116z00_8389 = BgL_newtail1117z00_1105; 
BgL_tail1116z00_1102 = BgL_tail1116z00_8389; 
BgL_l1113z00_1101 = BgL_l1113z00_8387; 
goto BgL_zc3anonymousza31990za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3233ze3z41_1103;} }  else 
{ /* Llib/sparql.scm 233 */
if(
NULLP(BgL_l1113z00_1101))
{ /* Llib/sparql.scm 233 */
return BgL_head1115z00_1098;}  else 
{ /* Llib/sparql.scm 233 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1113z00_1101, BGl_string3582z00zzsparqlz00, 
BINT(((long)7377)));} } } } } } } 
}



/* children-construct */
BGL_EXPORTED_DEF obj_t BGl_childrenzd2constructzd2zzsparqlz00(obj_t BgL_urlz00_57, obj_t BgL_optionsz00_58, obj_t BgL_rootz00_59)
{ AN_OBJECT;
{ /* Llib/sparql.scm 235 */
{ /* Llib/sparql.scm 239 */
obj_t BgL_name2732z00_3402;obj_t BgL_loc2733z00_3403;obj_t BgL_env2734z00_3404;
BgL_name2732z00_3402 = BGl_symbol3893z00zzsparqlz00; 
BgL_loc2733z00_3403 = BGl_list3895z00zzsparqlz00; 
BgL_env2734z00_3404 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 239 */

BGL_ENV_PUSH_TRACE(BgL_env2734z00_3404, BgL_name2732z00_3402, BgL_loc2733z00_3403); 
{ /* Llib/sparql.scm 239 */
obj_t BgL_aux2731z00_3405;
{ /* Llib/sparql.scm 239 */
obj_t BgL_arg1998z00_1115;
{ /* Llib/sparql.scm 239 */
obj_t BgL_arg2001z00_1118;
{ /* Llib/sparql.scm 239 */
obj_t BgL_list2003z00_1120;
{ /* Llib/sparql.scm 239 */
obj_t BgL_arg2004z00_1121;
{ /* Llib/sparql.scm 239 */
obj_t BgL_arg2005z00_1122;
BgL_arg2005z00_1122 = 
MAKE_PAIR(BgL_rootz00_59, BNIL); 
BgL_arg2004z00_1121 = 
MAKE_PAIR(BGl_string3885z00zzsparqlz00, BgL_arg2005z00_1122); } 
BgL_list2003z00_1120 = 
MAKE_PAIR(BGl_string3886z00zzsparqlz00, BgL_arg2004z00_1121); } 
BgL_arg2001z00_1118 = BgL_list2003z00_1120; } 
{ /* Llib/sparql.scm 237 */
obj_t BgL_list2002z00_1119;
BgL_list2002z00_1119 = 
MAKE_PAIR(BgL_arg2001z00_1118, BNIL); 
{ /* Llib/sparql.scm 237 */
obj_t BgL_cz00_3067;
BgL_cz00_3067 = BGl_list3896z00zzsparqlz00; 
{ /* Llib/sparql.scm 237 */
obj_t BgL_prefixsz00_3071;
BgL_prefixsz00_3071 = BGl_prefixsz00zzsparqlz00; 
BgL_arg1998z00_1115 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_57, BGl_string3825z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_prefixsz00_3071, BgL_cz00_3067, BgL_list2002z00_1119, BgL_optionsz00_58)); } } } } 
{ /* Llib/sparql.scm 236 */
obj_t BgL_list2000z00_1117;
BgL_list2000z00_1117 = 
MAKE_PAIR(BGl_proc3898z00zzsparqlz00, BNIL); 
BgL_aux2731z00_3405 = 
BGl_pipez00zzsparqlz00(BgL_arg1998z00_1115, BgL_list2000z00_1117); } } 
BGL_ENV_POP_TRACE(BgL_env2734z00_3404); 
return BgL_aux2731z00_3405;} } } } 
}



/* &children-construct */
obj_t BGl_z62childrenzd2constructzb0zzsparqlz00(obj_t BgL_envz00_3522, obj_t BgL_urlz00_3523, obj_t BgL_optionsz00_3524, obj_t BgL_rootz00_3525)
{ AN_OBJECT;
{ /* Llib/sparql.scm 235 */
return 
BGl_childrenzd2constructzd2zzsparqlz00(BgL_urlz00_3523, BgL_optionsz00_3524, BgL_rootz00_3525);} 
}



/* &<anonymous:2006:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:236> */
obj_t BGl_z62zc3anonymousza32006za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3236ze3z23zzsparqlz00(obj_t BgL_envz00_3526, obj_t BgL_lz00_3527)
{ AN_OBJECT;
{ /* Llib/sparql.scm 240 */
{ 
obj_t BgL_lz00_1123;
BgL_lz00_1123 = BgL_lz00_3527; 
if(
NULLP(BgL_lz00_1123))
{ /* Llib/sparql.scm 240 */
return BNIL;}  else 
{ /* Llib/sparql.scm 240 */
obj_t BgL_head1122z00_1127;
{ /* Llib/sparql.scm 240 */
obj_t BgL_res2600z00_3080;
BgL_res2600z00_3080 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1122z00_1127 = BgL_res2600z00_3080; } 
{ 
obj_t BgL_l1120z00_1129;obj_t BgL_tail1123z00_1130;
BgL_l1120z00_1129 = BgL_lz00_1123; 
BgL_tail1123z00_1130 = BgL_head1122z00_1127; 
BgL_zc3anonymousza32008za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3240ze3z41_1131:
if(
PAIRP(BgL_l1120z00_1129))
{ /* Llib/sparql.scm 240 */
obj_t BgL_newtail1124z00_1133;
{ /* Llib/sparql.scm 240 */
obj_t BgL_arg2011z00_1135;
{ /* Llib/sparql.scm 240 */
obj_t BgL_pairz00_3084;
{ /* Llib/sparql.scm 240 */
obj_t BgL_aux3525z00_4330;
BgL_aux3525z00_4330 = 
CAR(BgL_l1120z00_1129); 
if(
PAIRP(BgL_aux3525z00_4330))
{ /* Llib/sparql.scm 240 */
BgL_pairz00_3084 = BgL_aux3525z00_4330; }  else 
{ 
obj_t BgL_auxz00_8414;
BgL_auxz00_8414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7568)), BGl_string3899z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3525z00_4330); 
FAILURE(BgL_auxz00_8414,BFALSE,BFALSE);} } 
BgL_arg2011z00_1135 = 
CAR(BgL_pairz00_3084); } 
{ /* Llib/sparql.scm 240 */
obj_t BgL_res2602z00_3087;
BgL_res2602z00_3087 = 
MAKE_PAIR(BgL_arg2011z00_1135, BNIL); 
BgL_newtail1124z00_1133 = BgL_res2602z00_3087; } } 
SET_CDR(BgL_tail1123z00_1130, BgL_newtail1124z00_1133); 
{ 
obj_t BgL_tail1123z00_8423;obj_t BgL_l1120z00_8421;
BgL_l1120z00_8421 = 
CDR(BgL_l1120z00_1129); 
BgL_tail1123z00_8423 = BgL_newtail1124z00_1133; 
BgL_tail1123z00_1130 = BgL_tail1123z00_8423; 
BgL_l1120z00_1129 = BgL_l1120z00_8421; 
goto BgL_zc3anonymousza32008za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3240ze3z41_1131;} }  else 
{ /* Llib/sparql.scm 240 */
if(
NULLP(BgL_l1120z00_1129))
{ /* Llib/sparql.scm 240 */
return 
CDR(BgL_head1122z00_1127);}  else 
{ /* Llib/sparql.scm 240 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1120z00_1129, BGl_string3582z00zzsparqlz00, 
BINT(((long)7568)));} } } } } } 
}



/* generate-ontology */
BGL_EXPORTED_DEF obj_t BGl_generatezd2ontologyzd2zzsparqlz00(obj_t BgL_urlz00_60, obj_t BgL_rootz00_61)
{ AN_OBJECT;
{ /* Llib/sparql.scm 242 */
{ /* Llib/sparql.scm 246 */
obj_t BgL_name2736z00_3406;obj_t BgL_loc2737z00_3407;obj_t BgL_env2738z00_3408;
BgL_name2736z00_3406 = BGl_symbol3900z00zzsparqlz00; 
BgL_loc2737z00_3407 = BGl_list3902z00zzsparqlz00; 
BgL_env2738z00_3408 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 246 */

BGL_ENV_PUSH_TRACE(BgL_env2738z00_3408, BgL_name2736z00_3406, BgL_loc2737z00_3407); 
{ /* Llib/sparql.scm 246 */
obj_t BgL_aux2735z00_3409;
{ /* Llib/sparql.scm 246 */
obj_t BgL_arg2013z00_1140;
{ /* Llib/sparql.scm 246 */
obj_t BgL_arg2020z00_1147;
{ /* Llib/sparql.scm 246 */
obj_t BgL_list2022z00_1149;
{ /* Llib/sparql.scm 246 */
obj_t BgL_arg2023z00_1150;
{ /* Llib/sparql.scm 246 */
obj_t BgL_arg2024z00_1151;
BgL_arg2024z00_1151 = 
MAKE_PAIR(BgL_rootz00_61, BNIL); 
BgL_arg2023z00_1150 = 
MAKE_PAIR(BGl_string3885z00zzsparqlz00, BgL_arg2024z00_1151); } 
BgL_list2022z00_1149 = 
MAKE_PAIR(BGl_string3886z00zzsparqlz00, BgL_arg2023z00_1150); } 
BgL_arg2020z00_1147 = BgL_list2022z00_1149; } 
{ /* Llib/sparql.scm 244 */
obj_t BgL_list2021z00_1148;
BgL_list2021z00_1148 = 
MAKE_PAIR(BgL_arg2020z00_1147, BNIL); 
{ /* Llib/sparql.scm 244 */
obj_t BgL_prefixsz00_3103;
BgL_prefixsz00_3103 = BGl_prefixsz00zzsparqlz00; 
BgL_arg2013z00_1140 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_60, BGl_string3825z00zzsparqlz00, 
BGl_selectzd2stringzd2zzsparqlz00(BTRUE, BgL_prefixsz00_3103, BGl_string3886z00zzsparqlz00, BgL_list2021z00_1148, BNIL)); } } } 
{ /* Llib/sparql.scm 247 */
obj_t BgL_zc3anonymousza32041za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3243ze3z41_3530;
BgL_zc3anonymousza32041za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3243ze3z41_3530 = 
MAKE_FX_PROCEDURE(BGl_z62zc3anonymousza32041za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3243ze3z23zzsparqlz00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza32041za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3243ze3z41_3530, 
(int)(((long)0)), BgL_urlz00_60); 
PROCEDURE_SET(BgL_zc3anonymousza32041za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3243ze3z41_3530, 
(int)(((long)1)), BgL_rootz00_61); 
{ /* Llib/sparql.scm 243 */
obj_t BgL_list2017z00_1144;
{ /* Llib/sparql.scm 243 */
obj_t BgL_arg2018z00_1145;
{ /* Llib/sparql.scm 243 */
obj_t BgL_arg2019z00_1146;
BgL_arg2019z00_1146 = 
MAKE_PAIR(BgL_zc3anonymousza32041za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3243ze3z41_3530, BNIL); 
BgL_arg2018z00_1145 = 
MAKE_PAIR(BGl_proc3903z00zzsparqlz00, BgL_arg2019z00_1146); } 
BgL_list2017z00_1144 = 
MAKE_PAIR(BGl_proc3904z00zzsparqlz00, BgL_arg2018z00_1145); } 
BgL_aux2735z00_3409 = 
BGl_pipez00zzsparqlz00(BgL_arg2013z00_1140, BgL_list2017z00_1144); } } } 
BGL_ENV_POP_TRACE(BgL_env2738z00_3408); 
return BgL_aux2735z00_3409;} } } } 
}



/* &generate-ontology */
obj_t BGl_z62generatezd2ontologyzb0zzsparqlz00(obj_t BgL_envz00_3531, obj_t BgL_urlz00_3532, obj_t BgL_rootz00_3533)
{ AN_OBJECT;
{ /* Llib/sparql.scm 242 */
return 
BGl_generatezd2ontologyzd2zzsparqlz00(BgL_urlz00_3532, BgL_rootz00_3533);} 
}



/* &<anonymous:2025:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:243> */
obj_t BGl_z62zc3anonymousza32025za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3243ze3z23zzsparqlz00(obj_t BgL_envz00_3534, obj_t BgL_lz00_3535)
{ AN_OBJECT;
{ /* Llib/sparql.scm 247 */
return 
BGl_zc3anonymousza32026za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3247ze3z41zzsparqlz00(BgL_lz00_3535);} 
}



/* <anonymous:2026:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:247> */
obj_t BGl_zc3anonymousza32026za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3247ze3z41zzsparqlz00(obj_t BgL_lis1126z00_1155)
{ AN_OBJECT;
{ /* Llib/sparql.scm 247 */
BGl_zc3anonymousza32026za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3247ze3z41zzsparqlz00:
if(
NULLP(BgL_lis1126z00_1155))
{ /* Llib/sparql.scm 247 */
return BgL_lis1126z00_1155;}  else 
{ /* Llib/sparql.scm 247 */
obj_t BgL_head1127z00_1158;obj_t BgL_tail1128z00_1159;
{ /* Llib/sparql.scm 247 */
obj_t BgL_pairz00_3110;
if(
PAIRP(BgL_lis1126z00_1155))
{ /* Llib/sparql.scm 247 */
BgL_pairz00_3110 = BgL_lis1126z00_1155; }  else 
{ 
obj_t BgL_auxz00_8455;
BgL_auxz00_8455 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7735)), BGl_string3905z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lis1126z00_1155); 
FAILURE(BgL_auxz00_8455,BFALSE,BFALSE);} 
BgL_head1127z00_1158 = 
CAR(BgL_pairz00_3110); } 
{ /* Llib/sparql.scm 247 */
obj_t BgL_pairz00_3111;
if(
PAIRP(BgL_lis1126z00_1155))
{ /* Llib/sparql.scm 247 */
BgL_pairz00_3111 = BgL_lis1126z00_1155; }  else 
{ 
obj_t BgL_auxz00_8462;
BgL_auxz00_8462 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7735)), BGl_string3905z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lis1126z00_1155); 
FAILURE(BgL_auxz00_8462,BFALSE,BFALSE);} 
BgL_tail1128z00_1159 = 
CDR(BgL_pairz00_3111); } 
{ /* Llib/sparql.scm 247 */
bool_t BgL_testz00_8467;
{ /* Llib/sparql.scm 249 */
obj_t BgL_auxz00_8468;
{ /* Llib/sparql.scm 249 */
obj_t BgL_pairz00_3112;
if(
PAIRP(BgL_head1127z00_1158))
{ /* Llib/sparql.scm 249 */
BgL_pairz00_3112 = BgL_head1127z00_1158; }  else 
{ 
obj_t BgL_auxz00_8471;
BgL_auxz00_8471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7779)), BGl_string3905z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_head1127z00_1158); 
FAILURE(BgL_auxz00_8471,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 249 */
obj_t BgL_pairz00_3115;
{ /* Llib/sparql.scm 249 */
obj_t BgL_aux3533z00_4338;
BgL_aux3533z00_4338 = 
CDR(BgL_pairz00_3112); 
if(
PAIRP(BgL_aux3533z00_4338))
{ /* Llib/sparql.scm 249 */
BgL_pairz00_3115 = BgL_aux3533z00_4338; }  else 
{ 
obj_t BgL_auxz00_8478;
BgL_auxz00_8478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7773)), BGl_string3905z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3533z00_4338); 
FAILURE(BgL_auxz00_8478,BFALSE,BFALSE);} } 
BgL_auxz00_8468 = 
CAR(BgL_pairz00_3115); } } 
BgL_testz00_8467 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_8468, BGl_string3890z00zzsparqlz00); } 
if(BgL_testz00_8467)
{ /* Llib/sparql.scm 247 */
obj_t BgL_newzd2tail1129zd2_1161;
BgL_newzd2tail1129zd2_1161 = 
BGl_zc3anonymousza32026za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3247ze3z41zzsparqlz00(BgL_tail1128z00_1159); 
if(
(BgL_tail1128z00_1159==BgL_newzd2tail1129zd2_1161))
{ /* Llib/sparql.scm 247 */
return BgL_lis1126z00_1155;}  else 
{ /* Llib/sparql.scm 247 */
obj_t BgL_res2607z00_3121;
BgL_res2607z00_3121 = 
MAKE_PAIR(BgL_head1127z00_1158, BgL_newzd2tail1129zd2_1161); 
return BgL_res2607z00_3121;} }  else 
{ 
obj_t BgL_lis1126z00_8488;
BgL_lis1126z00_8488 = BgL_tail1128z00_1159; 
BgL_lis1126z00_1155 = BgL_lis1126z00_8488; 
goto BGl_zc3anonymousza32026za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3247ze3z41zzsparqlz00;} } } } 
}



/* &<anonymous:2031:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:243> */
obj_t BGl_z62zc3anonymousza32031za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3243ze3z23zzsparqlz00(obj_t BgL_envz00_3536, obj_t BgL_lz00_3537)
{ AN_OBJECT;
{ /* Llib/sparql.scm 252 */
{ 
obj_t BgL_lz00_1166;
BgL_lz00_1166 = BgL_lz00_3537; 
if(
NULLP(BgL_lz00_1166))
{ /* Llib/sparql.scm 252 */
return BNIL;}  else 
{ /* Llib/sparql.scm 252 */
obj_t BgL_head1132z00_1170;
{ /* Llib/sparql.scm 252 */
obj_t BgL_arg2039z00_1183;
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3125;
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3124;
if(
PAIRP(BgL_lz00_1166))
{ /* Llib/sparql.scm 252 */
BgL_pairz00_3124 = BgL_lz00_1166; }  else 
{ 
obj_t BgL_auxz00_8493;
BgL_auxz00_8493 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7867)), BGl_string3906z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lz00_1166); 
FAILURE(BgL_auxz00_8493,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 252 */
obj_t BgL_aux3537z00_4342;
BgL_aux3537z00_4342 = 
CAR(BgL_pairz00_3124); 
if(
PAIRP(BgL_aux3537z00_4342))
{ /* Llib/sparql.scm 252 */
BgL_pairz00_3125 = BgL_aux3537z00_4342; }  else 
{ 
obj_t BgL_auxz00_8500;
BgL_auxz00_8500 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7867)), BGl_string3906z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3537z00_4342); 
FAILURE(BgL_auxz00_8500,BFALSE,BFALSE);} } } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3130;
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3129;
{ /* Llib/sparql.scm 252 */
obj_t BgL_aux3539z00_4344;
BgL_aux3539z00_4344 = 
CDR(BgL_pairz00_3125); 
if(
PAIRP(BgL_aux3539z00_4344))
{ /* Llib/sparql.scm 252 */
BgL_pairz00_3129 = BgL_aux3539z00_4344; }  else 
{ 
obj_t BgL_auxz00_8507;
BgL_auxz00_8507 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7867)), BGl_string3906z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3539z00_4344); 
FAILURE(BgL_auxz00_8507,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_aux3541z00_4346;
BgL_aux3541z00_4346 = 
CDR(BgL_pairz00_3129); 
if(
PAIRP(BgL_aux3541z00_4346))
{ /* Llib/sparql.scm 252 */
BgL_pairz00_3130 = BgL_aux3541z00_4346; }  else 
{ 
obj_t BgL_auxz00_8514;
BgL_auxz00_8514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7867)), BGl_string3906z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3541z00_4346); 
FAILURE(BgL_auxz00_8514,BFALSE,BFALSE);} } } 
BgL_arg2039z00_1183 = 
CAR(BgL_pairz00_3130); } } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_res2609z00_3133;
BgL_res2609z00_3133 = 
MAKE_PAIR(BgL_arg2039z00_1183, BNIL); 
BgL_head1132z00_1170 = BgL_res2609z00_3133; } } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_g1135z00_1171;
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3134;
if(
PAIRP(BgL_lz00_1166))
{ /* Llib/sparql.scm 252 */
BgL_pairz00_3134 = BgL_lz00_1166; }  else 
{ 
obj_t BgL_auxz00_8522;
BgL_auxz00_8522 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7867)), BGl_string3906z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_lz00_1166); 
FAILURE(BgL_auxz00_8522,BFALSE,BFALSE);} 
BgL_g1135z00_1171 = 
CDR(BgL_pairz00_3134); } 
{ 
obj_t BgL_l1130z00_1173;obj_t BgL_tail1133z00_1174;
BgL_l1130z00_1173 = BgL_g1135z00_1171; 
BgL_tail1133z00_1174 = BgL_head1132z00_1170; 
BgL_zc3anonymousza32033za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3252ze3z41_1175:
if(
PAIRP(BgL_l1130z00_1173))
{ /* Llib/sparql.scm 252 */
obj_t BgL_newtail1134z00_1177;
{ /* Llib/sparql.scm 252 */
obj_t BgL_arg2036z00_1179;
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3138;
{ /* Llib/sparql.scm 252 */
obj_t BgL_aux3545z00_4350;
BgL_aux3545z00_4350 = 
CAR(BgL_l1130z00_1173); 
if(
PAIRP(BgL_aux3545z00_4350))
{ /* Llib/sparql.scm 252 */
BgL_pairz00_3138 = BgL_aux3545z00_4350; }  else 
{ 
obj_t BgL_auxz00_8532;
BgL_auxz00_8532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7867)), BGl_string3907z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3545z00_4350); 
FAILURE(BgL_auxz00_8532,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3143;
{ /* Llib/sparql.scm 252 */
obj_t BgL_pairz00_3142;
{ /* Llib/sparql.scm 252 */
obj_t BgL_aux3547z00_4352;
BgL_aux3547z00_4352 = 
CDR(BgL_pairz00_3138); 
if(
PAIRP(BgL_aux3547z00_4352))
{ /* Llib/sparql.scm 252 */
BgL_pairz00_3142 = BgL_aux3547z00_4352; }  else 
{ 
obj_t BgL_auxz00_8539;
BgL_auxz00_8539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7867)), BGl_string3907z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3547z00_4352); 
FAILURE(BgL_auxz00_8539,BFALSE,BFALSE);} } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_aux3549z00_4354;
BgL_aux3549z00_4354 = 
CDR(BgL_pairz00_3142); 
if(
PAIRP(BgL_aux3549z00_4354))
{ /* Llib/sparql.scm 252 */
BgL_pairz00_3143 = BgL_aux3549z00_4354; }  else 
{ 
obj_t BgL_auxz00_8546;
BgL_auxz00_8546 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)7867)), BGl_string3907z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3549z00_4354); 
FAILURE(BgL_auxz00_8546,BFALSE,BFALSE);} } } 
BgL_arg2036z00_1179 = 
CAR(BgL_pairz00_3143); } } 
{ /* Llib/sparql.scm 252 */
obj_t BgL_res2611z00_3146;
BgL_res2611z00_3146 = 
MAKE_PAIR(BgL_arg2036z00_1179, BNIL); 
BgL_newtail1134z00_1177 = BgL_res2611z00_3146; } } 
SET_CDR(BgL_tail1133z00_1174, BgL_newtail1134z00_1177); 
{ 
obj_t BgL_tail1133z00_8555;obj_t BgL_l1130z00_8553;
BgL_l1130z00_8553 = 
CDR(BgL_l1130z00_1173); 
BgL_tail1133z00_8555 = BgL_newtail1134z00_1177; 
BgL_tail1133z00_1174 = BgL_tail1133z00_8555; 
BgL_l1130z00_1173 = BgL_l1130z00_8553; 
goto BgL_zc3anonymousza32033za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3252ze3z41_1175;} }  else 
{ /* Llib/sparql.scm 252 */
if(
NULLP(BgL_l1130z00_1173))
{ /* Llib/sparql.scm 252 */
return BgL_head1132z00_1170;}  else 
{ /* Llib/sparql.scm 252 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1130z00_1173, BGl_string3582z00zzsparqlz00, 
BINT(((long)7867)));} } } } } } } 
}



/* &<anonymous:2041:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:243> */
obj_t BGl_z62zc3anonymousza32041za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3243ze3z23zzsparqlz00(obj_t BgL_envz00_3538, obj_t BgL_lz00_3541)
{ AN_OBJECT;
{ /* Llib/sparql.scm 253 */
{ /* Llib/sparql.scm 253 */
obj_t BgL_urlz00_3539;obj_t BgL_rootz00_3540;
BgL_urlz00_3539 = 
PROCEDURE_REF(BgL_envz00_3538, 
(int)(((long)0))); 
BgL_rootz00_3540 = 
PROCEDURE_REF(BgL_envz00_3538, 
(int)(((long)1))); 
{ 
obj_t BgL_lz00_1185;
BgL_lz00_1185 = BgL_lz00_3541; 
{ /* Llib/sparql.scm 253 */
obj_t BgL_arg2042z00_1187;
if(
NULLP(BgL_lz00_1185))
{ /* Llib/sparql.scm 253 */
BgL_arg2042z00_1187 = BNIL; }  else 
{ /* Llib/sparql.scm 253 */
obj_t BgL_head1138z00_1192;
{ /* Llib/sparql.scm 253 */
obj_t BgL_res2614z00_3156;
BgL_res2614z00_3156 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1138z00_1192 = BgL_res2614z00_3156; } 
{ 
obj_t BgL_l1136z00_1194;obj_t BgL_tail1139z00_1195;
BgL_l1136z00_1194 = BgL_lz00_1185; 
BgL_tail1139z00_1195 = BgL_head1138z00_1192; 
BgL_zc3anonymousza32046za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3253ze3z41_1196:
if(
PAIRP(BgL_l1136z00_1194))
{ /* Llib/sparql.scm 253 */
obj_t BgL_newtail1140z00_1198;
{ /* Llib/sparql.scm 253 */
obj_t BgL_arg2049z00_1200;
BgL_arg2049z00_1200 = 
BGl_generatezd2ontologyzd2zzsparqlz00(BgL_urlz00_3539, 
CAR(BgL_l1136z00_1194)); 
{ /* Llib/sparql.scm 253 */
obj_t BgL_res2616z00_3162;
BgL_res2616z00_3162 = 
MAKE_PAIR(BgL_arg2049z00_1200, BNIL); 
BgL_newtail1140z00_1198 = BgL_res2616z00_3162; } } 
SET_CDR(BgL_tail1139z00_1195, BgL_newtail1140z00_1198); 
{ 
obj_t BgL_tail1139z00_8575;obj_t BgL_l1136z00_8573;
BgL_l1136z00_8573 = 
CDR(BgL_l1136z00_1194); 
BgL_tail1139z00_8575 = BgL_newtail1140z00_1198; 
BgL_tail1139z00_1195 = BgL_tail1139z00_8575; 
BgL_l1136z00_1194 = BgL_l1136z00_8573; 
goto BgL_zc3anonymousza32046za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3253ze3z41_1196;} }  else 
{ /* Llib/sparql.scm 253 */
if(
NULLP(BgL_l1136z00_1194))
{ /* Llib/sparql.scm 253 */
BgL_arg2042z00_1187 = 
CDR(BgL_head1138z00_1192); }  else 
{ /* Llib/sparql.scm 253 */
BgL_arg2042z00_1187 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1136z00_1194, BGl_string3582z00zzsparqlz00, 
BINT(((long)7911))); } } } } 
{ /* Llib/sparql.scm 253 */
obj_t BgL_list2043z00_1188;
{ /* Llib/sparql.scm 253 */
obj_t BgL_arg2044z00_1189;
BgL_arg2044z00_1189 = 
MAKE_PAIR(BgL_arg2042z00_1187, BNIL); 
BgL_list2043z00_1188 = 
MAKE_PAIR(BgL_rootz00_3540, BgL_arg2044z00_1189); } 
return BgL_list2043z00_1188;} } } } } 
}



/* tree->string */
BGL_EXPORTED_DEF obj_t BGl_treezd2ze3stringz31zzsparqlz00(obj_t BgL_treez00_62)
{ AN_OBJECT;
{ /* Llib/sparql.scm 257 */
{ /* Llib/sparql.scm 260 */
obj_t BgL_name2740z00_3410;obj_t BgL_loc2741z00_3411;obj_t BgL_env2742z00_3412;
BgL_name2740z00_3410 = BGl_symbol3908z00zzsparqlz00; 
BgL_loc2741z00_3411 = BGl_list3910z00zzsparqlz00; 
BgL_env2742z00_3412 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 260 */

BGL_ENV_PUSH_TRACE(BgL_env2742z00_3412, BgL_name2740z00_3410, BgL_loc2741z00_3411); 
{ /* Llib/sparql.scm 260 */
obj_t BgL_aux2739z00_3413;
BgL_aux2739z00_3413 = 
BGl_z62treezd2ze3stringzd2levelz81zzsparqlz00(BgL_treez00_62, 
BINT(((long)0))); 
BGL_ENV_POP_TRACE(BgL_env2742z00_3412); 
return BgL_aux2739z00_3413;} } } } 
}



/* &tree->string */
obj_t BGl_z62treezd2ze3stringz53zzsparqlz00(obj_t BgL_envz00_3544, obj_t BgL_treez00_3545)
{ AN_OBJECT;
{ /* Llib/sparql.scm 257 */
return 
BGl_treezd2ze3stringz31zzsparqlz00(BgL_treez00_3545);} 
}



/* &tree->string-level */
obj_t BGl_z62treezd2ze3stringzd2levelz81zzsparqlz00(obj_t BgL_treez00_1228, obj_t BgL_levelz00_1229)
{ AN_OBJECT;
{ /* Llib/sparql.scm 270 */
{ 
obj_t BgL_nz00_1210;
{ /* Llib/sparql.scm 268 */
obj_t BgL_arg2061z00_1231;obj_t BgL_arg2062z00_1232;obj_t BgL_arg2063z00_1233;
BgL_nz00_1210 = BgL_levelz00_1229; 
{ /* Llib/sparql.scm 260 */
obj_t BgL_arg2053z00_1213;
{ /* Llib/sparql.scm 261 */
int BgL_auxz00_8589;
{ /* Llib/sparql.scm 261 */
obj_t BgL_auxz00_8590;
if(
INTEGERP(BgL_nz00_1210))
{ /* Llib/sparql.scm 261 */
BgL_auxz00_8590 = BgL_nz00_1210
; }  else 
{ 
obj_t BgL_auxz00_8593;
BgL_auxz00_8593 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)8156)), BGl_string3911z00zzsparqlz00, BGl_string3737z00zzsparqlz00, BgL_nz00_1210); 
FAILURE(BgL_auxz00_8593,BFALSE,BFALSE);} 
BgL_auxz00_8589 = 
CINT(BgL_auxz00_8590); } 
BgL_arg2053z00_1213 = 
BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_8589, BNIL); } 
{ 
obj_t BgL_accuz00_3172;obj_t BgL_listz00_3173;
BgL_accuz00_3172 = BGl_string3848z00zzsparqlz00; 
BgL_listz00_3173 = BgL_arg2053z00_1213; 
BgL_foldz00_3171:
if(
PAIRP(BgL_listz00_3173))
{ /* Llib/sparql.scm 259 */
obj_t BgL_arg1837z00_3179;obj_t BgL_arg1838z00_3180;
{ /* Llib/sparql.scm 259 */
obj_t BgL_auxz00_8601;
if(
STRINGP(BgL_accuz00_3172))
{ /* Llib/sparql.scm 259 */
BgL_auxz00_8601 = BgL_accuz00_3172
; }  else 
{ 
obj_t BgL_auxz00_8604;
BgL_auxz00_8604 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)8084)), BGl_string3794z00zzsparqlz00, BGl_string3815z00zzsparqlz00, BgL_accuz00_3172); 
FAILURE(BgL_auxz00_8604,BFALSE,BFALSE);} 
BgL_arg1837z00_3179 = 
string_append(BGl_string3912z00zzsparqlz00, BgL_auxz00_8601); } 
BgL_arg1838z00_3180 = 
CDR(BgL_listz00_3173); 
{ 
obj_t BgL_listz00_8611;obj_t BgL_accuz00_8610;
BgL_accuz00_8610 = BgL_arg1837z00_3179; 
BgL_listz00_8611 = BgL_arg1838z00_3180; 
BgL_listz00_3173 = BgL_listz00_8611; 
BgL_accuz00_3172 = BgL_accuz00_8610; 
goto BgL_foldz00_3171;} }  else 
{ /* Llib/sparql.scm 259 */
BgL_arg2061z00_1231 = BgL_accuz00_3172; } } } 
{ /* Llib/sparql.scm 269 */
obj_t BgL_pairz00_3211;
if(
PAIRP(BgL_treez00_1228))
{ /* Llib/sparql.scm 269 */
BgL_pairz00_3211 = BgL_treez00_1228; }  else 
{ 
obj_t BgL_auxz00_8614;
BgL_auxz00_8614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)8435)), BGl_string3913z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_treez00_1228); 
FAILURE(BgL_auxz00_8614,BFALSE,BFALSE);} 
BgL_arg2062z00_1232 = 
CAR(BgL_pairz00_3211); } 
{ /* Llib/sparql.scm 270 */
obj_t BgL_arg2068z00_1238;obj_t BgL_arg2069z00_1239;
{ /* Llib/sparql.scm 270 */
obj_t BgL_pairz00_3212;
if(
PAIRP(BgL_treez00_1228))
{ /* Llib/sparql.scm 270 */
BgL_pairz00_3212 = BgL_treez00_1228; }  else 
{ 
obj_t BgL_auxz00_8621;
BgL_auxz00_8621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)8481)), BGl_string3913z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_treez00_1228); 
FAILURE(BgL_auxz00_8621,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 270 */
obj_t BgL_pairz00_3215;
{ /* Llib/sparql.scm 270 */
obj_t BgL_aux3559z00_4364;
BgL_aux3559z00_4364 = 
CDR(BgL_pairz00_3212); 
if(
PAIRP(BgL_aux3559z00_4364))
{ /* Llib/sparql.scm 270 */
BgL_pairz00_3215 = BgL_aux3559z00_4364; }  else 
{ 
obj_t BgL_auxz00_8628;
BgL_auxz00_8628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)8475)), BGl_string3913z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3559z00_4364); 
FAILURE(BgL_auxz00_8628,BFALSE,BFALSE);} } 
BgL_arg2068z00_1238 = 
CAR(BgL_pairz00_3215); } } 
if(
INTEGERP(BgL_levelz00_1229))
{ /* Llib/sparql.scm 270 */
long BgL_auxz00_8635;
BgL_auxz00_8635 = 
(long)CINT(BgL_levelz00_1229); 
BgL_arg2069z00_1239 = 
BGL_SAFE_PLUS_FX(((long)1), BgL_auxz00_8635); }  else 
{ /* Llib/sparql.scm 270 */
BgL_arg2069z00_1239 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(
BINT(((long)1)), BgL_levelz00_1229); } 
{ /* Llib/sparql.scm 270 */
obj_t BgL_zc3anonymousza32058za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3263ze3z41_3542;
BgL_zc3anonymousza32058za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3263ze3z41_3542 = 
MAKE_FX_PROCEDURE(BGl_z62zc3anonymousza32058za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3263ze3z23zzsparqlz00, 
(int)(((long)2)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32058za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3263ze3z41_3542, 
(int)(((long)0)), BgL_arg2069z00_1239); 
BgL_arg2063z00_1233 = 
BGl_foldz00zzsparqlz00(BgL_zc3anonymousza32058za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3263ze3z41_3542, BGl_string3848z00zzsparqlz00, BgL_arg2068z00_1238); } } 
{ /* Llib/sparql.scm 267 */
obj_t BgL_list2064z00_1234;
{ /* Llib/sparql.scm 267 */
obj_t BgL_arg2065z00_1235;
{ /* Llib/sparql.scm 267 */
obj_t BgL_arg2066z00_1236;
{ /* Llib/sparql.scm 267 */
obj_t BgL_arg2067z00_1237;
BgL_arg2067z00_1237 = 
MAKE_PAIR(BgL_arg2063z00_1233, BNIL); 
BgL_arg2066z00_1236 = 
MAKE_PAIR(BGl_string3914z00zzsparqlz00, BgL_arg2067z00_1237); } 
BgL_arg2065z00_1235 = 
MAKE_PAIR(BgL_arg2062z00_1232, BgL_arg2066z00_1236); } 
BgL_list2064z00_1234 = 
MAKE_PAIR(BgL_arg2061z00_1231, BgL_arg2065z00_1235); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2064z00_1234);} } } } 
}



/* &<anonymous:2058:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:263> */
obj_t BGl_z62zc3anonymousza32058za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3263ze3z23zzsparqlz00(obj_t BgL_envz00_3546, obj_t BgL_accuz00_3548, obj_t BgL_childz00_3549)
{ AN_OBJECT;
{ /* Llib/sparql.scm 263 */
{ /* Llib/sparql.scm 270 */
obj_t BgL_levelz00_3547;
BgL_levelz00_3547 = 
PROCEDURE_REF(BgL_envz00_3546, 
(int)(((long)0))); 
{ 
obj_t BgL_accuz00_3221;obj_t BgL_childz00_3222;
BgL_accuz00_3221 = BgL_accuz00_3548; 
BgL_childz00_3222 = BgL_childz00_3549; 
{ /* Llib/sparql.scm 270 */
obj_t BgL_arg2059z00_3224;
BgL_arg2059z00_3224 = 
BGl_z62treezd2ze3stringzd2levelz81zzsparqlz00(BgL_childz00_3222, BgL_levelz00_3547); 
{ /* Llib/sparql.scm 270 */
obj_t BgL_auxz00_8654;
if(
STRINGP(BgL_accuz00_3221))
{ /* Llib/sparql.scm 270 */
BgL_auxz00_8654 = BgL_accuz00_3221
; }  else 
{ 
obj_t BgL_auxz00_8657;
BgL_auxz00_8657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)8455)), BGl_string3915z00zzsparqlz00, BGl_string3815z00zzsparqlz00, BgL_accuz00_3221); 
FAILURE(BgL_auxz00_8657,BFALSE,BFALSE);} 
return 
string_append(BgL_auxz00_8654, BgL_arg2059z00_3224);} } } } } 
}



/* instance-ontology */
BGL_EXPORTED_DEF obj_t BGl_instancezd2ontologyzd2zzsparqlz00(obj_t BgL_urlz00_63, obj_t BgL_typez00_64, obj_t BgL_optionsz00_65)
{ AN_OBJECT;
{ /* Llib/sparql.scm 273 */
{ /* Llib/sparql.scm 276 */
obj_t BgL_name2744z00_3414;obj_t BgL_loc2745z00_3415;obj_t BgL_env2746z00_3416;
BgL_name2744z00_3414 = BGl_symbol3916z00zzsparqlz00; 
BgL_loc2745z00_3415 = BGl_list3918z00zzsparqlz00; 
BgL_env2746z00_3416 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 276 */

BGL_ENV_PUSH_TRACE(BgL_env2746z00_3416, BgL_name2744z00_3414, BgL_loc2745z00_3415); 
{ /* Llib/sparql.scm 276 */
obj_t BgL_aux2743z00_3417;
{ /* Llib/sparql.scm 276 */
obj_t BgL_arg2071z00_1244;
{ /* Llib/sparql.scm 276 */
obj_t BgL_arg2074z00_1247;obj_t BgL_arg2075z00_1248;
{ /* Llib/sparql.scm 276 */
obj_t BgL_list2077z00_1250;
{ /* Llib/sparql.scm 276 */
obj_t BgL_arg2078z00_1251;
{ /* Llib/sparql.scm 276 */
obj_t BgL_arg2079z00_1252;
BgL_arg2079z00_1252 = 
MAKE_PAIR(BgL_typez00_64, BNIL); 
BgL_arg2078z00_1251 = 
MAKE_PAIR(BGl_string3919z00zzsparqlz00, BgL_arg2079z00_1252); } 
BgL_list2077z00_1250 = 
MAKE_PAIR(BGl_string3920z00zzsparqlz00, BgL_arg2078z00_1251); } 
BgL_arg2074z00_1247 = BgL_list2077z00_1250; } 
{ /* Llib/sparql.scm 277 */
obj_t BgL_list2082z00_1253;
{ /* Llib/sparql.scm 277 */
obj_t BgL_arg2083z00_1254;
{ /* Llib/sparql.scm 277 */
obj_t BgL_arg2084z00_1255;
BgL_arg2084z00_1255 = 
MAKE_PAIR(BgL_typez00_64, BNIL); 
BgL_arg2083z00_1254 = 
MAKE_PAIR(BGl_string3919z00zzsparqlz00, BgL_arg2084z00_1255); } 
BgL_list2082z00_1253 = 
MAKE_PAIR(BGl_string3920z00zzsparqlz00, BgL_arg2083z00_1254); } 
BgL_arg2075z00_1248 = BgL_list2082z00_1253; } 
{ /* Llib/sparql.scm 275 */
obj_t BgL_list2076z00_1249;
BgL_list2076z00_1249 = 
MAKE_PAIR(BgL_arg2075z00_1248, BNIL); 
{ /* Llib/sparql.scm 275 */
obj_t BgL_prefixsz00_3235;
BgL_prefixsz00_3235 = BGl_prefixsz00zzsparqlz00; 
BgL_arg2071z00_1244 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_63, BGl_string3825z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BgL_prefixsz00_3235, BgL_arg2074z00_1247, BgL_list2076z00_1249, BgL_optionsz00_65)); } } } 
{ /* Llib/sparql.scm 274 */
obj_t BgL_list2073z00_1246;
BgL_list2073z00_1246 = 
MAKE_PAIR(BGl_proc3921z00zzsparqlz00, BNIL); 
BgL_aux2743z00_3417 = 
BGl_pipez00zzsparqlz00(BgL_arg2071z00_1244, BgL_list2073z00_1246); } } 
BGL_ENV_POP_TRACE(BgL_env2746z00_3416); 
return BgL_aux2743z00_3417;} } } } 
}



/* &instance-ontology */
obj_t BGl_z62instancezd2ontologyzb0zzsparqlz00(obj_t BgL_envz00_3551, obj_t BgL_urlz00_3552, obj_t BgL_typez00_3553, obj_t BgL_optionsz00_3554)
{ AN_OBJECT;
{ /* Llib/sparql.scm 273 */
return 
BGl_instancezd2ontologyzd2zzsparqlz00(BgL_urlz00_3552, BgL_typez00_3553, BgL_optionsz00_3554);} 
}



/* &<anonymous:2085:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:274> */
obj_t BGl_z62zc3anonymousza32085za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3274ze3z23zzsparqlz00(obj_t BgL_envz00_3555, obj_t BgL_lz00_3556)
{ AN_OBJECT;
{ /* Llib/sparql.scm 278 */
{ 
obj_t BgL_lz00_1256;
BgL_lz00_1256 = BgL_lz00_3556; 
if(
NULLP(BgL_lz00_1256))
{ /* Llib/sparql.scm 278 */
return BNIL;}  else 
{ /* Llib/sparql.scm 278 */
obj_t BgL_head1143z00_1260;
{ /* Llib/sparql.scm 278 */
obj_t BgL_res2625z00_3244;
BgL_res2625z00_3244 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1143z00_1260 = BgL_res2625z00_3244; } 
{ 
obj_t BgL_l1141z00_1262;obj_t BgL_tail1144z00_1263;
BgL_l1141z00_1262 = BgL_lz00_1256; 
BgL_tail1144z00_1263 = BgL_head1143z00_1260; 
BgL_zc3anonymousza32087za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3278ze3z41_1264:
if(
PAIRP(BgL_l1141z00_1262))
{ /* Llib/sparql.scm 278 */
obj_t BgL_newtail1145z00_1266;
{ /* Llib/sparql.scm 278 */
obj_t BgL_arg2090z00_1268;
{ /* Llib/sparql.scm 278 */
obj_t BgL_pairz00_3248;
{ /* Llib/sparql.scm 278 */
obj_t BgL_aux3563z00_4368;
BgL_aux3563z00_4368 = 
CAR(BgL_l1141z00_1262); 
if(
PAIRP(BgL_aux3563z00_4368))
{ /* Llib/sparql.scm 278 */
BgL_pairz00_3248 = BgL_aux3563z00_4368; }  else 
{ 
obj_t BgL_auxz00_8685;
BgL_auxz00_8685 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)8690)), BGl_string3922z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3563z00_4368); 
FAILURE(BgL_auxz00_8685,BFALSE,BFALSE);} } 
BgL_arg2090z00_1268 = 
CAR(BgL_pairz00_3248); } 
{ /* Llib/sparql.scm 278 */
obj_t BgL_res2627z00_3251;
BgL_res2627z00_3251 = 
MAKE_PAIR(BgL_arg2090z00_1268, BNIL); 
BgL_newtail1145z00_1266 = BgL_res2627z00_3251; } } 
SET_CDR(BgL_tail1144z00_1263, BgL_newtail1145z00_1266); 
{ 
obj_t BgL_tail1144z00_8694;obj_t BgL_l1141z00_8692;
BgL_l1141z00_8692 = 
CDR(BgL_l1141z00_1262); 
BgL_tail1144z00_8694 = BgL_newtail1145z00_1266; 
BgL_tail1144z00_1263 = BgL_tail1144z00_8694; 
BgL_l1141z00_1262 = BgL_l1141z00_8692; 
goto BgL_zc3anonymousza32087za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3278ze3z41_1264;} }  else 
{ /* Llib/sparql.scm 278 */
if(
NULLP(BgL_l1141z00_1262))
{ /* Llib/sparql.scm 278 */
return 
CDR(BgL_head1143z00_1260);}  else 
{ /* Llib/sparql.scm 278 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1141z00_1262, BGl_string3582z00zzsparqlz00, 
BINT(((long)8690)));} } } } } } 
}



/* predicat-object */
BGL_EXPORTED_DEF obj_t BGl_predicatzd2objectzd2zzsparqlz00(obj_t BgL_urlz00_68, obj_t BgL_uriz00_69, obj_t BgL_optionsz00_70)
{ AN_OBJECT;
{ /* Llib/sparql.scm 295 */
{ /* Llib/sparql.scm 299 */
obj_t BgL_name2748z00_3418;obj_t BgL_loc2749z00_3419;obj_t BgL_env2750z00_3420;
BgL_name2748z00_3418 = BGl_symbol3923z00zzsparqlz00; 
BgL_loc2749z00_3419 = BGl_list3925z00zzsparqlz00; 
BgL_env2750z00_3420 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 299 */

BGL_ENV_PUSH_TRACE(BgL_env2750z00_3420, BgL_name2748z00_3418, BgL_loc2749z00_3419); 
{ /* Llib/sparql.scm 299 */
obj_t BgL_aux2747z00_3421;
{ /* Llib/sparql.scm 299 */
obj_t BgL_arg2133z00_1338;obj_t BgL_arg2134z00_1339;
{ /* Llib/sparql.scm 300 */
obj_t BgL_list2136z00_1341;
{ /* Llib/sparql.scm 300 */
obj_t BgL_arg2137z00_1342;
{ /* Llib/sparql.scm 300 */
obj_t BgL_arg2138z00_1343;
BgL_arg2138z00_1343 = 
MAKE_PAIR(BGl_string3926z00zzsparqlz00, BNIL); 
BgL_arg2137z00_1342 = 
MAKE_PAIR(BGl_string3927z00zzsparqlz00, BgL_arg2138z00_1343); } 
BgL_list2136z00_1341 = 
MAKE_PAIR(BgL_uriz00_69, BgL_arg2137z00_1342); } 
BgL_arg2133z00_1338 = BgL_list2136z00_1341; } 
{ /* Llib/sparql.scm 301 */
obj_t BgL_arg2139z00_1344;
{ /* Llib/sparql.scm 301 */
obj_t BgL_list2141z00_1346;
{ /* Llib/sparql.scm 301 */
obj_t BgL_arg2142z00_1347;
{ /* Llib/sparql.scm 301 */
obj_t BgL_arg2143z00_1348;
BgL_arg2143z00_1348 = 
MAKE_PAIR(BGl_string3926z00zzsparqlz00, BNIL); 
BgL_arg2142z00_1347 = 
MAKE_PAIR(BGl_string3927z00zzsparqlz00, BgL_arg2143z00_1348); } 
BgL_list2141z00_1346 = 
MAKE_PAIR(BgL_uriz00_69, BgL_arg2142z00_1347); } 
BgL_arg2139z00_1344 = BgL_list2141z00_1346; } 
{ /* Llib/sparql.scm 301 */
obj_t BgL_list2140z00_1345;
BgL_list2140z00_1345 = 
MAKE_PAIR(BgL_arg2139z00_1344, BNIL); 
BgL_arg2134z00_1339 = BgL_list2140z00_1345; } } 
BgL_aux2747z00_3421 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_68, BGl_string3825z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BNIL, BgL_arg2133z00_1338, BgL_arg2134z00_1339, BgL_optionsz00_70)); } 
BGL_ENV_POP_TRACE(BgL_env2750z00_3420); 
return BgL_aux2747z00_3421;} } } } 
}



/* &predicat-object */
obj_t BGl_z62predicatzd2objectzb0zzsparqlz00(obj_t BgL_envz00_3557, obj_t BgL_urlz00_3558, obj_t BgL_uriz00_3559, obj_t BgL_optionsz00_3560)
{ AN_OBJECT;
{ /* Llib/sparql.scm 295 */
return 
BGl_predicatzd2objectzd2zzsparqlz00(BgL_urlz00_3558, BgL_uriz00_3559, BgL_optionsz00_3560);} 
}



/* subject-predicat */
BGL_EXPORTED_DEF obj_t BGl_subjectzd2predicatzd2zzsparqlz00(obj_t BgL_urlz00_71, obj_t BgL_objectz00_72, obj_t BgL_optionsz00_73)
{ AN_OBJECT;
{ /* Llib/sparql.scm 315 */
{ /* Llib/sparql.scm 320 */
obj_t BgL_name2752z00_3422;obj_t BgL_loc2753z00_3423;obj_t BgL_env2754z00_3424;
BgL_name2752z00_3422 = BGl_symbol3928z00zzsparqlz00; 
BgL_loc2753z00_3423 = BGl_list3930z00zzsparqlz00; 
BgL_env2754z00_3424 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 320 */

BGL_ENV_PUSH_TRACE(BgL_env2754z00_3424, BgL_name2752z00_3422, BgL_loc2753z00_3423); 
{ /* Llib/sparql.scm 320 */
obj_t BgL_aux2751z00_3425;
{ /* Llib/sparql.scm 320 */
obj_t BgL_arg2144z00_1349;
{ /* Llib/sparql.scm 320 */
obj_t BgL_arg2148z00_1353;obj_t BgL_arg2149z00_1354;
{ /* Llib/sparql.scm 321 */
obj_t BgL_list2151z00_1356;
{ /* Llib/sparql.scm 321 */
obj_t BgL_arg2152z00_1357;
{ /* Llib/sparql.scm 321 */
obj_t BgL_arg2153z00_1358;
BgL_arg2153z00_1358 = 
MAKE_PAIR(BgL_objectz00_72, BNIL); 
BgL_arg2152z00_1357 = 
MAKE_PAIR(BGl_string3927z00zzsparqlz00, BgL_arg2153z00_1358); } 
BgL_list2151z00_1356 = 
MAKE_PAIR(BGl_string3886z00zzsparqlz00, BgL_arg2152z00_1357); } 
BgL_arg2148z00_1353 = BgL_list2151z00_1356; } 
{ /* Llib/sparql.scm 322 */
obj_t BgL_arg2154z00_1359;
{ /* Llib/sparql.scm 322 */
obj_t BgL_list2156z00_1361;
{ /* Llib/sparql.scm 322 */
obj_t BgL_arg2157z00_1362;
{ /* Llib/sparql.scm 322 */
obj_t BgL_arg2158z00_1363;
BgL_arg2158z00_1363 = 
MAKE_PAIR(BgL_objectz00_72, BNIL); 
BgL_arg2157z00_1362 = 
MAKE_PAIR(BGl_string3927z00zzsparqlz00, BgL_arg2158z00_1363); } 
BgL_list2156z00_1361 = 
MAKE_PAIR(BGl_string3886z00zzsparqlz00, BgL_arg2157z00_1362); } 
BgL_arg2154z00_1359 = BgL_list2156z00_1361; } 
{ /* Llib/sparql.scm 322 */
obj_t BgL_list2155z00_1360;
BgL_list2155z00_1360 = 
MAKE_PAIR(BgL_arg2154z00_1359, BNIL); 
BgL_arg2149z00_1354 = BgL_list2155z00_1360; } } 
BgL_arg2144z00_1349 = 
BGl_sparqlzd2queryzd2zzsparqlz00(BgL_urlz00_71, BGl_string3825z00zzsparqlz00, 
BGl_constructzd2stringzd2zzsparqlz00(BNIL, BgL_arg2148z00_1353, BgL_arg2149z00_1354, BgL_optionsz00_73)); } 
{ /* Llib/sparql.scm 316 */
obj_t BgL_list2146z00_1351;
BgL_list2146z00_1351 = 
MAKE_PAIR(BGl_proc3931z00zzsparqlz00, BNIL); 
BgL_aux2751z00_3425 = 
BGl_pipez00zzsparqlz00(BgL_arg2144z00_1349, BgL_list2146z00_1351); } } 
BGL_ENV_POP_TRACE(BgL_env2754z00_3424); 
return BgL_aux2751z00_3425;} } } } 
}



/* &subject-predicat */
obj_t BGl_z62subjectzd2predicatzb0zzsparqlz00(obj_t BgL_envz00_3562, obj_t BgL_urlz00_3563, obj_t BgL_objectz00_3564, obj_t BgL_optionsz00_3565)
{ AN_OBJECT;
{ /* Llib/sparql.scm 315 */
return 
BGl_subjectzd2predicatzd2zzsparqlz00(BgL_urlz00_3563, BgL_objectz00_3564, BgL_optionsz00_3565);} 
}



/* &<anonymous:2159:/Users/couillec/Documents/These/Code/Bigloo/Sparql/src/Llib/sparql,scm:316> */
obj_t BGl_z62zc3anonymousza32159za3zf2Userszf2couilleczf2Documentszf2Thesezf2Codezf2Bigloozf2Sparqlzf2srczf2Llibzf2sparqlzc2scmza3316ze3z23zzsparqlz00(obj_t BgL_envz00_3566, obj_t BgL_lz00_3567)
{ AN_OBJECT;
{ /* Llib/sparql.scm 324 */
{ 
obj_t BgL_lz00_1364;
BgL_lz00_1364 = BgL_lz00_3567; 
if(
NULLP(BgL_lz00_1364))
{ /* Llib/sparql.scm 324 */
return BNIL;}  else 
{ /* Llib/sparql.scm 324 */
obj_t BgL_head1158z00_1368;
{ /* Llib/sparql.scm 324 */
obj_t BgL_res2638z00_3292;
BgL_res2638z00_3292 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_head1158z00_1368 = BgL_res2638z00_3292; } 
{ 
obj_t BgL_l1156z00_1370;obj_t BgL_tail1159z00_1371;
BgL_l1156z00_1370 = BgL_lz00_1364; 
BgL_tail1159z00_1371 = BgL_head1158z00_1368; 
BgL_zc3anonymousza32161za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3324ze3z41_1372:
if(
PAIRP(BgL_l1156z00_1370))
{ /* Llib/sparql.scm 324 */
obj_t BgL_newtail1160z00_1374;
{ /* Llib/sparql.scm 324 */
obj_t BgL_arg2164z00_1376;
{ /* Llib/sparql.scm 324 */
obj_t BgL_tz00_1377;
BgL_tz00_1377 = 
CAR(BgL_l1156z00_1370); 
{ /* Llib/sparql.scm 324 */
obj_t BgL_arg2165z00_1378;obj_t BgL_arg2166z00_1379;
{ /* Llib/sparql.scm 324 */
obj_t BgL_pairz00_3296;
if(
PAIRP(BgL_tz00_1377))
{ /* Llib/sparql.scm 324 */
BgL_pairz00_3296 = BgL_tz00_1377; }  else 
{ 
obj_t BgL_auxz00_8736;
BgL_auxz00_8736 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)9970)), BGl_string3932z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_tz00_1377); 
FAILURE(BgL_auxz00_8736,BFALSE,BFALSE);} 
BgL_arg2165z00_1378 = 
CAR(BgL_pairz00_3296); } 
{ /* Llib/sparql.scm 324 */
obj_t BgL_pairz00_3297;
if(
PAIRP(BgL_tz00_1377))
{ /* Llib/sparql.scm 324 */
BgL_pairz00_3297 = BgL_tz00_1377; }  else 
{ 
obj_t BgL_auxz00_8743;
BgL_auxz00_8743 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)9979)), BGl_string3932z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_tz00_1377); 
FAILURE(BgL_auxz00_8743,BFALSE,BFALSE);} 
{ /* Llib/sparql.scm 324 */
obj_t BgL_pairz00_3300;
{ /* Llib/sparql.scm 324 */
obj_t BgL_aux3569z00_4374;
BgL_aux3569z00_4374 = 
CDR(BgL_pairz00_3297); 
if(
PAIRP(BgL_aux3569z00_4374))
{ /* Llib/sparql.scm 324 */
BgL_pairz00_3300 = BgL_aux3569z00_4374; }  else 
{ 
obj_t BgL_auxz00_8750;
BgL_auxz00_8750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)9973)), BGl_string3932z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_aux3569z00_4374); 
FAILURE(BgL_auxz00_8750,BFALSE,BFALSE);} } 
BgL_arg2166z00_1379 = 
CAR(BgL_pairz00_3300); } } 
{ /* Llib/sparql.scm 324 */
obj_t BgL_list2167z00_1380;
{ /* Llib/sparql.scm 324 */
obj_t BgL_arg2168z00_1381;
BgL_arg2168z00_1381 = 
MAKE_PAIR(BgL_arg2166z00_1379, BNIL); 
BgL_list2167z00_1380 = 
MAKE_PAIR(BgL_arg2165z00_1378, BgL_arg2168z00_1381); } 
BgL_arg2164z00_1376 = BgL_list2167z00_1380; } } } 
{ /* Llib/sparql.scm 324 */
obj_t BgL_res2641z00_3305;
BgL_res2641z00_3305 = 
MAKE_PAIR(BgL_arg2164z00_1376, BNIL); 
BgL_newtail1160z00_1374 = BgL_res2641z00_3305; } } 
SET_CDR(BgL_tail1159z00_1371, BgL_newtail1160z00_1374); 
{ 
obj_t BgL_tail1159z00_8761;obj_t BgL_l1156z00_8759;
BgL_l1156z00_8759 = 
CDR(BgL_l1156z00_1370); 
BgL_tail1159z00_8761 = BgL_newtail1160z00_1374; 
BgL_tail1159z00_1371 = BgL_tail1159z00_8761; 
BgL_l1156z00_1370 = BgL_l1156z00_8759; 
goto BgL_zc3anonymousza32161za3zf2userszf2couilleczf2documentszf2thesezf2codezf2bigloozf2sparqlzf2srczf2llibzf2sparqlzc2scmza3324ze3z41_1372;} }  else 
{ /* Llib/sparql.scm 324 */
if(
NULLP(BgL_l1156z00_1370))
{ /* Llib/sparql.scm 324 */
return 
CDR(BgL_head1158z00_1368);}  else 
{ /* Llib/sparql.scm 324 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3748z00zzsparqlz00, BGl_string3749z00zzsparqlz00, BgL_l1156z00_1370, BGl_string3582z00zzsparqlz00, 
BINT(((long)9942)));} } } } } } 
}



/* entity */
BGL_EXPORTED_DEF obj_t BGl_entityz00zzsparqlz00(obj_t BgL_uriz00_74)
{ AN_OBJECT;
{ /* Llib/sparql.scm 326 */
{ /* Llib/sparql.scm 327 */
obj_t BgL_name2756z00_3426;obj_t BgL_loc2757z00_3427;obj_t BgL_env2758z00_3428;
BgL_name2756z00_3426 = BGl_symbol3933z00zzsparqlz00; 
BgL_loc2757z00_3427 = BGl_list3935z00zzsparqlz00; 
BgL_env2758z00_3428 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 327 */

BGL_ENV_PUSH_TRACE(BgL_env2758z00_3428, BgL_name2756z00_3426, BgL_loc2757z00_3427); 
{ /* Llib/sparql.scm 327 */
obj_t BgL_aux2755z00_3429;
{ /* Llib/sparql.scm 327 */
obj_t BgL_arg2170z00_1385;
{ /* Llib/sparql.scm 327 */
obj_t BgL_arg2171z00_1386;
{ /* Llib/sparql.scm 327 */
obj_t BgL_arg2172z00_1387;
{ /* Llib/sparql.scm 327 */
obj_t BgL_list2173z00_1388;
BgL_list2173z00_1388 = 
MAKE_PAIR(BGl_string3936z00zzsparqlz00, BNIL); 
{ /* Llib/sparql.scm 327 */
obj_t BgL_auxz00_8770;
if(
STRINGP(BgL_uriz00_74))
{ /* Llib/sparql.scm 327 */
BgL_auxz00_8770 = BgL_uriz00_74
; }  else 
{ 
obj_t BgL_auxz00_8773;
BgL_auxz00_8773 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)10045)), BGl_string3937z00zzsparqlz00, BGl_string3815z00zzsparqlz00, BgL_uriz00_74); 
FAILURE(BgL_auxz00_8773,BFALSE,BFALSE);} 
BgL_arg2172z00_1387 = 
BGl_stringzd2splitzd2zz__r4_strings_6_7z00(BgL_auxz00_8770, BgL_list2173z00_1388); } } 
BgL_arg2171z00_1386 = 
bgl_reverse(BgL_arg2172z00_1387); } 
{ /* Llib/sparql.scm 327 */
obj_t BgL_pairz00_3312;
if(
PAIRP(BgL_arg2171z00_1386))
{ /* Llib/sparql.scm 327 */
BgL_pairz00_3312 = BgL_arg2171z00_1386; }  else 
{ 
obj_t BgL_auxz00_8781;
BgL_auxz00_8781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)10067)), BGl_string3937z00zzsparqlz00, BGl_string3741z00zzsparqlz00, BgL_arg2171z00_1386); 
FAILURE(BgL_auxz00_8781,BFALSE,BFALSE);} 
BgL_arg2170z00_1385 = 
CAR(BgL_pairz00_3312); } } 
{ /* Llib/sparql.scm 327 */
obj_t BgL_auxz00_8786;
if(
STRINGP(BgL_arg2170z00_1385))
{ /* Llib/sparql.scm 327 */
BgL_auxz00_8786 = BgL_arg2170z00_1385
; }  else 
{ 
obj_t BgL_auxz00_8789;
BgL_auxz00_8789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3582z00zzsparqlz00, 
BINT(((long)10068)), BGl_string3937z00zzsparqlz00, BGl_string3815z00zzsparqlz00, BgL_arg2170z00_1385); 
FAILURE(BgL_auxz00_8789,BFALSE,BFALSE);} 
BgL_aux2755z00_3429 = 
BGl_stringzd2replacezd2zz__r4_strings_6_7z00(BgL_auxz00_8786, 
(char)(((unsigned char)'_')), 
(char)(((unsigned char)' '))); } } 
BGL_ENV_POP_TRACE(BgL_env2758z00_3428); 
return BgL_aux2755z00_3429;} } } } 
}



/* &entity */
obj_t BGl_z62entityz62zzsparqlz00(obj_t BgL_envz00_3568, obj_t BgL_uriz00_3569)
{ AN_OBJECT;
{ /* Llib/sparql.scm 326 */
return 
BGl_entityz00zzsparqlz00(BgL_uriz00_3569);} 
}



/* object-init */
obj_t BGl_objectzd2initzd2zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
{ /* Llib/sparql.scm 1 */
obj_t BgL_name2760z00_3430;obj_t BgL_loc2761z00_3431;obj_t BgL_env2762z00_3432;
BgL_name2760z00_3430 = BGl_symbol3938z00zzsparqlz00; 
BgL_loc2761z00_3431 = BGl_list3579z00zzsparqlz00; 
BgL_env2762z00_3432 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env2762z00_3432, BgL_name2760z00_3430, BgL_loc2761z00_3431); 
BGL_ENV_POP_TRACE(BgL_env2762z00_3432); 
return BUNSPEC;} } } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
{ /* Llib/sparql.scm 1 */
obj_t BgL_name2764z00_3434;obj_t BgL_loc2765z00_3435;obj_t BgL_env2766z00_3436;
BgL_name2764z00_3434 = BGl_symbol3940z00zzsparqlz00; 
BgL_loc2765z00_3435 = BGl_list3579z00zzsparqlz00; 
BgL_env2766z00_3436 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env2766z00_3436, BgL_name2764z00_3434, BgL_loc2765z00_3435); 
BGL_ENV_POP_TRACE(BgL_env2766z00_3436); 
return BUNSPEC;} } } 
}



/* method-init */
obj_t BGl_methodzd2initzd2zzsparqlz00()
{ AN_OBJECT;
{ /* Llib/sparql.scm 1 */
{ /* Llib/sparql.scm 1 */
obj_t BgL_name2768z00_3438;obj_t BgL_loc2769z00_3439;obj_t BgL_env2770z00_3440;
BgL_name2768z00_3438 = BGl_symbol3942z00zzsparqlz00; 
BgL_loc2769z00_3439 = BGl_list3579z00zzsparqlz00; 
BgL_env2770z00_3440 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Llib/sparql.scm 1 */

BGL_ENV_PUSH_TRACE(BgL_env2770z00_3440, BgL_name2768z00_3438, BgL_loc2769z00_3439); 
BGL_ENV_POP_TRACE(BgL_env2770z00_3440); 
return BUNSPEC;} } } 
}

#ifdef __cplusplus
}
#endif
