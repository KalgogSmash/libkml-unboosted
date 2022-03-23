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
  return AliasPtr();
}

AtomAuthorPtr KmlFactory::CreateAtomAuthor() const {
  return AtomAuthorPtr();
}

AtomCategoryPtr KmlFactory::CreateAtomCategory() const {
  return AtomCategoryPtr();
}

AtomContentPtr KmlFactory::CreateAtomContent() const {
  return AtomContentPtr();
}

AtomEntryPtr KmlFactory::CreateAtomEntry() const {
  return AtomEntryPtr();
}

AtomFeedPtr KmlFactory::CreateAtomFeed() const {
  AtomFeedPtr();
}

AtomLinkPtr KmlFactory::CreateAtomLink() const {
  AtomLinkPtr();
}

BalloonStylePtr KmlFactory::CreateBalloonStyle() const {
  BalloonStylePtr();
}

CameraPtr KmlFactory::CreateCamera() const {
  CameraPtr();
}

ChangePtr KmlFactory::CreateChange() const {
  ChangePtr();
}

CreatePtr KmlFactory::CreateCreate() const {
  CreatePtr();
}

DataPtr KmlFactory::CreateData() const {
  DataPtr();
}

DeletePtr KmlFactory::CreateDelete() const {
  DeletePtr();
}

DocumentPtr KmlFactory::CreateDocument() const {
  DocumentPtr();
}

ExtendedDataPtr KmlFactory::CreateExtendedData() const {
  ExtendedDataPtr();
}

FolderPtr KmlFactory::CreateFolder() const {
  FolderPtr();
}

GroundOverlayPtr KmlFactory::CreateGroundOverlay() const {
  GroundOverlayPtr();
}

HotSpotPtr KmlFactory::CreateHotSpot() const {
  HotSpotPtr();
}

IconPtr KmlFactory::CreateIcon() const {
  IconPtr();
}

IconStylePtr KmlFactory::CreateIconStyle() const {
  IconStylePtr();
}

IconStyleIconPtr KmlFactory::CreateIconStyleIcon() const {
  IconStyleIconPtr();
}

ImagePyramidPtr KmlFactory::CreateImagePyramid() const {
  ImagePyramidPtr();
}

InnerBoundaryIsPtr KmlFactory::CreateInnerBoundaryIs() const {
  InnerBoundaryIsPtr();
}

ItemIconPtr KmlFactory::CreateItemIcon() const {
  ItemIconPtr();
}

KmlPtr KmlFactory::CreateKml() const {
  KmlPtr();
}

LabelStylePtr KmlFactory::CreateLabelStyle() const {
  LabelStylePtr();
}

LatLonBoxPtr KmlFactory::CreateLatLonBox() const {
  LatLonBoxPtr();
}

LatLonAltBoxPtr KmlFactory::CreateLatLonAltBox() const {
  LatLonAltBoxPtr();
}

LinearRingPtr KmlFactory::CreateLinearRing() const {
  LinearRingPtr();
}

LineStringPtr KmlFactory::CreateLineString() const {
  LineStringPtr();
}

LineStylePtr KmlFactory::CreateLineStyle() const {
  LineStylePtr();
}

LinkPtr KmlFactory::CreateLink() const {
  LinkPtr();
}

LinkSnippetPtr KmlFactory::CreateLinkSnippet() const {
  LinkSnippetPtr();
}

ListStylePtr KmlFactory::CreateListStyle() const {
  ListStylePtr();
}

LocationPtr KmlFactory::CreateLocation() const {
  LocationPtr();
}

LodPtr KmlFactory::CreateLod() const {
  LodPtr();
}

LookAtPtr KmlFactory::CreateLookAt() const {
  LookAtPtr();
}

MetadataPtr KmlFactory::CreateMetadata() const {
  MetadataPtr();
}

ModelPtr KmlFactory::CreateModel() const {
  ModelPtr();
}

MultiGeometryPtr KmlFactory::CreateMultiGeometry() const {
  MultiGeometryPtr();
}

NetworkLinkPtr KmlFactory::CreateNetworkLink() const {
  NetworkLinkPtr();
}

NetworkLinkControlPtr KmlFactory::CreateNetworkLinkControl() const {
  NetworkLinkControlPtr();
}

OrientationPtr KmlFactory::CreateOrientation() const {
  OrientationPtr();
}

OuterBoundaryIsPtr KmlFactory::CreateOuterBoundaryIs() const {
  OuterBoundaryIsPtr();
}

OverlayXYPtr KmlFactory::CreateOverlayXY() const {
  OverlayXYPtr();
}

PairPtr KmlFactory::CreatePair() const {
  PairPtr();
}

PhotoOverlayPtr KmlFactory::CreatePhotoOverlay() const {
  PhotoOverlayPtr();
}

PlacemarkPtr KmlFactory::CreatePlacemark() const {
  PlacemarkPtr();
}

