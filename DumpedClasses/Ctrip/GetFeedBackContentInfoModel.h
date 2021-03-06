//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class AccountBasicInfoModel, NSString;

@interface GetFeedBackContentInfoModel : CTBusinessBean <NSCoding>
{
    AccountBasicInfoModel *feedBackEditorModel;
    NSString *feedBackContent;
    NSString *feedBackTime;
    AccountBasicInfoModel *feedBackReplyModel;
    NSString *replyContent;
    NSString *replyTime;
}

@property(copy, nonatomic) NSString *replyTime; // @synthesize replyTime;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent;
@property(retain, nonatomic) AccountBasicInfoModel *feedBackReplyModel; // @synthesize feedBackReplyModel;
@property(copy, nonatomic) NSString *feedBackTime; // @synthesize feedBackTime;
@property(copy, nonatomic) NSString *feedBackContent; // @synthesize feedBackContent;
@property(retain, nonatomic) AccountBasicInfoModel *feedBackEditorModel; // @synthesize feedBackEditorModel;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

