/**
 * \file
 * \author Norbert Grunwald
 * \date   Sep 10, 2019
 *
 * \copyright
 * Copyright (c) 2012-2020, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 */
#pragma once

#include "CapillaryPressureSaturation/CreateCapillaryPressureVanGenuchten.h"
#include "CapillaryPressureSaturation/CreateSaturationBrooksCorey.h"
#include "CapillaryPressureSaturation/CreateSaturationLiakopoulos.h"
#include "CapillaryPressureSaturation/CreateSaturationVanGenuchten.h"
#include "CapillaryPressureSaturation/CreateCapillaryPressureRegularizedVanGenuchten.h"

#include "CreateBishopsPowerLaw.h"
#include "CreateBishopsSaturationCutoff.h"
#include "CreateConstant.h"
#include "CreateCurve.h"
#include "CreateDupuitPermeability.h"
#include "CreateExponential.h"
#include "CreateIdealGasLaw.h"
#include "CreateLinear.h"
#include "CreateParameter.h"
#include "CreatePermeabilityOrthotropicPowerLaw.h"
#include "CreatePorosityFromMassBalance.h"
#include "CreateSaturationDependentSwelling.h"
#include "CreateTransportPorosityFromMassBalance.h"
#include "RelativePermeability/CreateRelPermBrooksCorey.h"
#include "RelativePermeability/CreateRelPermLiakopoulos.h"
#include "RelativePermeability/CreateRelPermVanGenuchten.h"
