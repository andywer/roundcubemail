<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Bem-vindo ao $product';
$labels['username']  = 'Utilizador';
$labels['password']  = 'Palavra-passe';
$labels['server']    = 'Servidor';
$labels['login']     = 'Entrar';

// taskbar
$labels['logout']   = 'Sair';
$labels['mail']     = 'Mensagens';
$labels['settings'] = 'Definições';
$labels['addressbook'] = 'Contactos';

// mailbox names
$labels['inbox']  = 'A Receber';
$labels['drafts'] = 'Rascunhos';
$labels['sent']   = 'Itens Enviados';
$labels['trash']  = 'Reciclagem';
$labels['junk']   = 'Spam';

// message listing
$labels['subject'] = 'Assunto';
$labels['from']    = 'Remetente';
$labels['sender']  = 'Remetente';
$labels['to']      = 'Para';
$labels['cc']      = 'Cc';
$labels['bcc']     = 'Bcc';
$labels['replyto'] = 'Responder para';
$labels['followupto'] = 'Reencaminhar-Para';
$labels['date']    = 'Data';
$labels['size']    = 'Tamanho';
$labels['priority'] = 'Prioridade';
$labels['organization'] = 'Organização';
$labels['readstatus'] = 'Estado de leitura';
$labels['listoptions'] = 'Lista de opções...';

$labels['mailboxlist'] = 'Pastas';
$labels['messagesfromto'] = 'Mensagens de $from a $to de $count';
$labels['threadsfromto'] = 'Tópicos de $from a $to de $count';
$labels['messagenrof'] = 'Mensagem $nr de $count';
$labels['fromtoshort'] = '$from – $to de $count';

$labels['copy']     = 'Copiar';
$labels['move']     = 'Mover';
$labels['moveto']   = 'mover para...';
$labels['download'] = 'descarregar';
$labels['open']     = 'Abrir';
$labels['showattachment'] = 'Mostrar';
$labels['showanyway'] = 'Mostrar na mesma';

$labels['filename'] = 'Ficheiro';
$labels['filesize'] = 'Tamanho';

$labels['addtoaddressbook'] = 'Adicionar à lista de contactos';

// weekdays short
$labels['sun'] = 'Dom';
$labels['mon'] = 'Seg';
$labels['tue'] = 'Ter';
$labels['wed'] = 'Qua';
$labels['thu'] = 'Qui';
$labels['fri'] = 'Sex';
$labels['sat'] = 'Sáb';

// weekdays long
$labels['sunday']    = 'Domingo';
$labels['monday']    = 'Segunda-feira';
$labels['tuesday']   = 'Terça-feira';
$labels['wednesday'] = 'Quarta-feira';
$labels['thursday']  = 'Quinta-feira';
$labels['friday']    = 'Sexta-feira';
$labels['saturday']  = 'Sábado';

// months short
$labels['jan']	= 'Jan';
$labels['feb']	= 'Fev';
$labels['mar']	= 'Mar';
$labels['apr']	= 'Abr';
$labels['may']	= 'Maio';
$labels['jun']	= 'Jun';
$labels['jul'] 	= 'Jul';
$labels['aug']	= 'Ago';
$labels['sep']	= 'Set';
$labels['oct']	= 'Out';
$labels['nov']	= 'Nov';
$labels['dec']	= 'Dez';

// months long
$labels['longjan']	= 'Janeiro';
$labels['longfeb']	= 'Fevereiro';
$labels['longmar']	= 'Março';
$labels['longapr']	= 'Abril';
$labels['longmay']	= 'Maio';
$labels['longjun']	= 'Junho';
$labels['longjul']	= 'Julho';
$labels['longaug']	= 'Agosto';
$labels['longsep']	= 'Setembro';
$labels['longoct']	= 'Outubro';
$labels['longnov']	= 'Novembro';
$labels['longdec']	= 'Dezembro';

$labels['today'] = 'Hoje';

