﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediaconvert/model/HlsInitializationVectorInManifest.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace HlsInitializationVectorInManifestMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        HlsInitializationVectorInManifest GetHlsInitializationVectorInManifestForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return HlsInitializationVectorInManifest::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return HlsInitializationVectorInManifest::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsInitializationVectorInManifest>(hashCode);
          }

          return HlsInitializationVectorInManifest::NOT_SET;
        }

        Aws::String GetNameForHlsInitializationVectorInManifest(HlsInitializationVectorInManifest enumValue)
        {
          switch(enumValue)
          {
          case HlsInitializationVectorInManifest::INCLUDE:
            return "INCLUDE";
          case HlsInitializationVectorInManifest::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HlsInitializationVectorInManifestMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
