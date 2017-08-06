//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTCommentModelProtocol.h"

@class NSArray, NSNumber, NSString, TTForumModel, TTGroupModel, TTThreadQutoedCommentModel;

@interface TTThreadCommentEntity : NSObject <TTCommentModelProtocol>
{
    _Bool isOwner;
    _Bool isFollowing;
    _Bool isFollowed;
    _Bool _isPGCAuthor;
    _Bool _userDigged;
    _Bool _userBuried;
    _Bool _isBlocking;
    _Bool _isBlocked;
    _Bool _isUnFold;
    _Bool _isStick;
    _Bool _shouldShowDelete;
    TTThreadQutoedCommentModel *quotedComment;
    NSNumber *userRelation;
    NSNumber *_commentID;
    NSNumber *_commentCreateTime;
    NSNumber *_userID;
    NSString *_userName;
    NSString *_commentContent;
    NSString *_fromSite;
    NSString *_userAvatarURL;
    NSString *_userProfileURL;
    NSString *_userPlatform;
    NSString *_itemTag;
    NSString *_userSignature;
    NSString *_accessoryInfo;
    NSString *_openURL;
    NSString *_mediaName;
    NSString *_mediaId;
    NSString *_verifiedInfo;
    NSString *_userAuthInfo;
    NSArray *_userRoleIcons;
    NSNumber *_score;
    NSArray *_replyModelArr;
    NSArray *_authorBadgeList;
    NSArray *_usernamePositions;
    TTGroupModel *_groupModel;
    TTForumModel *_forumModel;
    NSNumber *_cellType;
    NSNumber *_digCount;
    NSNumber *_replyCount;
    NSNumber *_buryCount;
    NSArray *_imageDictArray;
    NSArray *_imageInfoArray;
}

+ (id)createEntitiesWithArray:(id)arg1 groupModel:(id)arg2;
+ (id)createWithCommentStructModel:(id)arg1 groupModel:(id)arg2;
+ (id)createWithCommentDataStruchModel:(id)arg1 groupModel:(id)arg2;
@property(copy, nonatomic) NSArray *imageInfoArray; // @synthesize imageInfoArray=_imageInfoArray;
@property(copy, nonatomic) NSArray *imageDictArray; // @synthesize imageDictArray=_imageDictArray;
@property(nonatomic) _Bool shouldShowDelete; // @synthesize shouldShowDelete=_shouldShowDelete;
@property(nonatomic) _Bool isStick; // @synthesize isStick=_isStick;
@property(nonatomic) _Bool isUnFold; // @synthesize isUnFold=_isUnFold;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) _Bool isBlocking; // @synthesize isBlocking=_isBlocking;
@property(nonatomic) _Bool userBuried; // @synthesize userBuried=_userBuried;
@property(nonatomic) _Bool userDigged; // @synthesize userDigged=_userDigged;
@property(retain, nonatomic) NSNumber *buryCount; // @synthesize buryCount=_buryCount;
@property(retain, nonatomic) NSNumber *replyCount; // @synthesize replyCount=_replyCount;
@property(retain, nonatomic) NSNumber *digCount; // @synthesize digCount=_digCount;
@property(retain, nonatomic) NSNumber *cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) TTForumModel *forumModel; // @synthesize forumModel=_forumModel;
@property(retain, nonatomic) TTGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) NSArray *usernamePositions; // @synthesize usernamePositions=_usernamePositions;
@property(copy, nonatomic) NSArray *authorBadgeList; // @synthesize authorBadgeList=_authorBadgeList;
@property(copy, nonatomic) NSArray *replyModelArr; // @synthesize replyModelArr=_replyModelArr;
@property(retain, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) NSArray *userRoleIcons; // @synthesize userRoleIcons=_userRoleIcons;
@property(copy, nonatomic) NSString *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(copy, nonatomic) NSString *verifiedInfo; // @synthesize verifiedInfo=_verifiedInfo;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *mediaName; // @synthesize mediaName=_mediaName;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(copy, nonatomic) NSString *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
@property(copy, nonatomic) NSString *userSignature; // @synthesize userSignature=_userSignature;
@property(copy, nonatomic) NSString *itemTag; // @synthesize itemTag=_itemTag;
@property(copy, nonatomic) NSString *userPlatform; // @synthesize userPlatform=_userPlatform;
@property(copy, nonatomic) NSString *userProfileURL; // @synthesize userProfileURL=_userProfileURL;
@property(copy, nonatomic) NSString *userAvatarURL; // @synthesize userAvatarURL=_userAvatarURL;
@property(copy, nonatomic) NSString *fromSite; // @synthesize fromSite=_fromSite;
@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSNumber *commentCreateTime; // @synthesize commentCreateTime=_commentCreateTime;
@property(retain, nonatomic) NSNumber *commentID; // @synthesize commentID=_commentID;
@property(nonatomic) _Bool isPGCAuthor; // @synthesize isPGCAuthor=_isPGCAuthor;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner;
@property(retain, nonatomic) NSNumber *userRelation; // @synthesize userRelation;
@property(retain, nonatomic) TTThreadQutoedCommentModel *quotedComment; // @synthesize quotedComment;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)userInfoStr;
- (id)userRelationStr;
- (_Bool)hasReply;
- (_Bool)isAvailable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 groupModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