PointPtr KmlFactory::CreatePoint() const {
  PointPtr();
}

PolygonPtr KmlFactory::CreatePolygon() const {
  PolygonPtr();
}

PolyStylePtr KmlFactory::CreatePolyStyle() const {
  PolyStylePtr();
}

RegionPtr KmlFactory::CreateRegion() const {
  RegionPtr();
}

ResourceMapPtr KmlFactory::CreateResourceMap() const {
  ResourceMapPtr();
}

RotationXYPtr KmlFactory::CreateRotationXY() const {
  RotationXYPtr();
}

ScalePtr KmlFactory::CreateScale() const {
  ScalePtr();
}

ScreenOverlayPtr KmlFactory::CreateScreenOverlay() const {
  ScreenOverlayPtr();
}

CoordinatesPtr KmlFactory::CreateCoordinates() const {
  CoordinatesPtr();
}

ScreenXYPtr KmlFactory::CreateScreenXY() const {
  ScreenXYPtr();
}

SchemaPtr KmlFactory::CreateSchema() const {
  SchemaPtr();
}

SchemaDataPtr KmlFactory::CreateSchemaData() const {
  SchemaDataPtr();
}

UpdatePtr KmlFactory::CreateUpdate() const {
  UpdatePtr();
}

UrlPtr KmlFactory::CreateUrl() const {
  UrlPtr();
}

SimpleDataPtr KmlFactory::CreateSimpleData() const {
  SimpleDataPtr();
}

SimpleFieldPtr KmlFactory::CreateSimpleField() const {
  SimpleFieldPtr();
}

SizePtr KmlFactory::CreateSize() const {
  SizePtr();
}

SnippetPtr KmlFactory::CreateSnippet() const {
  SnippetPtr();
}

StylePtr KmlFactory::CreateStyle() const {
  StylePtr();
}

StyleMapPtr KmlFactory::CreateStyleMap() const {
  StyleMapPtr();
}

TimeSpanPtr KmlFactory::CreateTimeSpan() const {
  TimeSpanPtr();
}

TimeStampPtr KmlFactory::CreateTimeStamp() const {
  TimeStampPtr();
}

ViewVolumePtr KmlFactory::CreateViewVolume() const {
  ViewVolumePtr();
}

XalAddressDetailsPtr KmlFactory::CreateXalAddressDetails() const {
  XalAddressDetailsPtr();
}

XalAdministrativeAreaPtr KmlFactory::CreateXalAdministrativeArea() const {
  XalAdministrativeAreaPtr();
}

XalCountryPtr KmlFactory::CreateXalCountry() const {
  XalCountryPtr();
}

XalLocalityPtr KmlFactory::CreateXalLocality() const {
  XalLocalityPtr();
}

XalPostalCodePtr KmlFactory::CreateXalPostalCode() const {
  XalPostalCodePtr();
}

XalSubAdministrativeAreaPtr KmlFactory::CreateXalSubAdministrativeArea() const {
  XalSubAdministrativeAreaPtr();
}

XalThoroughfarePtr KmlFactory::CreateXalThoroughfare() const {
  XalThoroughfarePtr();
}

GxAnimatedUpdatePtr KmlFactory::CreateGxAnimatedUpdate() const {
  GxAnimatedUpdatePtr();
}

GxFlyToPtr KmlFactory::CreateGxFlyTo() const {
  GxFlyToPtr();
}

GxLatLonQuadPtr KmlFactory::CreateGxLatLonQuad() const {
  GxLatLonQuadPtr();
}

GxMultiTrackPtr KmlFactory::CreateGxMultiTrack() const {
  GxMultiTrackPtr();
}

GxPlaylistPtr KmlFactory::CreateGxPlaylist() const {
  GxPlaylistPtr();
}

GxSimpleArrayDataPtr KmlFactory::CreateGxSimpleArrayData() const {
  GxSimpleArrayDataPtr();
}

GxSimpleArrayFieldPtr KmlFactory::CreateGxSimpleArrayField() const {
  GxSimpleArrayFieldPtr();
}

GxSoundCuePtr KmlFactory::CreateGxSoundCue() const {
  GxSoundCuePtr();
}

GxTimeSpanPtr KmlFactory::CreateGxTimeSpan() const {
  GxTimeSpanPtr();
}

GxTimeStampPtr KmlFactory::CreateGxTimeStamp() const {
  GxTimeStampPtr();
}

GxTourPtr KmlFactory::CreateGxTour() const {
  GxTourPtr();
}

GxTourControlPtr KmlFactory::CreateGxTourControl() const {
  GxTourControlPtr();
}

GxTrackPtr KmlFactory::CreateGxTrack() const {
  GxTrackPtr();
}

GxWaitPtr KmlFactory::CreateGxWait() const {
  GxWaitPtr();
}

}  // namespace kmldom
