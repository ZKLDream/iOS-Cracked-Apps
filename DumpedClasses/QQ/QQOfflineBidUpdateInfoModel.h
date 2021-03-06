//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface QQOfflineBidUpdateInfoModel : NSObject
{
    int _retCode;
    NSString *_bidStr;
    NSString *_url;
    long long _version;
    long long _network;
    NSDictionary *_origJsonDic;
    int _xo;
}

+ (id)modelArrayWithDicArray:(id)arg1;
+ (id)modelWithDic:(id)arg1;
- (id)description;
- (_Bool)isEqualModel:(id)arg1;
- (void)dealloc;
- (_Bool)isNeedUpdate;

// Remaining properties
@property(retain, nonatomic) NSString *bidStr; // @dynamic bidStr;
@property(nonatomic) long long network; // @dynamic network;
@property(copy, nonatomic) NSDictionary *origJsonDic; // @dynamic origJsonDic;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) long long version; // @dynamic version;

@end

