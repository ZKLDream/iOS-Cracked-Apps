//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGraphQLDownloadRequest.h>

@class CLLocation, NSString;

@interface FBGraphSearchSingleStateRequest : FBGraphQLDownloadRequest
{
    NSString *_rankingModel;
    CLLocation *_location;
    NSString *_singleStateEntityFBID;
    NSString *_webURL;
}

@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *singleStateEntityFBID; // @synthesize singleStateEntityFBID=_singleStateEntityFBID;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *rankingModel; // @synthesize rankingModel=_rankingModel;
- (void).cxx_destruct;
- (id)newQuery;
- (id)_sourceParams;
- (id)_singleStateParams;
- (id)_locationInfo;

@end

