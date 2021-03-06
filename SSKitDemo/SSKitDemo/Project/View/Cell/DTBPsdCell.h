//
//  DTBPsdCell.h
//  DotaBox-iOS
//
//  Created by QuincyYan on 16/10/11.
//  Copyright © 2016年 Quincy Yan. All rights reserved.
//

#import <SSKit/SSKit.h>

@interface DTBPsdCell : SSTableViewCell

@property (nonatomic,copy) NSString *promptStr;
@property (nonatomic,copy) NSString *placeHolder;
@property (nonatomic) BOOL isPassword;

@property (nonatomic,copy) TextCallback callback;

@end
