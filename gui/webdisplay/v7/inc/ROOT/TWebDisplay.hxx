/// \file ROOT/TWebDisplay.hxx
/// \ingroup WebGui ROOT7
/// \author Sergey Linev <s.linev@gsi.de>
/// \date 2017-10-16
/// \warning This is part of the ROOT 7 prototype! It will change without notice. It might trigger earthquakes. Feedback
/// is welcome!

/*************************************************************************
 * Copyright (C) 1995-2017, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT7_TWebDisplay
#define ROOT7_TWebDisplay

#include <memory>

namespace ROOT {
namespace Experimental {

/** \class ROOT::Experimental::TWebDisplayManager
  Central handle to open web-based windows like Canvas or FitPanel.
  */

class TWebDisplay {
private:

public:
   /// Create a temporary TCanvas
   TWebDisplay() = default;

   ~TWebDisplay() {}

};

} // namespace Experimental
} // namespace ROOT

#endif
