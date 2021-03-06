#ifndef SimTK_MOLMODEL_SimTKMOLMODEL_H_
#define SimTK_MOLMODEL_SimTKMOLMODEL_H_

/* -------------------------------------------------------------------------- *
 *                             SimTK Molmodel(tm)                             *
 * -------------------------------------------------------------------------- *
 * Molmodel is part of the SimTK biosimulation toolkit originating from       *
 * Simbios, the NIH National Center for Physics-Based Simulation of           *
 * Biological Structures at Stanford, funded under the NIH Roadmap for        *
 * Medical Research, grant U54 GM072970. See https://simtk.org.               *
 *                                                                            *
 * Portions copyright (c) 2007-11 Stanford University and the Authors.        *
 * Authors: Christopher Bruns, Michael Sherman                                *
 * Contributors: Peter Eastman, Randy Radmer, Mark Friedrichs, Samuel Flores  *
 *                                                                            *
 * Permission is hereby granted, free of charge, to any person obtaining a    *
 * copy of this software and associated documentation files (the "Software"), *
 * to deal in the Software without restriction, including without limitation  *
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,   *
 * and/or sell copies of the Software, and to permit persons to whom the      *
 * Software is furnished to do so, subject to the following conditions:       *
 *                                                                            *
 * This sentence, the above copyright and permission notices, and the         *
 * following disclaimer shall be included in all copies or substantial        *
 * portions of the Software.                                                  *
 *                                                                            *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL    *
 * THE AUTHORS, CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,    *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR      *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE  *
 * USE OR OTHER DEALINGS IN THE SOFTWARE.                                     *
 * -------------------------------------------------------------------------- *
 */

/** @file
This header file includes all the Molmodel header files that need to be 
visible to a compiler processing a Molmodel-using compilation unit.\ However,
user programs should included only the top-level Molmodel.h header (which 
will include this one). **/

// This should be kept self-contained for backwards compatibility since
// in releases prior to Molmodel 2.2 users were told to include 
// "SimTKmolmodel.h" rather than the now-preferred "Molmodel.h".

#include "Simbody.h"
#include "molmodel/internal/units.h"
#include "molmodel/internal/bondGeometry.h"
#include "molmodel/internal/Element.h"
#include "molmodel/internal/AtomSubsystem.h"
#include "molmodel/internal/Biotype.h"
#include "molmodel/internal/Compound.h"
#include "molmodel/internal/Protein.h"
#include "molmodel/internal/NA.h"
#include "molmodel/internal/RNA.h"
#include "molmodel/internal/DNA.h"
#include "molmodel/internal/Ions.h"
#include "molmodel/internal/DuMMForceFieldSubsystem.h"
#include "molmodel/internal/MolecularMechanicsSystem.h"
#include "molmodel/internal/CompoundSystem.h"
#include "molmodel/internal/PDBReader.h"
#include "molmodel/internal/Pdb.h"
#include "molmodel/internal/Superpose.h"
#include "molmodel/internal/PeriodicPdbWriter.h"
#include "molmodel/internal/VanderWallSphere.h"
#include "molmodel/internal/RiboseMobilizer.h"
#include "molmodel/internal/PeriodicVmdReporter.h"
#include "molmodel/internal/VelocityRescalingThermostat.h"
#include "molmodel/internal/NoseHooverThermostat.h"
#include "molmodel/internal/MassCenterMotionRemover.h"
#include "molmodel/internal/CompoundModeler.h"

#endif // SimTK_MOLMODEL_SimTKMOLMODEL_H_