// toolbar buttons
$labels['refresh']          = 'Actualizar';
$labels['checkmail']        = 'Verificar existência de novas mensagens';
$labels['compose']          = 'Nova mensagem';
$labels['writenewmessage']  = 'Criar nova mensagem';
$labels['reply']            = 'Responder';
$labels['replytomessage']   = 'Responder';
$labels['replytoallmessage'] = 'Responder a todos';
$labels['replyall']         = 'Responder a todos';
$labels['replylist']        = 'Lista de resposta';
$labels['forward']          = 'Reencaminhar';
$labels['forwardinline']    = 'Reencaminhar';
$labels['forwardattachment'] = 'Reencaminhar como anexo';
$labels['forwardmessage']   = 'Reencaminhar';
$labels['deletemessage']    = 'Eliminar';
$labels['movemessagetotrash'] = 'Mover para reciclagem';
$labels['printmessage']     = 'Imprimir';
$labels['previousmessage']  = 'Mensagem anterior';
$labels['firstmessage']     = 'Primeira mensagem';
$labels['nextmessage']      = 'Próxima mensagem';
$labels['lastmessage']      = 'Última mensagem';
$labels['backtolist']       = 'Voltar';
$labels['viewsource']       = 'Mostrar código fonte';
$labels['mark']             = 'Marcar';
$labels['markmessages']     = 'Marcar mensagens';
$labels['markread']         = 'Como lida(s)';
$labels['markunread']       = 'Como não lida(s)';
$labels['markflagged']      = 'Com sinalização';
$labels['markunflagged']    = 'Sem sinalização';
$labels['moreactions']      = 'Mais acções...';
$labels['more']             = 'Mais';
$labels['back']             = 'Voltar';
$labels['options']          = 'Opções';

$labels['select'] = 'Seleccionar';
$labels['all'] = 'Todas';
$labels['none'] = 'Nenhum';
$labels['currpage'] = 'Página actual';
$labels['unread'] = 'Não lidas';
$labels['flagged'] = 'Sinalizadas';
$labels['unanswered'] = 'Não respondidas';
$labels['deleted'] = 'Eliminadas';
$labels['undeleted'] = 'Não eliminada';
$labels['invert'] = 'Inverter selecção';
$labels['filter'] = 'Filtro';
$labels['list'] = 'Em lista';
$labels['threads'] = 'Tópicos';
$labels['expand-all'] = 'Expandir tudo';
$labels['expand-unread'] = 'Expandir não lidas';
$labels['collapse-all'] = 'Recolher tudo';
$labels['threaded'] = 'Agrupar tópicos';

$labels['autoexpand_threads'] = 'Expandir tópicos das mensagens';
$labels['do_expand'] = 'todos os tópicos';
$labels['expand_only_unread'] = 'só com mensagens não lidas';
$labels['fromto'] = 'Remetente/Destinatário';
$labels['flag'] = 'Sinalizador';
$labels['attachment'] = 'Anexo';
$labels['nonesort'] = 'Nenhum';
$labels['sentdate'] = 'Data de envio';
$labels['arrival'] = 'Data de recepção';
$labels['asc'] = 'Ascendente';
$labels['desc'] = 'Descendente';
$labels['listcolumns'] = 'Lista de colunas';
$labels['listsorting'] = 'Ordenar por';
$labels['listorder'] = 'Ordenação';
$labels['listmode'] = 'Modo de visualização';

$labels['folderactions'] = 'Acções para pastas...';
$labels['compact'] = 'Compactar';
$labels['empty'] = 'Esvaziar';

$labels['quota'] = 'Espaço utilizado';
$labels['unknown']  = 'desconhecido';
$labels['unlimited']  = 'ilimitado';

$labels['quicksearch']  = 'Pesquisa rápida';
$labels['resetsearch']  = 'Limpar pesquisa';
$labels['searchmod']  = 'Pesquisar em';
$labels['msgtext']  = 'Mensagem completa';
$labels['body']  = 'Corpo';

$labels['openinextwin'] = 'Abrir numa nova janela';
$labels['emlsave'] = 'Guardar como (.eml)';
$labels['changeformattext'] = 'Mostrar em formato de texto simples';
$labels['changeformathtml'] = 'Mostrar em formato HTML';

// message compose
$labels['editasnew']      = 'Editar como nova';
$labels['send']           = 'Enviar';
$labels['sendmessage']    = 'Enviar';
$labels['savemessage']    = 'Guardar como rascunho';
$labels['addattachment']  = 'Adicionar anexo';
$labels['charset']        = 'Charset';
$labels['editortype']     = 'Tipo de editor';
$labels['returnreceipt']  = 'Recibo de leitura';
$labels['dsn']            = 'Recibo de entrega';
$labels['mailreplyintro'] = 'Em $date, $sender escreveu:';
$labels['originalmessage'] = 'Mensagem Original';

