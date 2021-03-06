/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

/*
 This file has been autogenerated by update_pch.sh. It is possible to edit it
 manually (such as when an include file has been moved/renamed/removed). All such
 manual changes will be rewritten by the next run of update_pch.sh (which presumably
 also fixes all possible problems, so it's usually better to use it).

 Generated on 2017-09-20 22:54:43 using:
 ./bin/update_pch sw msword --cutoff=4 --exclude:system --include:module --include:local

 If after updating build fails, use the following command to locate conflicting headers:
 ./bin/update_pch_bisect ./sw/inc/pch/precompiled_msword.hxx "make sw.build" --find-conflicts
*/

#include <algorithm>
#include <array>
#include <assert.h>
#include <cassert>
#include <climits>
#include <config_features.h>
#include <config_global.h>
#include <config_typesizes.h>
#include <config_vcl.h>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <exception>
#include <float.h>
#include <functional>
#include <initializer_list>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits.h>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <math.h>
#include <memory>
#include <new>
#include <ostream>
#include <set>
#include <sstream>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <swdllapi.h>
#include <swerror.h>
#include <type_traits>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <boost/optional.hpp>
#include <osl/diagnose.h>
#include <osl/diagnose.hxx>
#include <osl/doublecheckedlocking.h>
#include <osl/endian.h>
#include <osl/file.h>
#include <osl/file.hxx>
#include <osl/getglobalmutex.hxx>
#include <osl/interlck.h>
#include <osl/mutex.h>
#include <osl/mutex.hxx>
#include <osl/pipe.h>
#include <osl/process.h>
#include <osl/security.h>
#include <osl/socket.h>
#include <osl/thread.h>
#include <osl/time.h>
#include <rtl/alloc.h>
#include <rtl/byteseq.h>
#include <rtl/character.hxx>
#include <rtl/cipher.h>
#include <rtl/digest.h>
#include <rtl/instance.hxx>
#include <rtl/locale.h>
#include <rtl/math.h>
#include <rtl/math.hxx>
#include <rtl/random.h>
#include <rtl/ref.hxx>
#include <rtl/strbuf.h>
#include <rtl/strbuf.hxx>
#include <rtl/string.h>
#include <rtl/string.hxx>
#include <rtl/stringutils.hxx>
#include <rtl/tencinfo.h>
#include <rtl/textcvt.h>
#include <rtl/textenc.h>
#include <rtl/unload.h>
#include <rtl/ustrbuf.hxx>
#include <rtl/ustring.h>
#include <rtl/ustring.hxx>
#include <rtl/uuid.h>
#include <sal/config.h>
#include <sal/detail/log.h>
#include <sal/log.hxx>
#include <sal/macros.h>
#include <sal/mathconf.h>
#include <sal/saldllapi.h>
#include <sal/types.h>
#include <sal/typesizes.h>
#include <vcl/accel.hxx>
#include <vcl/alpha.hxx>
#include <vcl/animate/Animation.hxx>
#include <vcl/bitmap.hxx>
#include <vcl/bitmapex.hxx>
#include <vcl/cairo.hxx>
#include <vcl/checksum.hxx>
#include <vcl/combobox.hxx>
#include <vcl/commandevent.hxx>
#include <vcl/ctrl.hxx>
#include <vcl/cursor.hxx>
#include <vcl/devicecoordinate.hxx>
#include <vcl/dllapi.h>
#include <vcl/dndhelp.hxx>
#include <vcl/edit.hxx>
#include <vcl/errcode.hxx>
#include <vcl/errinf.hxx>
#include <vcl/event.hxx>
#include <vcl/field.hxx>
#include <vcl/fntstyle.hxx>
#include <vcl/font.hxx>
#include <vcl/gdimtf.hxx>
#include <vcl/gfxlink.hxx>
#include <vcl/gradient.hxx>
#include <vcl/graph.hxx>
#include <vcl/GraphicObject.hxx>
#include <vcl/graphicfilter.hxx>
#include <vcl/hatch.hxx>
#include <vcl/idle.hxx>
#include <vcl/image.hxx>
#include <vcl/inputctx.hxx>
#include <vcl/inputtypes.hxx>
#include <vcl/keycod.hxx>
#include <vcl/keycodes.hxx>
#include <vcl/lineinfo.hxx>
#include <vcl/mapmod.hxx>
#include <vcl/menu.hxx>
#include <vcl/metaact.hxx>
#include <vcl/metaactiontypes.hxx>
#include <vcl/outdev.hxx>
#include <vcl/outdevmap.hxx>
#include <vcl/outdevstate.hxx>
#include <vcl/ptrstyle.hxx>
#include <vcl/region.hxx>
#include <vcl/salgtype.hxx>
#include <vcl/salnativewidgets.hxx>
#include <vcl/scopedbitmapaccess.hxx>
#include <vcl/settings.hxx>
#include <vcl/spinfld.hxx>
#include <vcl/svapp.hxx>
#include <vcl/task.hxx>
#include <vcl/timer.hxx>
#include <vcl/uitest/factory.hxx>
#include <vcl/vclenum.hxx>
#include <vcl/vclevent.hxx>
#include <vcl/vclptr.hxx>
#include <vcl/vclreferencebase.hxx>
#include <vcl/vectorgraphicdata.hxx>
#include <vcl/virdev.hxx>
#include <vcl/wall.hxx>
#include <vcl/window.hxx>
#include <vcl/wmfexternal.hxx>
#include <IDocumentDrawModelAccess.hxx>
#include <IDocumentFieldsAccess.hxx>
#include <IDocumentLayoutAccess.hxx>
#include <IDocumentMarkAccess.hxx>
#include <IDocumentSettingAccess.hxx>
#include <IDocumentStylePoolAccess.hxx>
#include <IMark.hxx>
#include <IShellCursorSupplier.hxx>
#include <SwGetPoolIdFromName.hxx>
#include <basegfx/basegfxdllapi.h>
#include <basegfx/color/bcolor.hxx>
#include <basegfx/color/bcolormodifier.hxx>
#include <basegfx/matrix/b2dhommatrix.hxx>
#include <basegfx/numeric/ftools.hxx>
#include <basegfx/point/b2dpoint.hxx>
#include <basegfx/point/b2ipoint.hxx>
#include <basegfx/polygon/b2dpolygon.hxx>
#include <basegfx/polygon/b2dpolypolygon.hxx>
#include <basegfx/range/b2drange.hxx>
#include <basegfx/range/basicrange.hxx>
#include <basegfx/tuple/b2dtuple.hxx>
#include <basegfx/tuple/b2ituple.hxx>
#include <basegfx/tuple/b3dtuple.hxx>
#include <basegfx/vector/b2dsize.hxx>
#include <basegfx/vector/b2dvector.hxx>
#include <basegfx/vector/b2enums.hxx>
#include <basegfx/vector/b2ivector.hxx>
#include <basic/basicdllapi.h>
#include <basic/codecompletecache.hxx>
#include <basic/sbdef.hxx>
#include <basic/sbx.hxx>
#include <basic/sbxcore.hxx>
#include <basic/sbxdef.hxx>
#include <basic/sbxform.hxx>
#include <basic/sbxmeth.hxx>
#include <basic/sbxobj.hxx>
#include <basic/sbxprop.hxx>
#include <basic/sbxvar.hxx>
#include <bparr.hxx>
#include <breakit.hxx>
#include <calbck.hxx>
#include <charfmt.hxx>
#include <com/sun/star/accessibility/IllegalAccessibleComponentStateException.hpp>
#include <com/sun/star/accessibility/TextSegment.hpp>
#include <com/sun/star/accessibility/XAccessible.hpp>
#include <com/sun/star/accessibility/XAccessibleComponent.hpp>
#include <com/sun/star/accessibility/XAccessibleContext.hpp>
#include <com/sun/star/accessibility/XAccessibleEventBroadcaster.hpp>
#include <com/sun/star/awt/FontSlant.hpp>
#include <com/sun/star/awt/GradientStyle.hpp>
#include <com/sun/star/awt/Key.hpp>
#include <com/sun/star/awt/KeyGroup.hpp>
#include <com/sun/star/awt/Point.hpp>
#include <com/sun/star/awt/Size.hpp>
#include <com/sun/star/awt/SystemPointer.hpp>
#include <com/sun/star/awt/XControlContainer.hpp>
#include <com/sun/star/beans/NamedValue.hpp>
#include <com/sun/star/beans/PropertyState.hpp>
#include <com/sun/star/beans/PropertyValue.hpp>
#include <com/sun/star/beans/StringPair.hpp>
#include <com/sun/star/beans/XPropertyChangeListener.hpp>
#include <com/sun/star/beans/XPropertySet.hpp>
#include <com/sun/star/beans/XPropertySetInfo.hpp>
#include <com/sun/star/beans/XPropertyState.hpp>
#include <com/sun/star/bridge/oleautomation/Decimal.hpp>
#include <com/sun/star/container/XChild.hpp>
#include <com/sun/star/container/XEnumeration.hpp>
#include <com/sun/star/container/XEnumerationAccess.hpp>
#include <com/sun/star/container/XIndexAccess.hpp>
#include <com/sun/star/container/XIndexReplace.hpp>
#include <com/sun/star/container/XNameAccess.hpp>
#include <com/sun/star/container/XNameContainer.hpp>
#include <com/sun/star/datatransfer/DataFlavor.hpp>
#include <com/sun/star/datatransfer/dnd/DNDConstants.hpp>
#include <com/sun/star/datatransfer/dnd/XDragGestureListener.hpp>
#include <com/sun/star/datatransfer/dnd/XDragSourceListener.hpp>
#include <com/sun/star/datatransfer/dnd/XDropTargetListener.hpp>
#include <com/sun/star/document/CmisVersion.hpp>
#include <com/sun/star/document/EventObject.hpp>
#include <com/sun/star/document/XDocumentPropertiesSupplier.hpp>
#include <com/sun/star/document/XEventsSupplier.hpp>
#include <com/sun/star/drawing/BitmapMode.hpp>
#include <com/sun/star/drawing/DashStyle.hpp>
#include <com/sun/star/drawing/FillStyle.hpp>
#include <com/sun/star/drawing/HatchStyle.hpp>
#include <com/sun/star/drawing/LineCap.hpp>
#include <com/sun/star/drawing/LineStyle.hpp>
#include <com/sun/star/drawing/TextVerticalAdjust.hpp>
#include <com/sun/star/drawing/XDrawPage.hpp>
#include <com/sun/star/drawing/XShape.hpp>
#include <com/sun/star/drawing/XShapeBinder.hpp>
#include <com/sun/star/drawing/XShapeCombiner.hpp>
#include <com/sun/star/drawing/XShapeGrouper.hpp>
#include <com/sun/star/drawing/XShapes2.hpp>
#include <com/sun/star/embed/Aspects.hpp>
#include <com/sun/star/embed/ElementModes.hpp>
#include <com/sun/star/embed/VerbDescriptor.hpp>
#include <com/sun/star/embed/XEmbeddedObject.hpp>
#include <com/sun/star/embed/XStorage.hpp>
#include <com/sun/star/frame/FeatureStateEvent.hpp>
#include <com/sun/star/frame/XFrame.hpp>
#include <com/sun/star/frame/XModel.hpp>
#include <com/sun/star/geometry/IntegerRectangle2D.hpp>
#include <com/sun/star/graphic/XPrimitive2D.hpp>
#include <com/sun/star/i18n/Calendar2.hpp>
#include <com/sun/star/i18n/CharacterIteratorMode.hpp>
#include <com/sun/star/i18n/CollatorOptions.hpp>
#include <com/sun/star/i18n/DirectionProperty.hpp>
#include <com/sun/star/i18n/KCharacterType.hpp>
#include <com/sun/star/i18n/KParseTokens.hpp>
#include <com/sun/star/i18n/KParseType.hpp>
#include <com/sun/star/i18n/LocaleItem.hpp>
#include <com/sun/star/i18n/ParseResult.hpp>
#include <com/sun/star/i18n/ScriptType.hpp>
#include <com/sun/star/i18n/TransliterationModules.hpp>
#include <com/sun/star/i18n/TransliterationModulesExtra.hpp>
#include <com/sun/star/i18n/UnicodeScript.hpp>
#include <com/sun/star/i18n/WordType.hpp>
#include <com/sun/star/i18n/XCharacterClassification.hpp>
#include <com/sun/star/i18n/XCollator.hpp>
#include <com/sun/star/i18n/XExtendedTransliteration.hpp>
#include <com/sun/star/i18n/XLocaleData4.hpp>
#include <com/sun/star/i18n/XNativeNumberSupplier.hpp>
#include <com/sun/star/i18n/reservedWords.hpp>
#include <com/sun/star/io/XInputStream.hpp>
#include <com/sun/star/io/XOutputStream.hpp>
#include <com/sun/star/io/XSeekable.hpp>
#include <com/sun/star/io/XStream.hpp>
#include <com/sun/star/lang/DisposedException.hpp>
#include <com/sun/star/lang/EventObject.hpp>
#include <com/sun/star/lang/IllegalArgumentException.hpp>
#include <com/sun/star/lang/IndexOutOfBoundsException.hpp>
#include <com/sun/star/lang/Locale.hpp>
#include <com/sun/star/lang/XComponent.hpp>
#include <com/sun/star/lang/XMultiServiceFactory.hpp>
#include <com/sun/star/lang/XServiceInfo.hpp>
#include <com/sun/star/lang/XServiceName.hpp>
#include <com/sun/star/lang/XSingleComponentFactory.hpp>
#include <com/sun/star/lang/XSingleServiceFactory.hpp>
#include <com/sun/star/lang/XTypeProvider.hpp>
#include <com/sun/star/lang/XUnoTunnel.hpp>
#include <com/sun/star/rdf/XDocumentMetadataAccess.hpp>
#include <com/sun/star/registry/XRegistryKey.hpp>
#include <com/sun/star/script/XInvocation.hpp>
#include <com/sun/star/script/XLibraryContainer.hpp>
#include <com/sun/star/script/XStarBasicAccess.hpp>
#include <com/sun/star/style/NumberingType.hpp>
#include <com/sun/star/style/ParagraphAdjust.hpp>
#include <com/sun/star/style/TabAlign.hpp>
#include <com/sun/star/style/XStyle.hpp>
#include <com/sun/star/task/XInteractionHandler.hpp>
#include <com/sun/star/task/XInteractionRequest.hpp>
#include <com/sun/star/task/XStatusIndicator.hpp>
#include <com/sun/star/text/HoriOrientation.hpp>
#include <com/sun/star/text/TextContentAnchorType.hpp>
#include <com/sun/star/text/XText.hpp>
#include <com/sun/star/text/XTextContent.hpp>
#include <com/sun/star/text/XTextCopy.hpp>
#include <com/sun/star/text/XTextRange.hpp>
#include <com/sun/star/text/XTextRangeCompare.hpp>
#include <com/sun/star/uno/Any.h>
#include <com/sun/star/uno/Any.hxx>
#include <com/sun/star/uno/Exception.hpp>
#include <com/sun/star/uno/Reference.h>
#include <com/sun/star/uno/Reference.hxx>
#include <com/sun/star/uno/RuntimeException.hpp>
#include <com/sun/star/uno/Sequence.h>
#include <com/sun/star/uno/Sequence.hxx>
#include <com/sun/star/uno/Type.h>
#include <com/sun/star/uno/Type.hxx>
#include <com/sun/star/uno/TypeClass.hdl>
#include <com/sun/star/uno/XAggregation.hpp>
#include <com/sun/star/uno/XComponentContext.hpp>
#include <com/sun/star/uno/XInterface.hpp>
#include <com/sun/star/uno/XWeak.hpp>
#include <com/sun/star/uno/genfunc.h>
#include <com/sun/star/uno/genfunc.hxx>
#include <com/sun/star/util/Date.hpp>
#include <com/sun/star/util/DateTime.hpp>
#include <com/sun/star/util/Time.hpp>
#include <com/sun/star/util/URL.hpp>
#include <com/sun/star/util/XAccounting.hpp>
#include <com/sun/star/util/XModifyListener.hpp>
#include <com/sun/star/xml/Attribute.hpp>
#include <com/sun/star/xml/FastAttribute.hpp>
#include <com/sun/star/xml/sax/XFastAttributeList.hpp>
#include <com/sun/star/xml/sax/XFastTokenHandler.hpp>
#include <comphelper/comphelperdllapi.h>
#include <comphelper/fileformat.h>
#include <comphelper/processfactory.hxx>
#include <comphelper/sequence.hxx>
#include <comphelper/sequenceashashmap.hxx>
#include <comphelper/servicehelper.hxx>
#include <comphelper/string.hxx>
#include <comphelper/types.hxx>
#include <comphelper/weak.hxx>
#include <cppu/cppudllapi.h>
#include <cppu/unotype.hxx>
#include <cppuhelper/basemutex.hxx>
#include <cppuhelper/compbase.hxx>
#include <cppuhelper/compbase5.hxx>
#include <cppuhelper/compbase_ex.hxx>
#include <cppuhelper/cppuhelperdllapi.h>
#include <cppuhelper/factory.hxx>
#include <cppuhelper/implbase.hxx>
#include <cppuhelper/implbase5.hxx>
#include <cppuhelper/implbase6.hxx>
#include <cppuhelper/implbase_ex.hxx>
#include <cppuhelper/implbase_ex_post.hxx>
#include <cppuhelper/implbase_ex_pre.hxx>
#include <cppuhelper/interfacecontainer.h>
#include <cppuhelper/interfacecontainer.hxx>
#include <cppuhelper/queryinterface.hxx>
#include <cppuhelper/supportsservice.hxx>
#include <cppuhelper/typeprovider.hxx>
#include <cppuhelper/weak.hxx>
#include <cppuhelper/weakagg.hxx>
#include <cppuhelper/weakref.hxx>
#include <crstate.hxx>
#include <cshtyp.hxx>
#include <dcontact.hxx>
#include <docary.hxx>
#include <docsh.hxx>
#include <docufld.hxx>
#include <drawdoc.hxx>
#include <drawinglayer/drawinglayerdllapi.h>
#include <drawinglayer/primitive2d/baseprimitive2d.hxx>
#include <editeng/adjustitem.hxx>
#include <editeng/autokernitem.hxx>
#include <editeng/blinkitem.hxx>
#include <editeng/boxitem.hxx>
#include <editeng/brushitem.hxx>
#include <editeng/charhiddenitem.hxx>
#include <editeng/charreliefitem.hxx>
#include <editeng/charrotateitem.hxx>
#include <editeng/charscaleitem.hxx>
#include <editeng/cmapitem.hxx>
#include <editeng/colritem.hxx>
#include <editeng/contouritem.hxx>
#include <editeng/crossedoutitem.hxx>
#include <editeng/editdata.hxx>
#include <editeng/editeng.hxx>
#include <editeng/editengdllapi.h>
#include <editeng/editobj.hxx>
#include <editeng/editstat.hxx>
#include <editeng/editview.hxx>
#include <editeng/eedata.hxx>
#include <editeng/emphasismarkitem.hxx>
#include <editeng/escapementitem.hxx>
#include <editeng/fhgtitem.hxx>
#include <editeng/fontitem.hxx>
#include <editeng/frmdiritem.hxx>
#include <editeng/hyphenzoneitem.hxx>
#include <editeng/kernitem.hxx>
#include <editeng/langitem.hxx>
#include <editeng/lrspitem.hxx>
#include <editeng/mutxhelp.hxx>
#include <editeng/paperinf.hxx>
#include <editeng/paragraphdata.hxx>
#include <editeng/paravertalignitem.hxx>
#include <editeng/pgrditem.hxx>
#include <editeng/postitem.hxx>
#include <editeng/shaditem.hxx>
#include <editeng/shdditem.hxx>
#include <editeng/spltitem.hxx>
#include <editeng/svxenum.hxx>
#include <editeng/tstpitem.hxx>
#include <editeng/twolinesitem.hxx>
#include <editeng/udlnitem.hxx>
#include <editeng/ulspitem.hxx>
#include <editeng/unoipset.hxx>
#include <editeng/wghtitem.hxx>
#include <editeng/widwitem.hxx>
#include <fchrfmt.hxx>
#include <filter/msfilter/msfilterdllapi.h>
#include <fldbas.hxx>
#include <flyenum.hxx>
#include <fmtanchr.hxx>
#include <fmtclbl.hxx>
#include <fmtclds.hxx>
#include <fmtcnct.hxx>
#include <fmtcntnt.hxx>
#include <fmtcol.hxx>
#include <fmtflcnt.hxx>
#include <fmtfld.hxx>
#include <fmtfsize.hxx>
#include <fmtftn.hxx>
#include <fmthdft.hxx>
#include <fmtinfmt.hxx>
#include <fmtline.hxx>
#include <fmtornt.hxx>
#include <fmtpdsc.hxx>
#include <fmtrowsplt.hxx>
#include <fmtsrnd.hxx>
#include <fmturl.hxx>
#include <frmatr.hxx>
#include <frmfmt.hxx>
#include <ftninfo.hxx>
#include <grfatr.hxx>
#include <hintids.hxx>
#include <hints.hxx>
#include <i18nlangtag/i18nlangtagdllapi.h>
#include <i18nlangtag/lang.h>
#include <i18nlangtag/languagetag.hxx>
#include <i18nlangtag/mslangid.hxx>
#include <i18nutil/transliteration.hxx>
#include <index.hxx>
#include <lineinfo.hxx>
#include <mdiexp.hxx>
#include <ndarr.hxx>
#include <ndgrf.hxx>
#include <ndole.hxx>
#include <ndtxt.hxx>
#include <ndtyp.hxx>
#include <node.hxx>
#include <numrule.hxx>
#include <o3tl/cow_wrapper.hxx>
#include <o3tl/enumrange.hxx>
#include <o3tl/sorted_vector.hxx>
#include <o3tl/strong_int.hxx>
#include <o3tl/typed_flags_set.hxx>
#include <oox/dllapi.h>
#include <oox/drawingml/drawingmltypes.hxx>
#include <oox/export/utils.hxx>
#include <oox/helper/binarystreambase.hxx>
#include <oox/helper/helper.hxx>
#include <oox/helper/refmap.hxx>
#include <oox/helper/storagebase.hxx>
#include <oox/token/tokens.hxx>
#include <pagedesc.hxx>
#include <pam.hxx>
#include <paratr.hxx>
#include <poolfmt.hxx>
#include <reffld.hxx>
#include <sax/fastattribs.hxx>
#include <sax/fshelper.hxx>
#include <sax/saxdllapi.h>
#include <sfx2/dllapi.h>
#include <sfx2/sfxuno.hxx>
#include <sfx2/shell.hxx>
#include <sfx2/signaturestate.hxx>
#include <shellio.hxx>
#include <sot/exchange.hxx>
#include <sot/formats.hxx>
#include <sot/object.hxx>
#include <sot/sotdllapi.h>
#include <svl/SfxBroadcaster.hxx>
#include <svl/cenumitm.hxx>
#include <svl/cintitem.hxx>
#include <svl/custritm.hxx>
#include <svl/eitem.hxx>
#include <svl/grabbagitem.hxx>
#include <svl/hint.hxx>
#include <svl/intitem.hxx>
#include <svl/itemiter.hxx>
#include <svl/itempool.hxx>
#include <svl/itemprop.hxx>
#include <svl/itemset.hxx>
#include <svl/languageoptions.hxx>
#include <svl/lstner.hxx>
#include <svl/macitem.hxx>
#include <svl/memberid.h>
#include <svl/metitem.hxx>
#include <svl/poolitem.hxx>
#include <svl/stritem.hxx>
#include <svl/style.hxx>
#include <svl/stylesheetuser.hxx>
#include <svl/svldllapi.h>
#include <svl/undo.hxx>
#include <svl/urihelper.hxx>
#include <svl/whiter.hxx>
#include <svtools/accessibleruler.hxx>
#include <svtools/colorcfg.hxx>
#include <svtools/ehdl.hxx>
#include <svtools/embedhlp.hxx>
#include <svtools/miscopt.hxx>
#include <svtools/optionsdrawinglayer.hxx>
#include <svtools/ruler.hxx>
#include <svtools/svtdllapi.h>
#include <svtools/svtresid.hxx>
#include <svx/XPropertyEntry.hxx>
#include <svx/fmglob.hxx>
#include <svx/grfcrop.hxx>
#include <svx/ipolypolygoneditorcontroller.hxx>
#include <svx/itextprovider.hxx>
#include <svx/msdffdef.hxx>
#include <svx/sdangitm.hxx>
#include <svx/sdasitm.hxx>
#include <svx/sderitm.hxx>
#include <svx/sdgcoitm.hxx>
#include <svx/sdgcpitm.hxx>
#include <svx/sdggaitm.hxx>
#include <svx/sdginitm.hxx>
#include <svx/sdgluitm.hxx>
#include <svx/sdgmoitm.hxx>
#include <svx/sdgtritm.hxx>
#include <svx/sdmetitm.hxx>
#include <svx/sdooitm.hxx>
#include <svx/sdprcitm.hxx>
#include <svx/sdr/animation/scheduler.hxx>
#include <svx/sdr/overlay/overlayobject.hxx>
#include <svx/sdr/overlay/overlayobjectlist.hxx>
#include <svx/sdrobjectuser.hxx>
#include <svx/sdshcitm.hxx>
#include <svx/sdshitm.hxx>
#include <svx/sdshtitm.hxx>
#include <svx/sdsxyitm.hxx>
#include <svx/sdtaaitm.hxx>
#include <svx/sdtacitm.hxx>
#include <svx/sdtaditm.hxx>
#include <svx/sdtagitm.hxx>
#include <svx/sdtaiitm.hxx>
#include <svx/sdtaitm.hxx>
#include <svx/sdtakitm.hxx>
#include <svx/sdtayitm.hxx>
#include <svx/sdtcfitm.hxx>
#include <svx/sdtditm.hxx>
#include <svx/sdtfsitm.hxx>
#include <svx/sdtmfitm.hxx>
#include <svx/sdynitm.hxx>
#include <svx/selectioncontroller.hxx>
#include <svx/shapeproperty.hxx>
#include <svx/svdattr.hxx>
#include <svx/svddef.hxx>
#include <svx/svddrag.hxx>
#include <svx/svdedtv.hxx>
#include <svx/svdedxv.hxx>
#include <svx/svdglev.hxx>
#include <svx/svdglue.hxx>
#include <svx/svdhdl.hxx>
#include <svx/svdhlpln.hxx>
#include <svx/svdlayer.hxx>
#include <svx/svdmark.hxx>
#include <svx/svdmodel.hxx>
#include <svx/svdmrkv.hxx>
#include <svx/svdoattr.hxx>
#include <svx/svdobj.hxx>
#include <svx/svdoedge.hxx>
#include <svx/svdoole2.hxx>
#include <svx/svdorect.hxx>
#include <svx/svdotext.hxx>
#include <svx/svdouno.hxx>
#include <svx/svdpage.hxx>
#include <svx/svdpagv.hxx>
#include <svx/svdpntv.hxx>
#include <svx/svdpoev.hxx>
#include <svx/svdsnpv.hxx>
#include <svx/svdsob.hxx>
#include <svx/svdtext.hxx>
#include <svx/svdtrans.hxx>
#include <svx/svdtypes.hxx>
#include <svx/svdxcgv.hxx>
#include <svx/svxdllapi.h>
#include <svx/swframetypes.hxx>
#include <svx/unoapi.hxx>
#include <svx/unoprov.hxx>
#include <svx/xcolit.hxx>
#include <svx/xdash.hxx>
#include <svx/xdef.hxx>
#include <svx/xenum.hxx>
#include <svx/xfillit0.hxx>
#include <svx/xflasit.hxx>
#include <svx/xgrad.hxx>
#include <svx/xhatch.hxx>
#include <svx/xit.hxx>
#include <svx/xlineit0.hxx>
#include <svx/xlnasit.hxx>
#include <svx/xpoly.hxx>
#include <svx/xtable.hxx>
#include <svx/xtextit0.hxx>
#include <swatrset.hxx>
#include <swcrsr.hxx>
#include <swdbdata.hxx>
#include <swmodule.hxx>
#include <swrect.hxx>
#include <swregion.hxx>
#include <swtable.hxx>
#include <swtypes.hxx>
#include <tblsel.hxx>
#include <tools/color.hxx>
#include <tools/contnr.hxx>
#include <tools/date.hxx>
#include <tools/datetime.hxx>
#include <tools/debug.hxx>
#include <tools/fldunit.hxx>
#include <tools/fontenum.hxx>
#include <tools/fract.hxx>
#include <tools/gen.hxx>
#include <tools/globname.hxx>
#include <tools/lineend.hxx>
#include <tools/link.hxx>
#include <tools/mapunit.hxx>
#include <tools/poly.hxx>
#include <tools/ref.hxx>
#include <tools/solar.h>
#include <tools/stream.hxx>
#include <tools/time.hxx>
#include <tools/toolsdllapi.h>
#include <tools/urlobj.hxx>
#include <tools/weakbase.h>
#include <tools/weakbase.hxx>
#include <tools/wintypes.hxx>
#include <toxe.hxx>
#include <txatbase.hxx>
#include <txtftn.hxx>
#include <typelib/typeclass.h>
#include <typelib/typedescription.h>
#include <typelib/uik.h>
#include <ucbhelper/ucbhelperdllapi.h>
#include <uno/any2.h>
#include <uno/data.h>
#include <uno/sequence2.h>
#include <unobaseclass.hxx>
#include <unotools/calendarwrapper.hxx>
#include <unotools/charclass.hxx>
#include <unotools/collatorwrapper.hxx>
#include <unotools/configitem.hxx>
#include <unotools/fltrcfg.hxx>
#include <unotools/fontdefs.hxx>
#include <unotools/localedatawrapper.hxx>
#include <unotools/nativenumberwrapper.hxx>
#include <unotools/options.hxx>
#include <unotools/readwritemutexguard.hxx>
#include <unotools/streamwrap.hxx>
#include <unotools/syslocale.hxx>
#include <unotools/transliterationwrapper.hxx>
#include <unotools/ucbstreamhelper.hxx>
#include <unotools/unotoolsdllapi.h>
#include <viewopt.hxx>
#include <viewsh.hxx>
#include <viscrs.hxx>

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
