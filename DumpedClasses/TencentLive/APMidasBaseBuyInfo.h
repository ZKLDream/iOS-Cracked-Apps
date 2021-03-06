//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APMidasHFInfo, NSMutableArray, NSString, UIImage;

@interface APMidasBaseBuyInfo : NSObject
{
    _Bool showResult;
    _Bool showContinueBuy;
    int tokenType;
    NSString *merchantName;
    NSString *offerName;
    NSString *productName;
    NSString *productId;
    NSString *unit;
    NSString *rate;
    NSString *disPrice;
    long long minNum;
    long long maxNum;
    UIImage *logo;
    NSMutableArray *recommendList;
    APMidasHFInfo *hfInfo;
    id _mpInfo;
    NSString *_drm_resource;
}

@property(retain, nonatomic) NSString *drm_resource; // @synthesize drm_resource=_drm_resource;
@property(retain, nonatomic) id mpInfo; // @synthesize mpInfo=_mpInfo;
@property(nonatomic) _Bool showContinueBuy; // @synthesize showContinueBuy;
@property(nonatomic) _Bool showResult; // @synthesize showResult;
@property(readonly, nonatomic) APMidasHFInfo *hfInfo; // @synthesize hfInfo;
@property(retain, nonatomic) NSMutableArray *recommendList; // @synthesize recommendList;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo;
@property(nonatomic) long long maxNum; // @synthesize maxNum;
@property(nonatomic) long long minNum; // @synthesize minNum;
@property(retain, nonatomic) NSString *disPrice; // @synthesize disPrice;
@property(retain, nonatomic) NSString *rate; // @synthesize rate;
@property(retain, nonatomic) NSString *unit; // @synthesize unit;
@property(retain, nonatomic) NSString *productId; // @synthesize productId;
@property(retain, nonatomic) NSString *productName; // @synthesize productName;
@property(retain, nonatomic) NSString *offerName; // @synthesize offerName;
@property(retain, nonatomic) NSString *merchantName; // @synthesize merchantName;
@property(nonatomic) int tokenType; // @synthesize tokenType;
- (void).cxx_destruct;
- (id)init;

@end

