//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FilterRoot.h"

@interface HotelRoomFilterRoot : FilterRoot
{
    _Bool _isModifyOrder;
    int _hotelType;
}

@property(nonatomic) _Bool isModifyOrder; // @synthesize isModifyOrder=_isModifyOrder;
@property(nonatomic) int hotelType; // @synthesize hotelType=_hotelType;
- (void)replaceOtherNode:(id)arg1 withNewFilterInfoModels:(id)arg2;
- (void)bindFilterToRequest:(id)arg1;
- (_Bool)isMatch:(id)arg1;
- (_Bool)shouldResendRequestToService;
- (void)fillChildren;
- (void)addSelectNodeDeltail:(id)arg1 value:(id)arg2;
- (void)addSelectNode:(id)arg1 value:(int)arg2;
- (id)init;

@end

