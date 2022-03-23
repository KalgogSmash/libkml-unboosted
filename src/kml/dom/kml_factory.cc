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

#include "kml/dom/kml_factory.h"
#include "kml/dom/kml22.h"
#include "kml/dom/kml_ptr.h"
#include "kml/dom/kmldom.h"
#include "kml/dom/xsd.h"

namespace kmldom {

KmlFactory* KmlFactory::factory_ = NULL;

// static
KmlFactory* KmlFactory::GetFactory() {
  if (factory_ == NULL) {
    factory_ = new KmlFactory();
  }
  return factory_;
}

ElementPtr KmlFactory::CreateElementById(KmlDomType id) const {
  switch (id) {
  case Type_Alias: return CreateAlias();
  case Type_AtomAuthor: return CreateAtomAuthor();
  case Type_AtomCategory: return CreateAtomCategory();
  case Type_AtomContent: return CreateAtomContent();
  case Type_AtomEntry: return CreateAtomEntry();
  case Type_AtomFeed: return CreateAtomFeed();
  case Type_AtomLink: return CreateAtomLink();
  case Type_BalloonStyle: return CreateBalloonStyle();
  case Type_Camera: return CreateCamera();
  case Type_Change: return CreateChange();
  case Type_Create: return CreateCreate();
  case Type_Data: return CreateData();
  case Type_Delete: return CreateDelete();
  case Type_Document: return CreateDocument();
  case Type_ExtendedData: return CreateExtendedData();
  case Type_Folder: return CreateFolder();
  case Type_GroundOverlay: return CreateGroundOverlay();
  case Type_Icon: return CreateIcon();
  case Type_IconStyle: return CreateIconStyle();
  case Type_IconStyleIcon: return CreateIconStyleIcon();
  case Type_ImagePyramid: return CreateImagePyramid();
  case Type_ItemIcon: return CreateItemIcon();
  case Type_LabelStyle: return CreateLabelStyle();
  case Type_LatLonBox: return CreateLatLonBox();
  case Type_LatLonAltBox: return CreateLatLonAltBox();
  case Type_LinearRing: return CreateLinearRing();
  case Type_LineString: return CreateLineString();
  case Type_LineStyle: return CreateLineStyle();
  case Type_Link: return CreateLink();
  case Type_ListStyle: return CreateListStyle();
  case Type_Location: return CreateLocation();
  case Type_Lod: return CreateLod();
  case Type_LookAt: return CreateLookAt();
  case Type_Metadata: return CreateMetadata();
  case Type_Model: return CreateModel();
  case Type_MultiGeometry: return CreateMultiGeometry();
  case Type_NetworkLink: return CreateNetworkLink();
  case Type_NetworkLinkControl: return CreateNetworkLinkControl();
  case Type_Orientation: return CreateOrientation();
  case Type_Pair: return CreatePair();
  case Type_PhotoOverlay: return CreatePhotoOverlay();
  case Type_Placemark: return CreatePlacemark();
  case Type_PolyStyle: return CreatePolyStyle();
  case Type_Point: return CreatePoint();
  case Type_Polygon: return CreatePolygon();
  case Type_Region: return CreateRegion();
  case Type_ResourceMap: return CreateResourceMap();
  case Type_Scale: return CreateScale();
  case Type_Schema: return CreateSchema();
  case Type_SchemaData: return CreateSchemaData();
  case Type_ScreenOverlay: return CreateScreenOverlay();
  case Type_SimpleData: return CreateSimpleData();
  case Type_SimpleField: return CreateSimpleField();
  case Type_Snippet: return CreateSnippet();
  case Type_Style: return CreateStyle();
  case Type_StyleMap: return CreateStyleMap();
  case Type_TimeSpan: return CreateTimeSpan();
  case Type_TimeStamp: return CreateTimeStamp();
  case Type_ViewVolume: return CreateViewVolume();
  case Type_Update: return CreateUpdate();
  case Type_Url: return CreateUrl();
  case Type_coordinates: return CreateCoordinates();
  case Type_hotSpot: return CreateHotSpot();
  case Type_innerBoundaryIs: return CreateInnerBoundaryIs();
  case Type_kml: return CreateKml();
  case Type_linkSnippet: return CreateLinkSnippet();
  case Type_overlayXY: return CreateOverlayXY();
  case Type_outerBoundaryIs: return CreateOuterBoundaryIs();
  case Type_rotationXY: return CreateRotationXY();
  case Type_screenXY: return CreateScreenXY();
  case Type_size: return CreateSize();
  case Type_XalAddressDetails: return CreateXalAddressDetails();
  case Type_XalAdministrativeArea: return CreateXalAdministrativeArea();
  case Type_XalCountry: return CreateXalCountry();
  case Type_XalLocality: return CreateXalLocality();
  case Type_XalPostalCode: return CreateXalPostalCode();
  case Type_XalSubAdministrativeArea: return CreateXalSubAdministrativeArea();
  case Type_XalThoroughfare: return CreateXalThoroughfare();

  case Type_GxAnimatedUpdate: return CreateGxAnimatedUpdate();
  case Type_GxFlyTo: return CreateGxFlyTo();
  case Type_GxLatLonQuad: return CreateGxLatLonQuad();
  case Type_GxMultiTrack: return CreateGxMultiTrack();
  case Type_GxPlaylist: return CreateGxPlaylist();
  case Type_GxSimpleArrayData: return CreateGxSimpleArrayData();
  case Type_GxSimpleArrayField: return CreateGxSimpleArrayField();
  case Type_GxSoundCue: return CreateGxSoundCue();
  case Type_GxTimeSpan: return CreateGxTimeSpan();
  case Type_GxTimeStamp: return CreateGxTimeStamp();
  case Type_GxTour: return CreateGxTour();
  case Type_GxTourControl: return CreateGxTourControl();
  case Type_GxTrack: return CreateGxTrack();
  case Type_GxWait: return CreateGxWait();

  default: return NULL;
  }
}

ElementPtr KmlFactory::CreateElementFromName(const string& element_name) const {
  return CreateElementById(
      static_cast<KmlDomType>(Xsd::GetSchema()->ElementId(element_name)));
}

FieldPtr KmlFactory::CreateFieldById(KmlDomType type_id) const {
    return FieldPtr(new Field(type_id));
}

AliasPtr KmlFactory::CreateAlias() const {
  return AliasPtr(new Alias());
}

AtomAuthorPtr KmlFactory::CreateAtomAuthor() const {
  return AtomAuthorPtr(new AtomAuthor());
}

AtomCategoryPtr KmlFactory::CreateAtomCategory() const {
  return AtomCategoryPtr(new AtomCategory());
}

AtomContentPtr KmlFactory::CreateAtomContent() const {
  return AtomContentPtr(new AtomContent());
}

AtomEntryPtr KmlFactory::CreateAtomEntry() const {
  return AtomEntryPtr(new AtomEntry());
}

AtomFeedPtr KmlFactory::CreateAtomFeed() const {
  return AtomFeedPtr(new AtomFeed());
}

AtomLinkPtr KmlFactory::CreateAtomLink() const {
    return AtomLinkPtr(new AtomLink());
}

BalloonStylePtr KmlFactory::CreateBalloonStyle() const {
    return BalloonStylePtr(new BalloonStyle());
}

CameraPtr KmlFactory::CreateCamera() const {
    return CameraPtr(new Camera());
}

ChangePtr KmlFactory::CreateChange() const {
    return ChangePtr(new Change());
}

CreatePtr KmlFactory::CreateCreate() const {
    return CreatePtr(new Create());
}

DataPtr KmlFactory::CreateData() const {
    return DataPtr(new Data());
}

DeletePtr KmlFactory::CreateDelete() const {
    return DeletePtr(new Delete());
}

DocumentPtr KmlFactory::CreateDocument() const {
    return DocumentPtr(new Document());
}

ExtendedDataPtr KmlFactory::CreateExtendedData() const {
    return ExtendedDataPtr(new ExtendedData());
}

FolderPtr KmlFactory::CreateFolder() const {
    return FolderPtr(new Folder());
}

GroundOverlayPtr KmlFactory::CreateGroundOverlay() const {
    return GroundOverlayPtr(new GroundOverlay());
}

HotSpotPtr KmlFactory::CreateHotSpot() const {
    return HotSpotPtr(new HotSpot());
}

IconPtr KmlFactory::CreateIcon() const {
    return IconPtr(new Icon());
}

IconStylePtr KmlFactory::CreateIconStyle() const {
    return IconStylePtr(new IconStyle());
}

IconStyleIconPtr KmlFactory::CreateIconStyleIcon() const {
    return IconStyleIconPtr(new IconStyleIcon());
}

ImagePyramidPtr KmlFactory::CreateImagePyramid() const {
    return ImagePyramidPtr(new ImagePyramid());
}

InnerBoundaryIsPtr KmlFactory::CreateInnerBoundaryIs() const {
    return InnerBoundaryIsPtr(new InnerBoundaryIs());
}

ItemIconPtr KmlFactory::CreateItemIcon() const {
    return ItemIconPtr(new ItemIcon());
}

KmlPtr KmlFactory::CreateKml() const {
    return KmlPtr(new Kml());
}

LabelStylePtr KmlFactory::CreateLabelStyle() const {
    return LabelStylePtr(new LabelStyle());
}

LatLonBoxPtr KmlFactory::CreateLatLonBox() const {
    return LatLonBoxPtr(new LatLonBox());
}

LatLonAltBoxPtr KmlFactory::CreateLatLonAltBox() const {
    return LatLonAltBoxPtr(new LatLonAltBox());
}

LinearRingPtr KmlFactory::CreateLinearRing() const {
    return LinearRingPtr(new LinearRing());
}

LineStringPtr KmlFactory::CreateLineString() const {
    return LineStringPtr(new LineString());
}

LineStylePtr KmlFactory::CreateLineStyle() const {
    return LineStylePtr(new LineStyle());
}

LinkPtr KmlFactory::CreateLink() const {
    return LinkPtr(new Link());
}

LinkSnippetPtr KmlFactory::CreateLinkSnippet() const {
    return LinkSnippetPtr(new LinkSnippet());
}

ListStylePtr KmlFactory::CreateListStyle() const {
    return ListStylePtr(new ListStyle());
}

LocationPtr KmlFactory::CreateLocation() const {
    return LocationPtr(new Location());
}

LodPtr KmlFactory::CreateLod() const {
    return LodPtr(new Lod());
}

LookAtPtr KmlFactory::CreateLookAt() const {
    return LookAtPtr(new LookAt());
}

MetadataPtr KmlFactory::CreateMetadata() const {
    return MetadataPtr(new Metadata());
}

ModelPtr KmlFactory::CreateModel() const {
    return ModelPtr(new Model());
}

MultiGeometryPtr KmlFactory::CreateMultiGeometry() const {
    return MultiGeometryPtr(new MultiGeometry());
}

NetworkLinkPtr KmlFactory::CreateNetworkLink() const {
    return NetworkLinkPtr(new NetworkLink());
}

NetworkLinkControlPtr KmlFactory::CreateNetworkLinkControl() const {
    return NetworkLinkControlPtr(new NetworkLinkControl());
}

OrientationPtr KmlFactory::CreateOrientation() const {
    return OrientationPtr(new Orientation());
}

OuterBoundaryIsPtr KmlFactory::CreateOuterBoundaryIs() const {
    return OuterBoundaryIsPtr(new OuterBoundaryIs());
}

OverlayXYPtr KmlFactory::CreateOverlayXY() const {
    return OverlayXYPtr(new OverlayXY());
}

PairPtr KmlFactory::CreatePair() const {
    return PairPtr(new Pair());
}

PhotoOverlayPtr KmlFactory::CreatePhotoOverlay() const {
    return PhotoOverlayPtr(new PhotoOverlay());
}

PlacemarkPtr KmlFactory::CreatePlacemark() const {
    return PlacemarkPtr(new Placemark());
}

PointPtr KmlFactory::CreatePoint() const {
    return PointPtr(new Point());
}

PolygonPtr KmlFactory::CreatePolygon() const {
    return PolygonPtr(new Polygon());
}

PolyStylePtr KmlFactory::CreatePolyStyle() const {
    return PolyStylePtr(new PolyStyle());
}

RegionPtr KmlFactory::CreateRegion() const {
    return  RegionPtr(new Region());
}

ResourceMapPtr KmlFactory::CreateResourceMap() const {
    return ResourceMapPtr(new ResourceMap());
}

RotationXYPtr KmlFactory::CreateRotationXY() const {
    return RotationXYPtr(new RotationXY());
}

ScalePtr KmlFactory::CreateScale() const {
    return ScalePtr(new Scale());
}

ScreenOverlayPtr KmlFactory::CreateScreenOverlay() const {
    return ScreenOverlayPtr(new ScreenOverlay());
}

CoordinatesPtr KmlFactory::CreateCoordinates() const {
    return CoordinatesPtr(new Coordinates());
}

ScreenXYPtr KmlFactory::CreateScreenXY() const {
    return ScreenXYPtr(new ScreenXY());
}

SchemaPtr KmlFactory::CreateSchema() const {
    return SchemaPtr(new Schema());
}

SchemaDataPtr KmlFactory::CreateSchemaData() const {
    return SchemaDataPtr(new SchemaData());
}

UpdatePtr KmlFactory::CreateUpdate() const {
    return UpdatePtr(new Update());
}

UrlPtr KmlFactory::CreateUrl() const {
    return UrlPtr(new Url());
}

SimpleDataPtr KmlFactory::CreateSimpleData() const {
    return SimpleDataPtr(new SimpleData());
}

SimpleFieldPtr KmlFactory::CreateSimpleField() const {
    return SimpleFieldPtr(new SimpleField());
}

SizePtr KmlFactory::CreateSize() const {
    return SizePtr(new Size());
}

SnippetPtr KmlFactory::CreateSnippet() const {
    return SnippetPtr(new Snippet());
}

StylePtr KmlFactory::CreateStyle() const {
    return StylePtr(new Style());
}

StyleMapPtr KmlFactory::CreateStyleMap() const {
    return StyleMapPtr(new StyleMap());
}

TimeSpanPtr KmlFactory::CreateTimeSpan() const {
    return TimeSpanPtr(new TimeSpan());
}

TimeStampPtr KmlFactory::CreateTimeStamp() const {
    return TimeStampPtr(new TimeStamp());
}

ViewVolumePtr KmlFactory::CreateViewVolume() const {
    return ViewVolumePtr(new ViewVolume());
}

XalAddressDetailsPtr KmlFactory::CreateXalAddressDetails() const {
    return XalAddressDetailsPtr(new XalAddressDetails());
}

XalAdministrativeAreaPtr KmlFactory::CreateXalAdministrativeArea() const {
    return XalAdministrativeAreaPtr(new XalAdministrativeArea());
}

XalCountryPtr KmlFactory::CreateXalCountry() const {
    return XalCountryPtr(new XalCountry());
}

XalLocalityPtr KmlFactory::CreateXalLocality() const {
    return XalLocalityPtr(new XalLocality());
}

XalPostalCodePtr KmlFactory::CreateXalPostalCode() const {
    return XalPostalCodePtr(new XalPostalCode());
}

XalSubAdministrativeAreaPtr KmlFactory::CreateXalSubAdministrativeArea() const {
    return XalSubAdministrativeAreaPtr(new XalSubAdministrativeArea());
}

XalThoroughfarePtr KmlFactory::CreateXalThoroughfare() const {
    return XalThoroughfarePtr(new XalThoroughfare());
}

GxAnimatedUpdatePtr KmlFactory::CreateGxAnimatedUpdate() const {
    return GxAnimatedUpdatePtr(new GxAnimatedUpdate());
}

GxFlyToPtr KmlFactory::CreateGxFlyTo() const {
    return GxFlyToPtr(new GxFlyTo());
}

GxLatLonQuadPtr KmlFactory::CreateGxLatLonQuad() const {
    return GxLatLonQuadPtr(new GxLatLonQuad());
}

GxMultiTrackPtr KmlFactory::CreateGxMultiTrack() const {
    return GxMultiTrackPtr(new GxMultiTrack());
}

GxPlaylistPtr KmlFactory::CreateGxPlaylist() const {
    return GxPlaylistPtr(new GxPlaylist());
}

GxSimpleArrayDataPtr KmlFactory::CreateGxSimpleArrayData() const {
    return GxSimpleArrayDataPtr(new GxSimpleArrayData());
}

GxSimpleArrayFieldPtr KmlFactory::CreateGxSimpleArrayField() const {
    return GxSimpleArrayFieldPtr(new GxSimpleArrayField());
}

GxSoundCuePtr KmlFactory::CreateGxSoundCue() const {
    return GxSoundCuePtr(new GxSoundCue());
}

GxTimeSpanPtr KmlFactory::CreateGxTimeSpan() const {
    return GxTimeSpanPtr(new GxTimeSpan());
}

GxTimeStampPtr KmlFactory::CreateGxTimeStamp() const {
    return GxTimeStampPtr(new GxTimeStamp());
}

GxTourPtr KmlFactory::CreateGxTour() const {
    return GxTourPtr(new GxTour());
}

GxTourControlPtr KmlFactory::CreateGxTourControl() const {
    return GxTourControlPtr(new GxTourControl());
}

GxTrackPtr KmlFactory::CreateGxTrack() const {
    return GxTrackPtr(new GxTrack());
}

GxWaitPtr KmlFactory::CreateGxWait() const {
    return GxWaitPtr(new GxWait());
}

}  // namespace kmldom