$labels['editidents']    = 'Editar entidades';
$labels['spellcheck']    = 'Corrector Ortográfico';
$labels['checkspelling'] = 'Verificar ortografia';
$labels['resumeediting'] = 'Continuar a edição';
$labels['revertto']      = 'Reverter para';

$labels['attach'] = 'Anexar';
$labels['attachments'] = 'Anexos';
$labels['upload'] = 'Carregar';
$labels['uploadprogress'] = '$percent ($current de $total)';
$labels['close']  = 'Fechar';
$labels['messageoptions']  = 'Opções de mensagens...';

$labels['low']     = 'Baixa';
$labels['lowest']  = 'Muito baixa';
$labels['normal']  = 'Normal';
$labels['high']    = 'Alta';
$labels['highest'] = 'Muito alta';

$labels['nosubject']  = '(sem assunto)';
$labels['showimages'] = 'Mostrar imagens';
$labels['alwaysshow'] = 'Mostrar sempre imagens a partir de $sender';
$labels['isdraft']    = 'Esta é uma mensagem de rascunho.';
$labels['andnmore']   = '$nr mais...';
$labels['togglemoreheaders'] = 'Mostrar cabeçalhos adicionais da mensagem';
$labels['togglefullheaders'] = 'Mostrar cabeçalho original da mensagem';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Texto simples';
$labels['savesentmessagein'] = 'Guardar mensagem enviada em';
$labels['dontsave'] = 'não guardar';
$labels['maxuploadsize'] = 'Tamanho máximo permitido do ficheiro é $size';

$labels['addcc'] = 'Adicionar Cc';
$labels['addbcc'] = 'Adicionar Bcc';
$labels['addreplyto'] = 'Adicionar Responder para';
$labels['addfollowupto'] = 'Adicionar Reencaminhar para';

// mdn
$labels['mdnrequest'] = 'O remetente desta mensagem pediu para ser notificado quando esta mensagem fosse lida. Deseja enviar uma notificação?';
$labels['receiptread'] = 'Recibo de leitura';
$labels['yourmessage'] = 'Isto é um recibo de leitura da sua mensagem';
$labels['receiptnote'] = 'Nota: este recibo apenas indica que a mensagem foi aberta pelo destinatário. Não garante que a mensagem foi lida ou compreendida.';

// address boook
$labels['name']         = 'Nome completo';
$labels['firstname']    = 'Primeiro nome';
$labels['surname']      = 'Apelido';
$labels['middlename']   = 'Outros nomes/apelidos';
$labels['nameprefix']   = 'Título';
$labels['namesuffix']   = 'Sufixo';
$labels['nickname']     = 'Alcunha';
$labels['jobtitle']     = 'Cargo';
$labels['department']   = 'Departamento';
$labels['gender']       = 'Género';
$labels['maidenname']   = 'Nome solteiro';
$labels['email']        = 'E-mail';
$labels['phone']        = 'Telefone';
$labels['address']      = 'Endereço';
$labels['street']       = 'Rua';
$labels['locality']     = 'Cidade';
$labels['zipcode']      = 'Código postal';
$labels['region']       = 'Localidade';
$labels['country']      = 'Pais';
$labels['birthday']     = 'Data de nascimento';
$labels['anniversary']  = 'Aniversário';
$labels['website']      = 'Página web';
$labels['instantmessenger'] = 'Endereço IM';
$labels['notes'] = 'Notas';
$labels['male']   = 'masculino';
$labels['female'] = 'feminino';
$labels['manager'] = 'Gerente';
$labels['assistant'] = 'Assistente';
$labels['spouse'] = 'Cônjuge';
$labels['allfields'] = 'Todos os campos';
$labels['search'] = 'Pesquisar';
$labels['advsearch'] = 'Pesquisa avançada';
$labels['advanced'] = 'Pesquisa avançada';
$labels['other'] = 'Outro';

