//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWRegisterContentProvider : GWBaseInfoProvider
{
    NSString *_mobile;
    NSString *_nickname;
    NSString *_dynamicNumber;
    NSString *_password;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *dynamicNumber; // @synthesize dynamicNumber=_dynamicNumber;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (void).cxx_destruct;
- (id)parseResponed:(id)arg1 error:(id *)arg2;
- (id)init;

@end
