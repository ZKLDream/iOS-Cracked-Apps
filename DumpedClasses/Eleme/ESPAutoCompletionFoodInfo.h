//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ESPAutoCompletionInfo.h"

@class NSString;

@interface ESPAutoCompletionFoodInfo : ESPAutoCompletionInfo
{
    NSString *_foodID;
    NSString *_skuID;
    NSString *_restaurantID;
    unsigned long long _restaurantType;
    NSString *_name;
    double _price;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long restaurantType; // @synthesize restaurantType=_restaurantType;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(copy, nonatomic) NSString *skuID; // @synthesize skuID=_skuID;
@property(copy, nonatomic) NSString *foodID; // @synthesize foodID=_foodID;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)detailText;
- (id)title;

@end

