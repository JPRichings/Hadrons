AM_LDFLAGS  += -L$(top_builddir)/Hadrons
AM_CXXFLAGS += -I$(top_srcdir)
 
EXTRA_PROGRAMS = \
  Test_solver               \
  Test_sinks                \
  Test_Actions		          \
  Test_sources              \
  Test_QED_Local            \
  Test_QED                  \
  Test_database             \
  Test_database_concurrency \
  Test_diskvector           \
  Test_distil               \
  Test_field_io             \
  Test_free_prop            \
  Test_hadrons_meson_3pt    \
  Test_hadrons_spectrum     \
  Test_sigma_to_nucleon

CLEANFILES = $(EXTRA_PROGRAMS)

tests-local: $(EXTRA_PROGRAMS)

Test_solver_SOURCES=Test_solver.cpp
Test_solver_LDADD=-lHadrons -lGrid

Test_sinks_SOURCES=Test_sinks.cpp
Test_sinks_LDADD=-lHadrons -lGrid

Test_Actions_SOURCES=Test_Actions.cpp
Test_Actions_LDADD=-lHadrons -lGrid

Test_sources_SOURCES=Test_sources.cpp
Test_sources_LDADD=-lHadrons -lGrid

Test_QED_Local_SOURCES=Test_QED_Local.cpp
Test_QED_Local_LDADD=-lHadrons -lGrid

Test_QED_SOURCES=Test_QED.cpp
Test_QED_LDADD=-lHadrons -lGrid

Test_diskvector_SOURCES=Test_diskvector.cpp
Test_diskvector_LDADD=-lHadrons -lGrid

Test_database_SOURCES=Test_database.cpp
Test_database_LDADD=-lHadrons -lGrid

Test_database_concurrency_SOURCES=Test_database_concurrency.cpp
Test_database_concurrency_LDADD=-lHadrons -lGrid

Test_distil_SOURCES=Test_distil.cpp
Test_distil_LDADD=-lHadrons -lGrid

Test_field_io_SOURCES=Test_field_io.cpp
Test_field_io_LDADD=-lHadrons -lGrid

Test_free_prop_SOURCES=Test_free_prop.cpp
Test_free_prop_LDADD=-lHadrons -lGrid

Test_hadrons_meson_3pt_SOURCES=Test_hadrons_meson_3pt.cpp
Test_hadrons_meson_3pt_LDADD=-lHadrons -lGrid

Test_hadrons_spectrum_SOURCES=Test_hadrons_spectrum.cpp
Test_hadrons_spectrum_LDADD=-lHadrons -lGrid

Test_sigma_to_nucleon_SOURCES=Test_sigma_to_nucleon.cpp
Test_sigma_to_nucleon_LDADD=-lHadrons -lGrid