$labels['typehome']   = 'Residência';
$labels['typework']   = 'Empresa';
$labels['typeother']  = 'Outro';
$labels['typemobile']  = 'Telemóvel';
$labels['typemain']  = 'Principal';
$labels['typehomefax']  = 'Fax da residência';
$labels['typeworkfax']  = 'Fax da empresa';
$labels['typecar']  = 'Carro';
$labels['typepager']  = 'Pager';
$labels['typevideo']  = 'Vídeo';
$labels['typeassistant']  = 'Assistente';
$labels['typehomepage']  = 'Página Inicial';
$labels['typeblog'] = 'Blog';
$labels['typeprofile'] = 'Perfil';

$labels['addfield'] = 'Adicionar campo...';
$labels['addcontact'] = 'Criar novo contacto';
$labels['editcontact'] = 'Editar contacto';
$labels['contacts'] = 'Contactos';
$labels['contactproperties'] = 'Dados do contacto';
$labels['personalinfo'] = 'Informação pessoal';

$labels['edit']   = 'Editar';
$labels['cancel'] = 'Cancelar';
$labels['save']   = 'Guardar';
$labels['delete'] = 'Eliminar';
$labels['rename'] = 'Renomear';
$labels['addphoto'] = 'Adicionar';
$labels['replacephoto'] = 'Substituir';
$labels['uploadphoto'] = 'Carregar foto';

$labels['newcontact']     = 'Criar novo contacto';
$labels['deletecontact']  = 'Eliminar contacto(s) seleccionado(s)';
$labels['composeto']      = 'Nova mensagem para';
$labels['contactsfromto'] = 'Contactos $from - $to of $count';
$labels['print']          = 'Imprimir';
$labels['export']         = 'Exportar';
$labels['exportall']      = 'Exportar todos';
$labels['exportsel']      = 'Exportar selecionados';
$labels['exportvcards']   = 'Exportar contactos no formato vCard';
$labels['newcontactgroup'] = 'Criar novo grupo de contactos';
$labels['grouprename']    = 'Renomear grupo';
$labels['groupdelete']    = 'Eliminar grupo';
$labels['groupremoveselected'] = 'Remover o(s) contacto(s) seleccionado(s) do grupo';

$labels['previouspage']   = 'Página anterior';
$labels['firstpage']      = 'Primeira página';
$labels['nextpage']       = 'Página seguinte';
$labels['lastpage']       = 'Última página';

$labels['group'] = 'Grupo';
$labels['groups'] = 'Grupos';
$labels['personaladrbook'] = 'Endereços pessoais';

$labels['searchsave'] = 'Guardar pesquisa';
$labels['searchdelete'] = 'Eliminar pesquisa';

$labels['import'] = 'Importar';
$labels['importcontacts'] = 'Importação de contactos';
$labels['importfromfile'] = 'Importar do ficheiro:';
$labels['importtarget'] = 'Adicionar novo contacto ao livro de endereços:';
$labels['importreplace'] = 'Substituir todo o livro de endereços.';
$labels['importdesc'] = 'Pode enviar/carregar contactos de um livro de endereços existente.<br/>Neste momento suportamos a importação nos seguintes formatos: <a href="http://en.wikipedia.org/wiki/VCard">vCard</a> ou CSV (valores separados por vírgula).';
$labels['done'] = 'Terminado';

// settings
$labels['settingsfor'] = 'Configurações para';
$labels['about'] = 'Acerca';
$labels['preferences'] = 'Preferências';
$labels['userpreferences'] = 'Preferências do utilizador';
$labels['editpreferences'] = 'Editar preferências do utilizador';

$labels['identities'] = 'Identidades';
$labels['manageidentities'] = 'Gerir identidades para esta conta';
$labels['newidentity'] = 'Nova identidade';

$labels['newitem'] = 'Novo item';
$labels['edititem'] = 'Editar item';

