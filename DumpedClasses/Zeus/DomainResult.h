//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface DomainResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *domainName; // @dynamic domainName;
@property(nonatomic) _Bool hasDomainName; // @dynamic hasDomainName;
@property(retain, nonatomic) NSMutableArray *ipsArray; // @dynamic ipsArray;
@property(readonly, nonatomic) unsigned long long ipsArray_Count; // @dynamic ipsArray_Count;

@end

