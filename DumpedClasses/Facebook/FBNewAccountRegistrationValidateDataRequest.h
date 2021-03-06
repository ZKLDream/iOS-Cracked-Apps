//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBNetworkerRequest.h>

@class FBNewAccountRegistrationData, NSString;

@interface FBNewAccountRegistrationValidateDataRequest : FBNetworkerRequest
{
    FBNewAccountRegistrationData *_registrationData;
    NSString *_formattedPhoneNumber;
}

@property(copy, nonatomic) NSString *formattedPhoneNumber; // @synthesize formattedPhoneNumber=_formattedPhoneNumber;
@property(retain, nonatomic) FBNewAccountRegistrationData *registrationData; // @synthesize registrationData=_registrationData;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)networkRequest;
- (_Bool)allowRetry;
- (id)initWithRegistrationData:(id)arg1;

@end