$labels['preferhtml'] = 'Mostrar mensagens em HTML';
$labels['defaultcharset'] = 'Conjunto de caracteres predefinido';
$labels['htmlmessage'] = 'Mensagem em HTML';
$labels['messagepart'] = 'Parte';
$labels['digitalsig'] = 'Assinatura Digital';
$labels['dateformat'] = 'Formato da data';
$labels['timeformat'] = 'Formato da hora';
$labels['prettydate'] = 'Formatar datas';
$labels['setdefault']  = 'Marcar como predefinido';
$labels['autodetect']  = 'Auto';
$labels['language']  = 'Idioma';
$labels['timezone']  = 'Fuso horário';
$labels['pagesize']  = 'Linhas por página';
$labels['signature'] = 'Assinatura';
$labels['dstactive']  = 'Horário de verão';
$labels['showinextwin'] = 'Abrir mensagem numa nova janela';
$labels['composeextwin'] = 'Compor numa nova janela';
$labels['htmleditor'] = 'Escrever mensagens em HTML';
$labels['htmlonreply'] = 'apenas em resposta a mensagens HTML';
$labels['htmlonreplyandforward'] = 'no reencaminhamento ou resposta de mensagem em HTML';
$labels['htmlsignature'] = 'Assinatura em HTML';
$labels['previewpane'] = 'Mostrar pré-visualização';
$labels['skin'] = 'Aspecto [tema]';
$labels['logoutclear'] = 'Esvaziar a Reciclagem ao sair';
$labels['logoutcompact'] = 'Compactar Caixa de Entrada ao sair';
$labels['uisettings'] = 'Interface do utilizador';
$labels['serversettings'] = 'Definições do servidor';
$labels['mailboxview'] = 'Visualização da Caixa de Entrada';
$labels['mdnrequests'] = 'Enviar notificações';
$labels['askuser'] = 'perguntar ao ultilizador';
$labels['autosend'] = 'enviar automáticamente';
$labels['autosendknown'] = 'enviar recibo de leitura apenas para os meus contactos';
$labels['autosendknownignore'] = 'enviar recibo para os meus contactos, caso contrário, ignorar';
$labels['ignore'] = 'ignorar';
$labels['readwhendeleted'] = 'Marcar a mensagem como lida ao eliminar';
$labels['flagfordeletion'] = 'Marcar a mensagem para eliminação, em vez de a eliminar';
$labels['skipdeleted'] = 'Não mostrar mensagens eliminadas';
$labels['deletealways'] = 'Se ao mover mensagens para a reciclagem falhar, eliminá-las';
$labels['deletejunk'] = 'Eliminar diretamente as mensagens no Spam';
$labels['showremoteimages'] = 'Mostrar imagens externas';
$labels['fromknownsenders'] = 'de remetentes conhecidos';
$labels['always'] = 'sempre';
$labels['showinlineimages'] = 'Mostrar imagens anexadas abaixo da mensagem';
$labels['autosavedraft']  = 'Guardar rascunho automaticamente';
$labels['everynminutes']  = 'a cada $n minuto(s)';
$labels['refreshinterval']  = 'Actualizar (verificar por novas mensagens, etc.)';
$labels['never']  = 'nunca';
$labels['immediately']  = 'imediatamente';
$labels['messagesdisplaying'] = 'Visualização de mensagens';
$labels['messagescomposition'] = 'Composição de mensagens';
$labels['mimeparamfolding'] = 'Nome dos anexos';
$labels['2231folding'] = 'Total RFC 2231 (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'Total RFC 2047 (outro)';
$labels['force7bit'] = 'Usar codificação MIME para caracteres de 8 bits';
$labels['advancedoptions'] = 'Opções avançadas';
$labels['focusonnewmessage'] = 'Activar a janela do navegador na nova mensagem';
$labels['checkallfolders'] = 'Verificar por novas mensagens em todas as pastas';
$labels['displaynext'] = 'Depois de mover/eliminar uma mensagem, mostrar a próxima mensagem';
$labels['defaultfont'] = 'Tipo de letra padrão para mensagens HTML';
$labels['mainoptions'] = 'Opções';
$labels['browseroptions'] = 'Opções do browser';
$labels['section'] = 'Secção';
$labels['maintenance'] = 'Manutenção';
$labels['newmessage'] = 'Nova Mensagem';
$labels['signatureoptions'] = 'Opções de Assinatura';
$labels['whenreplying'] = 'Ao responder';
$labels['replyempty'] = 'Não incluir a mensagem original';
$labels['replytopposting'] = 'criar nova mensagem acima da original';
$labels['replybottomposting'] = 'criar nova mensagem abaixo da original';
$labels['replyremovesignature'] = 'Ao responder, remover a assinatura original da mensagem';
$labels['autoaddsignature'] = 'Adicionar assinatura automaticamente';
$labels['newmessageonly'] = 'apenas em novas mensagens';
$labels['replyandforwardonly'] = 'apenas em respostas e reenvios';
$labels['replysignaturepos'] = 'Ao responder ou reencaminhar colocar assinatura';
$labels['belowquote'] = 'depois da citação';
$labels['abovequote'] = 'antes da citação';
$labels['insertsignature'] = 'Inserir assinatura';
$labels['previewpanemarkread']  = 'Marcar mensagem como lida';
$labels['afternseconds']  = 'após $n segundos';
$labels['reqmdn'] = 'Pedir sempre um recibo de leitura';
$labels['reqdsn'] = 'Pedir sempre um recibo de entrega';
$labels['replysamefolder'] = 'Guardar respostas na mesma pasta da mensagem original';
$labels['defaultabook'] = 'Livro de endereços padrão';
$labels['autocompletesingle'] = 'Ignorar endereços de email alternativos no preenchimento automático';
$labels['listnamedisplay'] = 'Listar contactos como';
$labels['spellcheckbeforesend'] = 'Verificar ortografia antes de enviar a mensagem';
$labels['spellcheckoptions'] = 'Opções de verificação ortográfica';
$labels['spellcheckignoresyms'] = 'Ignorar palavras com símbolos';
$labels['spellcheckignorenums'] = 'Ignorar palavras com números';
$labels['spellcheckignorecaps'] = 'Ignorar palavras em maiúsculas';
$labels['addtodict'] = 'Adicionar ao dicionário';
$labels['mailtoprotohandler'] = 'Registar manipulador de protocolo para mailto: links';
$labels['forwardmode'] = 'Reencaminhamento de mensagens';
$labels['inline'] = 'em linha';
$labels['asattachment'] = 'como anexo';

