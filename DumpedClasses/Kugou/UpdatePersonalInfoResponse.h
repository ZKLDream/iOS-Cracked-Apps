//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PersonalInfoManagerBasicResponse.h"

@class NSDictionary;

@interface UpdatePersonalInfoResponse : PersonalInfoManagerBasicResponse
{
    NSDictionary *_data;
}

+ (id)createWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end

