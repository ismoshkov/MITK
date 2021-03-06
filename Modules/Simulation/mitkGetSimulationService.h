/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#ifndef mitkGetSimulationService_h
#define mitkGetSimulationService_h

#include <usGetModuleContext.h>
#include <MitkSimulationExports.h>

namespace us
{
  class ModuleContext;
}

namespace mitk
{
  class ISimulationService;

  MitkSimulation_EXPORT ISimulationService* GetSimulationService(us::ModuleContext* moduleContext = us::GetModuleContext());
}

#endif
