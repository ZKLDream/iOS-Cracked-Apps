//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface TencentBaseMessageObj : NSObject <NSCoding>
{
    long long _nVersion;
    NSString *_sName;
    NSDictionary *_dictExpandInfo;
}

@property(retain, nonatomic) NSDictionary *dictExpandInfo; // @synthesize dictExpandInfo=_dictExpandInfo;
@property(retain, nonatomic) NSString *sName; // @synthesize sName=_sName;
@property(nonatomic) long long nVersion; // @synthesize nVersion=_nVersion;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isVaild;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1;

@end

