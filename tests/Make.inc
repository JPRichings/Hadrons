tests-local: Test_solver Test_sinks Test_Actions Test_sources Test_QED_Local Test_QED Test_diskvector Test_distil Test_free_prop Test_hadrons_meson_3pt Test_hadrons_spectrum Test_sigma_to_nucleon 
EXTRA_PROGRAMS = Test_solver Test_sinks Test_Actions Test_sources Test_QED_Local Test_QED Test_diskvector Test_distil Test_free_prop Test_hadrons_meson_3pt Test_hadrons_spectrum Test_sigma_to_nucleon

Test_solver_SOURCES=Test_solver.cc
Test_solver_LDADD=-lHadrons -lGrid

Test_sinks_SOURCES=Test_sinks.cc
Test_sinks_LDADD=-lHadrons -lGrid

Test_Actions_SOURCES=Test_Actions.cc
Test_Actions_LDADD=-lHadrons -lGrid

Test_sources_SOURCES=Test_sources.cc
Test_sources_LDADD=-lHadrons -lGrid

Test_QED_Local_SOURCES=Test_QED_Local.cc
Test_QED_Local_LDADD=-lHadrons -lGrid

Test_QED_SOURCES=Test_QED.cc
Test_QED_LDADD=-lHadrons -lGrid

Test_diskvector_SOURCES=Test_diskvector.cc
Test_diskvector_LDADD=-lHadrons -lGrid

Test_distil_SOURCES=Test_distil.cc
Test_distil_LDADD=-lHadrons -lGrid

Test_free_prop_SOURCES=Test_free_prop.cc
Test_free_prop_LDADD=-lHadrons -lGrid

Test_hadrons_meson_3pt_SOURCES=Test_hadrons_meson_3pt.cc
Test_hadrons_meson_3pt_LDADD=-lHadrons -lGrid

Test_hadrons_spectrum_SOURCES=Test_hadrons_spectrum.cc
Test_hadrons_spectrum_LDADD=-lHadrons -lGrid

Test_sigma_to_nucleon_SOURCES=Test_sigma_to_nucleon.cc
Test_sigma_to_nucleon_LDADD=-lHadrons -lGrid

CLEANFILES = Test_sinks Test_Actions Test_sources Test_QED_Local Test_QED Test_diskvector Test_distil Test_free_prop Test_hadrons_meson_3pt Test_hadrons_spectrum Test_sigma_to_nucleon

