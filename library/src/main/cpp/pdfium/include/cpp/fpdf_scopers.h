// Copyright 2018 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef PUBLIC_CPP_FPDF_SCOPERS_H_
#define PUBLIC_CPP_FPDF_SCOPERS_H_

#include <memory>
#include <type_traits>

#include "../cpp/fpdf_deleters.h"
#include "../fpdf_annot.h"
#include "../fpdf_dataavail.h"
#include "../fpdf_edit.h"
#include "../fpdf_formfill.h"
#include "../fpdf_structtree.h"
#include "../fpdf_text.h"
#include "../fpdfview.h"

// Versions of FPDF types that clean up the object at scope exit.

using ScopedFPDFAnnotation =
    std::unique_ptr<std::remove_pointer<FPDF_ANNOTATION>::type,
                    FPDFAnnotationDeleter>;

using ScopedFPDFAvail =
    std::unique_ptr<std::remove_pointer<FPDF_AVAIL>::type, FPDFAvailDeleter>;

using ScopedFPDFBitmap =
    std::unique_ptr<std::remove_pointer<FPDF_BITMAP>::type, FPDFBitmapDeleter>;

using ScopedFPDFDocument =
    std::unique_ptr<std::remove_pointer<FPDF_DOCUMENT>::type,
                    FPDFDocumentDeleter>;

using ScopedFPDFFont =
    std::unique_ptr<std::remove_pointer<FPDF_FONT>::type, FPDFFontDeleter>;

using ScopedFPDFFormHandle =
    std::unique_ptr<std::remove_pointer<FPDF_FORMHANDLE>::type,
                    FPDFFormHandleDeleter>;

using ScopedFPDFPage =
    std::unique_ptr<std::remove_pointer<FPDF_PAGE>::type, FPDFPageDeleter>;

using ScopedFPDFPageLink =
    std::unique_ptr<std::remove_pointer<FPDF_PAGELINK>::type,
                    FPDFPageLinkDeleter>;

using ScopedFPDFPageObject =
    std::unique_ptr<std::remove_pointer<FPDF_PAGEOBJECT>::type,
                    FPDFPageObjectDeleter>;

using ScopedFPDFStructTree =
    std::unique_ptr<std::remove_pointer<FPDF_STRUCTTREE>::type,
                    FPDFStructTreeDeleter>;

using ScopedFPDFTextFind =
    std::unique_ptr<std::remove_pointer<FPDF_SCHHANDLE>::type,
                    FPDFTextFindDeleter>;

using ScopedFPDFTextPage =
    std::unique_ptr<std::remove_pointer<FPDF_TEXTPAGE>::type,
                    FPDFTextPageDeleter>;

#endif  // PUBLIC_CPP_FPDF_SCOPERS_H_
