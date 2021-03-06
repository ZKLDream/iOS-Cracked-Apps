//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EventMarkerInfo.h"

#import "NSCoding.h"

@class NSString;

@interface ReportEventInfo : EventMarkerInfo <NSCoding>
{
    int _helpNumber;
    int _giftNumber;
    int _invalidNumber;
    NSString *_roadName;
    NSString *_roadID;
}

@property int invalidNumber; // @synthesize invalidNumber=_invalidNumber;
@property int giftNumber; // @synthesize giftNumber=_giftNumber;
@property int helpNumber; // @synthesize helpNumber=_helpNumber;
@property(copy) NSString *roadID; // @synthesize roadID=_roadID;
@property(copy) NSString *roadName; // @synthesize roadName=_roadName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly) _Bool isInvalid;

@end