$labels['folder']  = 'Pasta';
$labels['folders']  = 'Pastas';
$labels['foldername']  = 'Nome da pasta';
$labels['subscribed']  = 'Subscrita';
$labels['messagecount'] = 'Mensagens';
$labels['create']  = 'Criar';
$labels['createfolder']  = 'Criar nova pasta';
$labels['managefolders']  = 'Gerir pastas';
$labels['specialfolders'] = 'Pastas especiais (predefinidas)';
$labels['properties'] = 'Propriedades';
$labels['folderproperties'] = 'Propriedades da pasta';
$labels['parentfolder'] = 'Pasta de origem';
$labels['location'] = 'Localização';
$labels['info'] = 'Informação';
$labels['getfoldersize'] = 'Clique para obter o tamanho da pasta';
$labels['changesubscription'] = 'Clique para alterar a subscrição';
$labels['foldertype'] = 'Tipo de pasta';
$labels['personalfolder']  = 'Pasta privada';
$labels['otherfolder']  = 'Outro tipo de pasta';
$labels['sharedfolder']  = 'Pasta pública';

$labels['sortby'] = 'Ordenar por';
$labels['sortasc']  = 'Ordenação Ascendente';
$labels['sortdesc'] = 'Ordenação Descendente';
$labels['undo'] = 'Anular';

$labels['installedplugins'] = 'Plugins instalados';
$labels['plugin'] = 'Plugin';
$labels['version'] = 'Versão';
$labels['source'] = 'Fonte';
$labels['license'] = 'Licença';
$labels['support'] = 'Obter suporte';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KB';
$labels['MB'] = 'MB';
$labels['GB'] = 'GB';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'Inglês';
$labels['westerneuropean'] = 'Europa Ocidental';
$labels['easterneuropean'] = 'Europa Leste';
$labels['southeasterneuropean'] = 'Sudeste Europeu';
$labels['baltic'] = 'Báltico';
$labels['cyrillic'] = 'Cirílico';
$labels['arabic'] = 'Árabe';
$labels['greek'] = 'Grego';
$labels['hebrew'] = 'Hebraico';
$labels['turkish'] = 'Turno';
$labels['nordic'] = 'Nórdico';
$labels['thai'] = 'Tailandês';
$labels['celtic'] = 'Céltico';
$labels['vietnamese'] = 'Vietnamita';
$labels['japanese'] = 'Japonês';
$labels['korean'] = 'Coreano';
$labels['chinese'] = 'Chinês';

?>
