// Copyright 2008, Google Inc. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//  3. Neither the name of Google Inc. nor the names of its contributors may be
//     used to endorse or promote products derived from this software without
//     specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
// WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
// EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef KML_DOM_KML_PTR_H__
#define KML_DOM_KML_PTR_H__

#include <memory>

namespace kmldom {

class Element;
class Field;

class AbstractLatLonBox;
class AbstractLink;
class AbstractView;
class BasicLink;
class ColorStyle;
class Container;
class Feature;
class Geometry;
class Object;
class Overlay;
class StyleSelector;
class SubStyle;
class TimePrimitive;
class Vec2;

class Alias;
class AtomAuthor;
class AtomCategory;
class AtomContent;
class AtomEntry;
class AtomFeed;
class AtomLink;
class BalloonStyle;
class Camera;
class Change;
class Coordinates;
class Create;
class Data;
class Delete;
class Document;
class ExtendedData;
class Folder;
class GroundOverlay;
class Icon;
class IconStyle;
class IconStyleIcon;
class ImagePyramid;
class ItemIcon;
class LabelStyle;
class LatLonAltBox;
class LatLonBox;
class LineString;
class LineStyle;
class LinearRing;
class Link;
class ListStyle;
class Location;
class Lod;
class LookAt;
class Metadata;
class Model;
class MultiGeometry;
class NetworkLink;
class NetworkLinkControl;
class Orientation;
class Pair;
class PhotoOverlay;
class Placemark;
class Point;
class PolyStyle;
class Polygon;
class Region;
class ResourceMap;
class Scale;
class Schema;
class SchemaData;
class ScreenOverlay;
class SimpleData;
class SimpleField;
class Snippet;
class Style;
class StyleMap;
class TimeSpan;
class TimeStamp;
class Update;
class UpdateOperation;
class Url;
class ViewVolume;
class HotSpot;
class InnerBoundaryIs;
class Kml;
class LinkSnippet;
class OuterBoundaryIs;
class OverlayXY;
class RotationXY;
class ScreenXY;
class Size;

class XalAddressDetails;
class XalAdministrativeArea;
class XalCountry;
class XalLocality;
class XalPostalCode;
class XalSubAdministrativeArea;
class XalThoroughfare;

class GxAnimatedUpdate;
class GxFlyTo;
class GxLatLonQuad;
class GxMultiTrack;
class GxPlaylist;
class GxSimpleArrayField;
class GxSimpleArrayData;
class GxSoundCue;
class GxTimeSpan;
class GxTimeStamp;
class GxTimePrimitive;
class GxTour;
class GxTourControl;
class GxTourPrimitive;
class GxTrack;
class GxWait;

typedef std::shared_ptr<Element> ElementPtr;
typedef std::shared_ptr<Field> FieldPtr;

typedef std::shared_ptr<AbstractLatLonBox> AbstractLatLonBoxPtr;
typedef std::shared_ptr<AbstractLink> AbstractLinkPtr;
typedef std::shared_ptr<AbstractView> AbstractViewPtr;
typedef std::shared_ptr<BasicLink> BasicLinkPtr;
typedef std::shared_ptr<ColorStyle> ColorStylePtr;
typedef std::shared_ptr<Container> ContainerPtr;
typedef std::shared_ptr<Feature> FeaturePtr;
typedef std::shared_ptr<Geometry> GeometryPtr;
typedef std::shared_ptr<Object> ObjectPtr;
typedef std::shared_ptr<Overlay> OverlayPtr;
typedef std::shared_ptr<StyleSelector> StyleSelectorPtr;
typedef std::shared_ptr<SubStyle> SubStylePtr;
typedef std::shared_ptr<TimePrimitive> TimePrimitivePtr;
typedef std::shared_ptr<Vec2> Vec2Ptr;

typedef std::shared_ptr<Alias> AliasPtr;
typedef std::shared_ptr<AtomAuthor> AtomAuthorPtr;
typedef std::shared_ptr<AtomCategory> AtomCategoryPtr;
typedef std::shared_ptr<AtomContent> AtomContentPtr;
typedef std::shared_ptr<AtomEntry> AtomEntryPtr;
typedef std::shared_ptr<AtomFeed> AtomFeedPtr;
typedef std::shared_ptr<AtomLink> AtomLinkPtr;
typedef std::shared_ptr<BalloonStyle> BalloonStylePtr;
typedef std::shared_ptr<Camera> CameraPtr;
typedef std::shared_ptr<Change> ChangePtr;
typedef std::shared_ptr<Coordinates> CoordinatesPtr;
typedef std::shared_ptr<Create> CreatePtr;
typedef std::shared_ptr<Data> DataPtr;
typedef std::shared_ptr<Delete> DeletePtr;
typedef std::shared_ptr<Document> DocumentPtr;
typedef std::shared_ptr<ExtendedData> ExtendedDataPtr;
typedef std::shared_ptr<Folder> FolderPtr;
typedef std::shared_ptr<GroundOverlay> GroundOverlayPtr;
typedef std::shared_ptr<Icon> IconPtr;
typedef std::shared_ptr<IconStyle> IconStylePtr;
typedef std::shared_ptr<IconStyleIcon> IconStyleIconPtr;
typedef std::shared_ptr<ImagePyramid> ImagePyramidPtr;
typedef std::shared_ptr<ItemIcon> ItemIconPtr;
typedef std::shared_ptr<LabelStyle> LabelStylePtr;
typedef std::shared_ptr<LatLonAltBox> LatLonAltBoxPtr;
typedef std::shared_ptr<LatLonBox> LatLonBoxPtr;
typedef std::shared_ptr<LineString> LineStringPtr;
typedef std::shared_ptr<LineStyle> LineStylePtr;
typedef std::shared_ptr<LinearRing> LinearRingPtr;
typedef std::shared_ptr<Link> LinkPtr;
typedef std::shared_ptr<ListStyle> ListStylePtr;
typedef std::shared_ptr<Location> LocationPtr;
typedef std::shared_ptr<Lod> LodPtr;
typedef std::shared_ptr<LookAt> LookAtPtr;
typedef std::shared_ptr<Metadata> MetadataPtr;
typedef std::shared_ptr<Model> ModelPtr;
typedef std::shared_ptr<MultiGeometry> MultiGeometryPtr;
typedef std::shared_ptr<NetworkLink> NetworkLinkPtr;
typedef std::shared_ptr<NetworkLinkControl> NetworkLinkControlPtr;
typedef std::shared_ptr<Orientation> OrientationPtr;
typedef std::shared_ptr<Pair> PairPtr;
typedef std::shared_ptr<PhotoOverlay> PhotoOverlayPtr;
typedef std::shared_ptr<Placemark> PlacemarkPtr;
typedef std::shared_ptr<Point> PointPtr;
typedef std::shared_ptr<PolyStyle> PolyStylePtr;
typedef std::shared_ptr<Polygon> PolygonPtr;
typedef std::shared_ptr<Region> RegionPtr;
typedef std::shared_ptr<ResourceMap> ResourceMapPtr;
typedef std::shared_ptr<Scale> ScalePtr;
typedef std::shared_ptr<Schema> SchemaPtr;
typedef std::shared_ptr<SchemaData> SchemaDataPtr;
typedef std::shared_ptr<ScreenOverlay> ScreenOverlayPtr;
typedef std::shared_ptr<SimpleData> SimpleDataPtr;
typedef std::shared_ptr<SimpleField> SimpleFieldPtr;
typedef std::shared_ptr<Snippet> SnippetPtr;
typedef std::shared_ptr<Style> StylePtr;
typedef std::shared_ptr<StyleMap> StyleMapPtr;
typedef std::shared_ptr<TimeSpan> TimeSpanPtr;
typedef std::shared_ptr<TimeStamp> TimeStampPtr;
typedef std::shared_ptr<Update> UpdatePtr;
typedef std::shared_ptr<UpdateOperation> UpdateOperationPtr;
typedef std::shared_ptr<Url> UrlPtr;
typedef std::shared_ptr<ViewVolume> ViewVolumePtr;
typedef std::shared_ptr<HotSpot> HotSpotPtr;
typedef std::shared_ptr<InnerBoundaryIs> InnerBoundaryIsPtr;
typedef std::shared_ptr<Kml> KmlPtr;
typedef std::shared_ptr<LinkSnippet> LinkSnippetPtr;
typedef std::shared_ptr<OuterBoundaryIs> OuterBoundaryIsPtr;
typedef std::shared_ptr<OverlayXY> OverlayXYPtr;
typedef std::shared_ptr<RotationXY> RotationXYPtr;
typedef std::shared_ptr<ScreenXY> ScreenXYPtr;
typedef std::shared_ptr<Size> SizePtr;

typedef std::shared_ptr<XalAddressDetails> XalAddressDetailsPtr;
typedef std::shared_ptr<XalAdministrativeArea> XalAdministrativeAreaPtr;
typedef std::shared_ptr<XalCountry> XalCountryPtr;
typedef std::shared_ptr<XalLocality> XalLocalityPtr;
typedef std::shared_ptr<XalPostalCode> XalPostalCodePtr;
typedef std::shared_ptr<XalSubAdministrativeArea>
   XalSubAdministrativeAreaPtr;
typedef std::shared_ptr<XalThoroughfare> XalThoroughfarePtr;

typedef std::shared_ptr<GxAnimatedUpdate> GxAnimatedUpdatePtr;
typedef std::shared_ptr<GxFlyTo> GxFlyToPtr;
typedef std::shared_ptr<GxLatLonQuad> GxLatLonQuadPtr;
typedef std::shared_ptr<GxMultiTrack> GxMultiTrackPtr;
typedef std::shared_ptr<GxPlaylist> GxPlaylistPtr;
typedef std::shared_ptr<GxSimpleArrayField> GxSimpleArrayFieldPtr;
typedef std::shared_ptr<GxSimpleArrayData> GxSimpleArrayDataPtr;
typedef std::shared_ptr<GxSoundCue> GxSoundCuePtr;
typedef std::shared_ptr<GxTimeSpan> GxTimeSpanPtr;
typedef std::shared_ptr<GxTimeStamp> GxTimeStampPtr;
typedef std::shared_ptr<GxTour> GxTourPtr;
typedef std::shared_ptr<GxTourControl> GxTourControlPtr;
typedef std::shared_ptr<GxTourPrimitive> GxTourPrimitivePtr;
typedef std::shared_ptr<GxTrack> GxTrackPtr;
typedef std::shared_ptr<GxWait> GxWaitPtr;

}  // end namespace kmldom

#endif  // KML_DOM_KML_PTR_H__
