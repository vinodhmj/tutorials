/**
 *   \file movie.hpp
 *   \brief A Documented file.
 *
 *  Detailed description
 *
 *   \copyright Copyright 2018 The MathWorks, Inc.
 *   \remark
 *   CONFIDENTIAL AND CONTAINING PROPRIETARY TRADE SECRETS
 *   The source code contained in this listing contains proprietary and
 *   confidential trade secrets of The MathWorks, Inc.  The use, modification,
 *   or development of derivative work based on the code or ideas obtained
 *   from the code is prohibited without the express written permission of The
 *   MathWorks, Inc. The disclosure of this code to any party not authorized
 *   by The MathWorks, Inc. is strictly forbidden.
 }*/
// --------------------------------------------------

#ifdef SUPPORTS_PRAGMA_ONCE
#pragma once
#endif

#ifndef MY_GUARD_CUSTOM
#define MY_GUARD_CUSTOM
// --------------------------------------------------

namespace tutorial {

  class Movie
  {
  public:
    Movie() {}
    virtual ~Movie() {}

    double getRating(void)
    {
      return 3.14;
    }
  };


}  // tutorial

// --------------------------------------------------
#endif /* MY_GUARD_CUSTOM */
