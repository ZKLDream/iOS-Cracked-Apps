//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PersonalInfoManagerBasicResponse.h"

@class OthersBasicInfo;

@interface OthersBasicInfoResponse : PersonalInfoManagerBasicResponse
{
    OthersBasicInfo *_othersBasicInfo;
}

+ (id)createWithDictionary:(id)arg1;
@property(retain, nonatomic) OthersBasicInfo *othersBasicInfo; // @synthesize othersBasicInfo=_othersBasicInfo;
- (void).cxx_destruct;

@end
