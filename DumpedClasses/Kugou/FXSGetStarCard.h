//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSArray<FXSCardInfo><Optional>, NSArray<FXSVipPower><Optional>, NSArray<FXSVipPrice><Optional>, NSString;

@interface FXSGetStarCard : FXBaseJSONModel
{
    int _perPrice;
    NSString *_name;
    NSArray<FXSVipPower><Optional> *_vipPower;
    NSArray<FXSCardInfo><Optional> *_cardInfo;
    NSArray<FXSVipPrice><Optional> *_vipPrice;
    NSString *_cardRule;
}

@property(retain, nonatomic) NSString *cardRule; // @synthesize cardRule=_cardRule;
@property(retain, nonatomic) NSArray<FXSVipPrice><Optional> *vipPrice; // @synthesize vipPrice=_vipPrice;
@property(retain, nonatomic) NSArray<FXSCardInfo><Optional> *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) NSArray<FXSVipPower><Optional> *vipPower; // @synthesize vipPower=_vipPower;
@property(nonatomic) int perPrice; // @synthesize perPrice=_perPrice;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

