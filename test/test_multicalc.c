#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <Multicalc.h>
#define PROJECT_NAME    "MultipurposeCalculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_sub(void);
void test_mult(void);
void test_divide(void);
void test_power(void);
void test_cm_inch(void);
void test_inch_cm(void);
void test_feat_metre(void);
void test_metre_feat(void);
void test_metre_yard(void);
void test_yard_metre(void);
void test_km_mile(void);
void test_mile_km(void);
void test_metre_mile(void);
void test_mile_metre(void);
void test_acre_sqrmtr(void);
void test_sqrmtr_acre(void);
void test_galon_litre(void);
void test_litre_galon(void);
void test_kmph_mps(void);
void test_mps_kmph(void);
void test_kilogram_pounds(void);
void test_pounds_kilogram(void);
void test_KilometresPerLitre_MilesPerLitre(void);
void test_MilesPerLitre_KilometresPerLitre(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "sub", test_sub);
  CU_add_test(suite, "mult", test_mult);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "cm_inch", test_cm_inch);
  CU_add_test(suite, "inch_cm", test_inch_cm);
  CU_add_test(suite, "feat_metre", test_feat_metre);
  CU_add_test(suite, "metre_feat", test_metre_feat);
  CU_add_test(suite, "metre_yard", test_metre_yard);
  CU_add_test(suite, "yard_metre", test_yard_metre);
  CU_add_test(suite, "km_mile", test_km_mile);
  CU_add_test(suite, "mile_km", test_mile_km);
  CU_add_test(suite, "metre_mile", test_metre_mile);
  CU_add_test(suite, "mile_metre", test_mile_metre);
  CU_add_test(suite, "acre_sqrmtr", test_acre_sqrmtr);
  CU_add_test(suite, "sqrmtr_acre", test_sqrmtr_acre);
  CU_add_test(suite, "galon_litre", test_galon_litre);
  CU_add_test(suite, "litre_galon", test_litre_galon);
  CU_add_test(suite, "kmph_mps", test_kmph_mps);
  CU_add_test(suite, "mps_kmph", test_mps_kmph);
  CU_add_test(suite, "kilogram_pounds", test_kilogram_pounds);
  CU_add_test(suite, "pounds_kilogram", test_pounds_kilogram);
  CU_add_test(suite, "KilometresPerLitre_MilesPerLitre", test_KilometresPerLitre_MilesPerLitre);
  CU_add_test(suite, "MilesPerLitre_KilometresPerLitre", test_MilesPerLitre_KilometresPerLitre);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(20 == add(5, 15));
  
  /* Dummy fail*/
  CU_ASSERT(100 == add(750, 890));
}

void test_sub(void) {
  CU_ASSERT(-10 == sub(0, 10));
  
  /* Dummy fail*/
  CU_ASSERT(1 == sub(10, 3));
}

void test_mult(void) {
  CU_ASSERT(0 == mult(5, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == mult(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(0, 5));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}
void test_power(void) {
  CU_ASSERT(1 == power(5, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == power(2, 2));
}
void test_cm_inch(void) {
  CU_ASSERT(1.9685 == cm_inch(5));  
}
void test_inch_cm(void) {
  CU_ASSERT(12.7 == inch_cm(5));  
}
void test_feat_metre(void) {
  CU_ASSERT(1.524 == feat_metre(5));  
}
void test_metre_feat(void) {
  CU_ASSERT(16.4042 == metre_feat(5));  
}
void test_metre_yard(void) {
  CU_ASSERT(5.46807 == metre_yard(5));  
}
void test_yard_metre(void) {
  CU_ASSERT(4.572 == yard_metre(5));  
}        
void test_km_mile(void) {
  CU_ASSERT(3.10686 == km_mile(5));  
}        
void test_mile_km(void) {
  CU_ASSERT(8.04672 == mile_km(5));  
}     
void test_metre_mile(void) {
  CU_ASSERT(0.00310686 == metre_mile(5));  
}
void test_mile_metre(void) {
  CU_ASSERT(8046.72 == mile_metre(5));  
}
void test_acre_sqrmtr(void) {
  CU_ASSERT(20234.3 == acre_sqrmtr(5));  
}
void test_sqrmtr_acre(void) {
  CU_ASSERT(0.00123553 == sqrmtr_acre(5));  
}
void test_galon_litre(void) {
  CU_ASSERT(18.9271 == galon_litre(5));  
}
void test_litre_galon(void) {
  CU_ASSERT(1.32086 == litre_galon(5));  
}
void test_kmph_mps(void) {
  CU_ASSERT(1.38889 == kmph_mps(5));  
}
void test_mps_kmph(void) {
  CU_ASSERT(18 == mps_kmph(5));  
}
void test_kilogram_pounds(void) {
  CU_ASSERT(11.0231 == kilogram_pounds(5));  
}
void test_pounds_kilogram(void) {
  CU_ASSERT(2.26796 == pounds_kilogram(5));  
}
void test_KilometresPerLitre_MilesPerLitre(void) {
  CU_ASSERT(11.7607 == KilometresPerLitre_MilesPerLitre(5));  
}
void test_MilesPerLitre_KilometresPerLitre(void) {
  CU_ASSERT(2.12572 == MilesPerLitre_KilometresPerLitre(5));  
}