/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#include <cassert>
#include <svx/item/TransformAnchor.hxx>
#include <item/base/ItemAdministrator.hxx>

///////////////////////////////////////////////////////////////////////////////

namespace Item
{
    ItemControlBlock& TransformAnchor::GetStaticItemControlBlock()
    {
        static ItemControlBlock aItemControlBlock(
            std::shared_ptr<ItemAdministrator>(new IAdministrator_set()),
            nullptr,
            [](){ return new TransformAnchor(TransformAnchor::GetStaticItemControlBlock()); },
            "TransformAnchor");

        return aItemControlBlock;
    }

    TransformAnchor::TransformAnchor(
        ItemControlBlock& rItemControlBlock,
        RndStdIds nValue)
    :   CntInt16(
            rItemControlBlock,
            static_cast<sal_Int16>(nValue))
    {
    }

    std::shared_ptr<const TransformAnchor> TransformAnchor::Create(RndStdIds nValue)
    {
        // use ::Create(...) method with local incarnation, it will handle
        // - detection of being default (will delete local incarnation)
        // - detection of reuse (will delete local incarnation)
        // - detectiomn of new use - will create shared_ptr for local incarnation and buffer
        return std::static_pointer_cast<const TransformAnchor>(
            TransformAnchor::GetStaticItemControlBlock().GetItemAdministrator()->Create(
                new TransformAnchor(
                    TransformAnchor::GetStaticItemControlBlock(),
                    nValue)));
    }
} // end of namespace Item

///////////////////////////////////////////////////////////////////////////////

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
