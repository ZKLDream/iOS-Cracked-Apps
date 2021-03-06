//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMShareToAllRequest : NMBaseRequest
{
    _Bool _addComment;
    NSString *_resourceId;
    NSString *_message;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool addComment; // @synthesize addComment=_addComment;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
- (void).cxx_destruct;
- (id)initWithResourceId:(id)arg1 uuid:(id)arg2 type:(unsigned long long)arg3 message:(id)arg4 addComment:(_Bool)arg5 threadId:(id)arg6 activityId:(id)arg7 pictureIds:(id)arg8 videoInfo:(id)arg9;
- (id)initWithResourceId:(id)arg1 uuid:(id)arg2 type:(unsigned long long)arg3 message:(id)arg4 activityId:(id)arg5 videoInfo:(id)arg6;
- (id)initWithResourceId:(id)arg1 type:(unsigned long long)arg2 message:(id)arg3 addComment:(_Bool)arg4 threadId:(id)arg5;
- (id)initWithResourceId:(id)arg1 uuid:(id)arg2 type:(unsigned long long)arg3 message:(id)arg4 activityId:(id)arg5 pictureIds:(id)arg6;
- (id)initWithResourceId:(id)arg1 type:(unsigned long long)arg2 message:(id)arg3 addComment:(_Bool)arg4;

@end

