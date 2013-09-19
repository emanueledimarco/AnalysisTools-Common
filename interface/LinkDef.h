#ifndef ANALYSISTOOLS_COMMON_LINKDEF_H
#define ANALYSISTOOLS_COMMON_LINKDEF_H

#include "AnalysisTools/Common/interface/Conditions.hh"
#include "AnalysisTools/Common/interface/Counters.hh"
#include "AnalysisTools/Common/interface/EfficiencyEvaluator.hh"
#include "AnalysisTools/Common/interface/FiguresOfMeritEvaluator.h"
#include "AnalysisTools/Common/interface/LumiReWeighting.h"
#include "AnalysisTools/Common/interface/Monitor.hh"
#include "AnalysisTools/Common/interface/Selection.hh"
#include "AnalysisTools/Common/interface/Skimmer.hh"
#include "AnalysisTools/Common/interface/SprDataFiller.hh"
#include "AnalysisTools/Common/interface/TriggerMask.hh"
#endif

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;
#pragma link C++ namespace vecbos;

#pragma link C++ class vecbos::Conditions+;
#pragma link C++ class vecbos::Counters+;
#pragma link C++ class vecbos::EfficiencyEvaluator+;
#pragma link C++ class vecbos::FiguresOfMeritEvaluator+;
#pragma link C++ class vecbos::LumiReWeighting+;
#pragma link C++ class vecbos::Monitor+;
#pragma link C++ class vecbos::Selection+;
#pragma link C++ class vecbos::Skimmer+;
#pragma link C++ class vecbos::SprDataFiller+;
#pragma link C++ class vecbos::TriggerMask+;
#endif // __CINT__
