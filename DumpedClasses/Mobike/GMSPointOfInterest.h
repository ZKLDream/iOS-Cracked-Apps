//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GMSFeatureWithServerID.h"

@class GMSRenderOpInfo, GMSStyleTable, NSString;

@interface GMSPointOfInterest : NSObject <GMSFeatureWithServerID>
{
    vector_ed1e7c9d _absolutePositions;
    vector_d3954caf _relativePositions;
    struct Alignment _primaryRelativePosition;
    struct LabelGroup _primaryLabelGroup;
    struct LabelGroup _secondaryLabelGroup;
    short _rank;
    int _sourceTileZoom;
    int _minZoomLevel;
    int _maxZoomLevel;
    int _attributes;
    GMSRenderOpInfo *_renderOpInfo;
    struct Point2D _location;
    NSString *_name;
    NSString *_snippet;
    GMSStyleTable *_overrideStyleTable;
    struct StyleID _stylingID;
    struct FeatureID _serverID;
}

+ (id)unpackedWithProto:(id)arg1 wireContext:(id)arg2;
@property(retain) GMSStyleTable *overrideStyleTable; // @synthesize overrideStyleTable=_overrideStyleTable;
@property(readonly, nonatomic) int attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) int maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(readonly, nonatomic) int minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(readonly, nonatomic) short rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) struct StyleID stylingID; // @synthesize stylingID=_stylingID;
@property(readonly, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct Point2D location; // @synthesize location=_location;
@property(readonly, nonatomic) int sourceTileZoom; // @synthesize sourceTileZoom=_sourceTileZoom;
@property(readonly, nonatomic) GMSRenderOpInfo *renderOpInfo; // @synthesize renderOpInfo=_renderOpInfo;
@property(readonly, nonatomic) struct FeatureID serverID; // @synthesize serverID=_serverID;
@property(readonly, nonatomic) const struct Alignment *primaryRelativePosition; // @synthesize primaryRelativePosition=_primaryRelativePosition;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)type;
@property(readonly, nonatomic) struct FeatureID fullFeatureID;
@property(readonly, nonatomic) NSString *query;
@property(readonly, nonatomic) STLRange_34380436 relativePositions;
@property(readonly, nonatomic) STLRange_5fcae3ea absolutePositions;
- (const struct LabelGroup *)secondaryLabelGroup;
- (const struct LabelGroup *)primaryLabelGroup;
- (_Bool)canFlip;
- (_Bool)shouldHideLabelWhenTilted;
- (_Bool)shouldShowAfterHalfZoom;
- (_Bool)isSecondaryLabelOptional;
- (_Bool)isRequired;
- (_Bool)isRequiredWithoutClobbering;
- (_Bool)isRequiredWithClobbering;
- (_Bool)isSmartMapsPOI;
- (_Bool)isAd;
- (_Bool)isIncident;
- (_Bool)isSearchResult;
- (_Bool)isClickable;
- (int)positionApplicabilityBits;
@property(readonly, copy) NSString *description;
- (id)initWithRenderOpInfo:(id)arg1 sourceTileZoom:(int)arg2 location:(const struct Point2D *)arg3 serverID:(const struct FeatureID *)arg4 absolutePositions:(vector_ed1e7c9d *)arg5 primaryLabelGroup:(struct LabelGroup *)arg6 secondaryLabelGroup:(struct LabelGroup *)arg7 relativePositions:(vector_d3954caf *)arg8 stylingID:(const struct StyleID *)arg9 rank:(short)arg10 minTileZoom:(int)arg11 maxTileZoom:(int)arg12 attributes:(int)arg13 name:(id)arg14 primaryRelativePosition:(const struct Alignment *)arg15;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

