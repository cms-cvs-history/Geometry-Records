#ifndef RECORDS_HEGEOMETRYRECORD_H
#define RECORDS_HEGEOMETRYRECORD_H
// -*- C++ -*-
//
// Package:     Records
// Class  :     HEGeometryRecord
// 
//
// Author:      Brian Heltsley
// Created:     Tue April 1, 2008
//

#include "FWCore/Framework/interface/EventSetupRecordImplementation.h"
#include "FWCore/Framework/interface/DependentRecordImplementation.h"
#include "Geometry/Records/interface/IdealGeometryRecord.h"
#include "CondFormats/AlignmentRecord/interface/HEAlignmentRcd.h"
#include "CondFormats/AlignmentRecord/interface/HEAlignmentErrorRcd.h"
#include "CondFormats/AlignmentRecord/interface/GlobalPositionRcd.h"
#include "boost/mpl/vector.hpp"


class HEGeometryRecord : 
   public edm::eventsetup::DependentRecordImplementation<
   HEGeometryRecord,
		boost::mpl::vector<
                IdealGeometryRecord,
		HEAlignmentRcd, 
		HEAlignmentErrorRcd,
		GlobalPositionRcd
		> > {};

#endif /* RECORDS_HEGEOMETRYRECORD_H */
