//
//  makeFile.h
//  ModelCoder
//
//  Created by 朱潮 on 14-8-14.
//  Copyright (c) 2014年 zhuchao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONKit.h"
typedef enum
{
    kString = 0,
    kNumber = 1,
    kArray  = 2,
    kDictionary = 3,
    kBool   = 4,
}JsonValueType;

@interface MakeFile : NSObject
@property(nonatomic,retain) NSString *path;
@property(nonatomic,retain) NSMutableString *templateH;
@property(nonatomic,retain) NSMutableString *templateM;
-(NSMutableArray *)checkProperty:(NSString *)json fileName:(NSString *)fileName;
-(NSString*)getJSONWithURL:(NSString *)strUrl;
-(void)generateClass:(NSString *)jsonString fileName:(NSString *)name;
-(JsonValueType)type:(id)obj;
@end
