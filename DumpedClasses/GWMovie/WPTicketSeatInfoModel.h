//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface WPTicketSeatInfoModel : GWObject
{
    _Bool _showOriginCode;
    NSString *_code;
    NSString *_memberPrice;
    NSString *_originalCode;
    NSString *_qrCode;
    NSString *_seatLable;
    NSString *_unitPrice;
}

@property(retain, nonatomic) NSString *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(retain, nonatomic) NSString *seatLable; // @synthesize seatLable=_seatLable;
@property(retain, nonatomic) NSString *qrCode; // @synthesize qrCode=_qrCode;
@property(nonatomic) _Bool showOriginCode; // @synthesize showOriginCode=_showOriginCode;
@property(retain, nonatomic) NSString *originalCode; // @synthesize originalCode=_originalCode;
@property(retain, nonatomic) NSString *memberPrice; // @synthesize memberPrice=_memberPrice;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)arrayWithCode:(id)arg1;
- (id)originalCodeArray;
- (id)codeArray;

@end

